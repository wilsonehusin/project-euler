#include <vector>

typedef struct Coordinate {
	int _vertical;
	int _horizontal;
} Coord;

class Backtrack {
	private:
		std::vector<std::vector<int>> _numbers;
		std::vector<std::vector<int>> _log;
		std::vector<int> _max;
		std::vector<Coord> _maxPath;
	public:
		Backtrack(int numbers[][]);
		int getVal(Coord c);
		int[] iterateEveryElement(int length);
		int[] checkPossibleChoices(Coord start);
		int checkIfPassed(Coord check);
};