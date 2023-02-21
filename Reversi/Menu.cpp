#include "Menu.h"

#include <iostream>
#include <string>
#include <format>
#include <utility>

#include "Symbols.h"

void Menu::chooseMode()
{
	std::wcout
		<< L"1. Player vs Player\n"
		<< L"2. Player vs Bot\n"
		<< L"3. Player vs SmartBot\n"
		<< L"4. Bot vs SmartBot\n";

	int mode = 0;
	bool read_flag = false;

	while (!read_flag)
	{
		std::wstring input;
		std::wcin >> input;
		try
		{
			mode = stoi(input);
			if (mode > 0 && mode < 5)
			{
				read_flag = true;
			}
		}
		catch (...)
		{
			read_flag = false;
		}
	}

	std::wcout << L"Вы выбрали: " << mode << std::endl;

	mode_ = mode;
}

void Menu::drawBoard(Board<> board, const std::vector<std::pair<int, int>>& pairs)
{
	std::wcout << L"  1 2 3 4 5 6 7 8\n";
	auto board_ = board.getBoard();

	for (int i = 0; i < pairs.size(); ++i)
	{
		board_[pairs[i].first][pairs[i].second] = i + 3;
	}

	int i = 1;
	for (auto row : board_)
	{
		std::wcout << i++ << L"|";
		for (const auto token : row)
		{
			Symbols symbol = Symbols::empty;
			switch (token)
			{
			case Token::black:
				symbol = Symbols::black;
				break;

			case Token::white:
				symbol = Symbols::white;
				break;
			}

			if (token > 2)
			{
				std::wcout << std::to_wstring(token - 2);
			}
			else
			{
				std::wcout << static_cast<wchar_t>(symbol);
			}
			std::wcout << L' ';
		}
		std::wcout << L"|\n";
	}
}

void Menu::startGame() const
{
}

void Menu::printStep()
{
}
