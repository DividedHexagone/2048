#pragma once
#include "Tile.h"
#include "TileMover.h"
#include "TileField.h"
#include "TileFieldRenderer.h"

class sf::Vector2u;
class sf::RenderTarget;
class sf::RenderStates;

class GameField final : public sf::Drawable 
{
public:
	
	GameField(const sf::Vector2u& size, unsigned maximumScore);

	void MoveTo(const sf::Vector2u direction);

	void SpawnTile();

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

	void Update(float dt);

private:

	const sf::Vector2u _size;

	std::vector<Tile> _activeTiles;
	TileMover _mover;
	TileField _field;
	TileFieldRenderer _renderer;
};