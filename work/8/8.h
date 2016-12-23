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
		Backtrack();
		int getVal(Coord c);
        std::vector<int> iterateEveryElement(int length);
        std::vector<int> checkPossibleChoices(Coord start);
		int checkIfPassed(Coord check);
};
