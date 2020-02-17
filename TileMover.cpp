#include "stdafx.h"
#include "TileMover.h"
#include "ITile.h"
#include "TileRuntimeData.h"

#include <math.h>

TileMover::TileMover(size_t bufferSize)
{
	_moveData.reserve(bufferSize);
}

void TileMover::Update(float dt)
{
	std::vector<int> toRemove;

	for (int I = 0; I < _moveData.size(); ++I)
	{
		_moveData[I].From = _moveData[I].From * (1.0f - dt) + _moveData[I].To * dt;
		_moveData[I].Tile->Update(TileRuntimeData{ _moveData[I].From });

		float manhattanDistance = (abs(_moveData[I].To.x - _moveData[I].From.x) + abs(_moveData[I].To.y - _moveData[I].From.y));

		if (manhattanDistance < 0.5f)
		{
			toRemove.insert(toRemove.begin(), I);
		}
	}
	
	for (int I = 0; I < _moveData.size(); ++I)
	{
		if (toRemove[I] == I)
		{
			_moveData.erase(_moveData.begin()+I);
		}
	}
}

void TileMover::AddMoveData(const TileMoveData& data)
{
	_moveData.push_back(data);
}

const bool TileMover::IsReady() const
{
	return _moveData.size() == 0;
}
