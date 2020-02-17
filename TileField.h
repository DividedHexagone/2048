#pragma once
class sf::Vector2u;

class TileField final
{

public:

	TileField(const sf::Vector2u& size, unsigned maximumScore);
	~TileField();

	TileField(TileField& field) = delete;

	void SetValue(const sf::Vector2u& position, unsigned value);
	unsigned GetValue(const sf::Vector2u& position) const;

	void Clear();

	bool IsPointInRange(const sf::Vector2u& position);

	bool IsFieldFull() const;

	bool IsReachMaximum() const;

private:

	const sf::Vector2u _size;

	unsigned _maximumScore;
	std::vector<std::vector<unsigned>> _field;
};