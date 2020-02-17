#pragma once

class ITile;

struct TileMoveData final
{
	ITile* Tile;
	sf::Vector2f From;
	sf::Vector2f To;

	TileMoveData(ITile* tile, const sf::Vector2f& from, const sf::Vector2f& to);
};