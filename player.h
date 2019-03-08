#include <iostream>
#include "dish.h"
#include <stdio.h>

class Player {
public:

    int fullness;
	int profit;

	Player(int profitInput, int fullnessInput) {
		profit = profitInput;
		fullness = fullnessInput;
	}

    void eat(Dish dish) {
		fullness += dish.fillingness;
		profit += dish.value;
	}

	bool isFull() {
		return fullness == 100;
	}

	void printCurrentState() {
		printf("Fullness: %d, profit: %d\n", fullness, profit);
	}

	void rest(int fillingness) {
	    fullness -= fillingness;
	    if (fullness < 0) {
	    	fullness = 0;
	    }
	}
};
