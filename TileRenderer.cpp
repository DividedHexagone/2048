#include "stdafx.h"
#include "TileRenderer.h"

TileRenderer::TileRenderer(const sf::Vector2f& position, const sf::Vector2f& size, const sf::Texture* texture)
{
	_shape.setPosition(position);
	_shape.setSize(size);
	_shape.setTexture(texture);
}

void TileRenderer::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(_shape);
}

void TileRenderer::setTexture(const sf::Texture* texture)
{
	_shape.setTexture(texture);
}

void TileRenderer::setPosition(const sf::Vector2f& position)
{
	_shape.setPosition(position);
}
