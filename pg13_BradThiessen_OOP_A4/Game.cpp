#include "stdafx.h"
#include "Game.h"

Game* Singleton<Game>::_instance = nullptr;

Game::Game()
{
}


Game::~Game()
{
}

void Game::Run()
{
	while (true)
	{
		mPlayerHuman.Run();
		mPlayerAI.Run();
	}
}
