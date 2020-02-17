#include "stdafx.h"
#include "TileModel.h"

TileModel::TileModel(sf::Texture* texture, unsigned value)
{
	_texture = texture;
	_value = value;
}

const sf::Texture& TileModel::getTexture() const
{
	return *_texture;
}

const unsigned TileModel::getValue() const
{
	return _value;
}
