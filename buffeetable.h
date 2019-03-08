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
        dishes.push_back(Dish(1, 1, "Koriander"));
        dishes.push_back(Dish(5, 18, "Egg noodles with wok fried in palm oil"));
        dishes.push_back(Dish(3, 20, "Rice with soy"));
        dishes.push_back(Dish(10, 20, "Peanut sauce"));
		//}
	}

};
