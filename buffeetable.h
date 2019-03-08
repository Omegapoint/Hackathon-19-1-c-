#include <vector>
#include <iostream>
#include <list>

using namespace std;

class BuffeeTable {
public:
	
	list<Dish> dishes = {};

	BuffeeTable(int dishesAmount) {
		for (int i = 0; i < dishesAmount; i++) {
			dishes.push_back(Dish(i));
		}
	}

	void print() {
	
		for (Dish i : dishes) {
			cout << "Item";
			cout << i.value;
		}
	}
};
