#include <vector>
#include <iostream>
#include <list>

using namespace std;

class BuffeeTable {
public:
	
	vector<Dish> dishes;

	BuffeeTable(int dishesAmount) {
		for (int i = 0; i < dishesAmount; i++) {
			dishes.push_back(Dish(i, "dish " + to_string(i)));
		}
	}

};
