#include "stdafx.h"
#include "ITile.h"
#include "TileFieldRenderer.h"
#include "TileRenderer.h"


TileFieldRenderer::TileFieldRenderer(const sf::Vector2u& fieldSize) : _size{ fieldSize.x * fieldSize.y }
{
	_tiles = (int**)new int[_size];

	for (int I = 0; I < _size; ++I)
	{
		_tiles[I] = nullptr;
	}
}

TileFieldRenderer::~TileFieldRenderer()
{
	delete[] _tiles;
}

void TileFieldRenderer::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	//Update tile position in loop from TileRuntimeData

	for (int I = 0; I < _size; ++I)
	{
		if(_tiles[I] == nullptr) continue;

		ITile* tile = reinterpret_cast<ITile*>(_tiles[I]);
		const TileRenderer& renderer = tile->GetRenderer();
		//renderer.setPosition()
		const_cast<TileRenderer&>(renderer).draw(target, states);
	}
}
