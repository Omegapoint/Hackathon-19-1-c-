#include <iostream>
#include "dish.h"

class Person {
public:

    int fullness;
	int profit;

    void printHunger() {
        std::cout << fullness;
    }

	void eat(Dish dish) {
		fullness += dish.fillingness;
		profit += dish.value;
	}

	bool isFull() {
		return fullness == 100;
	}
};
