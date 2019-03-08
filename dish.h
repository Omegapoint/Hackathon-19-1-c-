#include <string>
using namespace std;

class Dish {
public:

	string name;
	int value;
	int fillingness;

	Dish(int val, string inputName) {
		name = inputName;
		value = val;
		fillingness = val;
	}
};