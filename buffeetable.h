#include <vector>
#include <iostream>
#include <list>

using namespace std;

class BuffeeTable {
public:
	
	vector<Dish> dishes;

	explicit BuffeeTable(int dishesAmount) {
		for (int i = 0; i < dishesAmount; i++) {
			dishes.emplace_back(i, "dish " + to_string(i));
		}
	}

};
