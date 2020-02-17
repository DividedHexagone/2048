#pragma once
class sf::Vector2f;
class TileModel;
class TileRenderer;

struct TileRuntimeData;
struct TileMoveData;

class ITile
{
public:

	virtual ~ITile() = default;

	virtual TileMoveData MoveTo(sf::Vector2f position) = 0;
	virtual void ChangeModel(std::shared_ptr<TileModel> model) = 0;
	virtual const TileModel& GetModel() const = 0;
	virtual const TileRenderer& GetRenderer() const = 0;
	virtual void Update(TileRuntimeData data) = 0;
};