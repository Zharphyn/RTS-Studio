// pg13_BradThiessen_OOP_A4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"

int main()
{
	Game& game = Game::GetInstance();

	game.Run();

    return 0;
}

