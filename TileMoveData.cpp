#include "stdafx.h"
#include "TileMoveData.h"

TileMoveData::TileMoveData(ITile* tile, const sf::Vector2f& from, const sf::Vector2f& to)
{
	Tile = tile;
	From = from;
	To = to;
}
