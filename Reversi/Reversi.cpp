// Reversi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <io.h>
#include <fcntl.h>

#include "Menu.h"

int main()
{
	_setmode(_fileno(stdout), _O_U16TEXT);

	Menu menu;
	menu.chooseMode();
	const Board<> board;

	auto moves = std::vector<std::pair<int, int>>(3);
	moves[0] = std::pair<int, int>(2, 3);
	moves[1] = std::pair<int, int>(1, 2);
	moves[2] = std::pair<int, int>(4, 6);
	moves[3] = std::pair<int, int>(4, 3);
	moves[4] = std::pair<int, int>(4, 4);

	// nothing
	// ... code

	Menu::drawBoard(board, moves);
}
