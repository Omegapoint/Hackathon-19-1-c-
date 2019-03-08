#include <vector>
#include <iostream>

using namespace std;

class BuffeeTable {
public:
	
	vector<Dish> dishes;

	BuffeeTable(int dishes) {
		for (int i = 0; i < dishes.size(); i++) {
			dishes.add(new Dish())
		}
	}

	void print() {
		for (Dish i : dishes) {
			cout << "Item";
			cout << i.value;
		}
	}
};
