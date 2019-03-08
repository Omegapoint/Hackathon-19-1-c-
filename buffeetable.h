#include <vector>
#include <iostream>
#include <list>

using namespace std;

class BuffeeTable {
public:
	
	vector<Dish> dishes;

	explicit BuffeeTable(int dishesAmount) {
		//for (int i = 0; i < dishesAmount; i++) {
			//dishes.emplace_back(i, i, "dish " + to_string(i));
        dishes.emplace_back(1, 1, "Koriander");
        dishes.emplace_back(5, 18, "Egg noodles with wok fried in palm oil");
        dishes.emplace_back(3, 20, "Rice with soy");
        dishes.emplace_back(10, 20, "Peanut sauce");
		//}
	}

};
