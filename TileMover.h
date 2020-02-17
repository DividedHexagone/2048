#pragma once
#include "TileMoveData.h"

class TileMover final
{
public:

	TileMover(size_t bufferSize);

	void Update(float dt);

	void AddMoveData(const TileMoveData& data);

	const bool IsReady() const;

private:

	std::vector<TileMoveData> _moveData;
};