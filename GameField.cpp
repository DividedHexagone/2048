#include "stdafx.h"
#include "GameField.h"

GameField::GameField(const sf::Vector2u& size, unsigned maximumScore) :
	_size{size},
	_field{ size, maximumScore },
	_renderer{size},
	_mover{size.x*size.y}
{
}

void GameField::MoveTo(const sf::Vector2u direction)
{
	if (!_mover.IsReady()) return;

	for (int I = 0; I < _size.x * size.y; ++I)
	{
		
	}
	//Iterate over all tiles, check their position and try to move to direction
}

void GameField::SpawnTile()
{
}

void GameField::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	//Apply transform to field

}

void GameField::Update(float dt)
{
	_mover.Update(dt);
}
