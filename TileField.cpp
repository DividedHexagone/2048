#include "stdafx.h"
#include "TileField.h"

TileField::TileField(const sf::Vector2u& size, unsigned maximumScore) : _size(size)
{
	_maximumScore = maximumScore;

	_field.reserve(size.x);
	
	for (int I = 0; I < _size.x; ++I)
	{
		_field[I].reserve(size.y);
	}

	Clear();
}

TileField::~TileField()
{

}

void TileField::SetValue(const sf::Vector2u& position, unsigned value)
{
	_field[position.x][position.y] = value;
}

unsigned TileField::GetValue(const sf::Vector2u& position) const
{
	return _field[position.x][position.y];
}

void TileField::Clear()
{
	for (size_t X = 0; X < _size.x; ++X)
	{
		for (size_t Y = 0; Y < _size.y; ++Y)
		{
			_field[X][Y] = 0;
		}
	}
}

bool TileField::IsReachMaximum() const
{
	for (size_t X = 0; X < _size.x; ++X)
	{
		for (size_t Y = 0; Y < _size.y; ++Y)
		{
			if (_field[X][Y] == _maximumScore)
			{
				return true;
			}
		}
	}

	return false;
}

bool TileField::IsPointInRange(const sf::Vector2u& position)
{
	return position.x >= 0 && position.y >= 0 && position.x < _size.x && position.y < _size.y;
}

bool TileField::IsFieldFull() const
{
	unsigned filledCount = 0;

	for (size_t X = 0; X < _size.x; ++X)
	{
		for (size_t Y = 0; Y < _size.y; ++Y)
		{
			if (_field[I] > 0)
			{
				++filledCount;
			}
		}
	}

	return filledCount == _size.x*_size.y;
}
