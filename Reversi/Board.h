#pragma once
#include <array>

#include "Token.h"

template <int N = 8>
class Board
{
public:
	Board()
	{
		board_ = std::array<std::array<int, N>, N>();

		/// <summary>
		///	  0 1 2 3 4 5 6 7
		/// 0 0 0 0 0 0 0 0 0
		///	1 0 0 0 0 0 0 0 0
		///	2 0 0 0 0 0 0 0 0
		///	3 0 0 0 W B 0 0 0
		///	4 0 0 0 B W 0 0 0
		///	5 0 0 0 0 0 0 0 0
		///	6 0 0 0 0 0 0 0 0
		///	7 0 0 0 0 0 0 0 0
		/// </summary>

		board_[3][3] = Token::white;
		board_[3][4] = Token::black;
		board_[4][3] = Token::black;
		board_[4][4] = Token::white;
	}

	std::array<std::array<int, N>, N> getBoard()
	{
		return board_;
	}

	int getSize() const
	{
		return size_;
	}

private:
	std::array<std::array<int, N>, N> board_;
	int size_ = N;
};
