#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <utility> // Needed for pair
#include <stdexcept>
#include <vector>

namespace queen_attack {

	class chess_board
	{
	private:
		const std::pair<int, int> white_queen;
		const std::pair<int, int> black_queen;

	public:
		chess_board() : white_queen{ 0, 3 }, black_queen{ 7, 3 } {}
		chess_board(const std::pair<int, int>& w_queen, const std::pair<int, int>& b_queen);
		operator std::string() const;

		bool can_attack() const;
		std::pair<int, int> white() const;
		std::pair<int, int> black() const;

	};

}  // namespace queen_attack

#endif // QUEEN_ATTACK_H