#pragma once
#include "Singleton.h"
#include "PlayerHuman.h"
#include "PlayerAI.h"

class Game : public Singleton<Game>
{
public:
	Game();
	~Game();

	void Run();
	PlayerHuman mPlayerHuman;
	PlayerAI mPlayerAI;
};

