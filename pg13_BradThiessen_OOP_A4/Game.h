#pragma once
#include "Singleton.h"
#include "PlayerHuman.h"
#include "PlayerAI.h"

class Game : public Singleton<Game>
{
public:
	Game();
	~Game();

public:

	void Run()
	{
		while (true)
		{
			mPlayerHuman.Run();
			mPlayerAI.Run();
		}
	}

	PlayerHuman mPlayerHuman;
	PlayerAI mPlayerAI;
};

