#include <iostream>
#include "dish.h"

class Player {
public:

    int fullness;
	int profit;

    void printHunger() {
        std::cout << fullness;
    }

	void eat(Dish dish) {

	}

	bool isFull() {
		return fullness == 100;
	}
};
