#pragma once
class sf::RenderTarget;
class sf::RectangleShape;
class sf::RenderStates;
class sf::Vector2f;
class sf::Drawable;

class TileRenderer final : sf::Drawable
{
public:

	TileRenderer(const sf::Vector2f& position, const sf::Vector2f& size, const sf::Texture* texture);

	void setTexture(const sf::Texture* texture);
	void setPosition(const sf::Vector2f& position);

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

private:

	sf::RectangleShape _shape;
};