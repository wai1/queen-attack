#include "queen_attack.h"

namespace queen_attack {

	chess_board::chess_board(const std::pair<int, int>& w_queen, const std::pair<int, int>& b_queen)
		: white_queen{ w_queen }, black_queen{b_queen}
	{
		if (white_queen == black_queen)
			throw std::domain_error ("Queens can not be in the same position");
	}

	std::pair<int, int> chess_board::white() const
	{
		return white_queen;
	}

	std::pair<int, int> chess_board::black() const
	{
		return black_queen;
	}

	chess_board::operator std::string() const
	{
		std::string queens_board;

		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (i == white_queen.first && j == white_queen.second)
				{
					queens_board.push_back('W');
				}
					
				else if (i == black_queen.first && j == black_queen.second)
				{
					queens_board.push_back('B');
				}
					
				else
				{
					queens_board.push_back('_');
				}
				queens_board.push_back(' ');
			}
			queens_board.pop_back();
			queens_board.push_back('\n');
		}

		return queens_board;
	}

	bool chess_board::can_attack() const
	{
		if(abs(white_queen.first - black_queen.first) == abs(white_queen.second - black_queen.second))
			return true;
		if((white_queen.first - black_queen.first == 0) || (white_queen.second - black_queen.second == 0))
			return true;
		return false;
	}

}  // namespace queen_attack
