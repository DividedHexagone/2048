#pragma once
#include "ITile.h"
#include "TileRuntimeData.h"

class sf::Vector2f;
class TileModel;
class TileRenderer;

class Tile final : public ITile
{
public:

	Tile(std::shared_ptr<TileModel> model, std::shared_ptr<TileRenderer> renderer);

	virtual const TileModel& GetModel() const override;
	virtual const TileRenderer& GetRenderer() const override;
	virtual void ChangeModel(std::shared_ptr<TileModel> model) override;

	virtual TileMoveData MoveTo(sf::Vector2f position) override;
	virtual void Update(TileRuntimeData data) override;

private:

	TileRuntimeData _data;
	std::shared_ptr<TileModel> _model;
	std::shared_ptr<TileRenderer> _renderer;
};