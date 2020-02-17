#pragma once

class sf::Texture;

class TileModel final
{
public:

	TileModel(sf::Texture* texture, unsigned value);
	
	const sf::Texture& getTexture() const;
	const unsigned getValue() const;

private:

	sf::Texture* _texture;

	unsigned _value;
};