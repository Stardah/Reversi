#pragma once
#include <vector>

#include "Board.h"

class Menu
{
public:
	void chooseMode();

	void printScores();

	/**
	 * \brief Draws a board with given possible moves (array of pairs of coordinates) 
	 * \param board - the game board
	 * \param pairs - moves
	 */
	static void drawBoard(Board<> board, const std::vector<std::pair<int, int>>& pairs);

	void startGame() const;

	void printStep();

private:
	int mode_ = 0;
};
