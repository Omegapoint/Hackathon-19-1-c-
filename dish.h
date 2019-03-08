#include <string>
using namespace std;

class Dish {
public:

	string name;
	int value;
	int fillingness;

	Dish(int val, int fill, string inputName) {
		name = inputName;
		value = val;
		fillingness = fill;
	}
};