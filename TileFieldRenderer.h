#pragma once
class sf::Vector2u;
class sf::Drawable;
class sf::RenderTarget;
class sf::RenderStates;

class TileFieldRenderer final : public sf::Drawable, public sf::Transformable
{
public:

	TileFieldRenderer(const sf::Vector2u& fieldSize);
	~TileFieldRenderer();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:

	const unsigned _size;

	int** _tiles;
};