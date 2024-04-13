#pragma once
class GameHandler
{
private:
	int WhoseTurn;

public:
	GameHandler();
	~GameHandler();

	void SetWhoseTurn(int n)
	{
		this->WhoseTurn = n;
	}

	int GetWhoseTurn()
	{
		return this->WhoseTurn;
	}
};

