#include "stdafx.h"
#include "Tile.h"
#include "TileModel.h"
#include "TileRenderer.h"
#include "TileMoveData.h"

Tile::Tile(std::shared_ptr<TileModel> model, std::shared_ptr<TileRenderer> renderer)
{
	_model = model;
	_renderer = renderer;

	_renderer->setTexture(const_cast<sf::Texture*>(&_model->getTexture()));
}

TileMoveData Tile::MoveTo(sf::Vector2f position)
{
	return TileMoveData(this, _data.Poistion, position);
}

const TileModel& Tile::GetModel() const
{
	return *_model.get();
}

const TileRenderer& Tile::GetRenderer() const
{
	return *_renderer.get();
}

void Tile::ChangeModel(std::shared_ptr<TileModel> model)
{
	_model = model;

	_renderer->setTexture(&_model->getTexture());
}

void Tile::Update(TileRuntimeData data)
{
	_data = data;

	_renderer->setPosition(_data.Poistion);
}
