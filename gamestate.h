#include <iostream>
#include "dish.h"
#include <stdio.h>

class GameState {
public:

    int fullness;
	int profit;
	int timeLeft;

	GameState(int timeLeftInput, int profitInput, int fullnessInput) {
		timeLeft = timeLeftInput;
		profit = profitInput;
		fullness = fullnessInput;
	}

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

	void printCurrentState() {
		printf("Time left: %d, fullness: %d, profit: %d\n", timeLeft, fullness, profit);
	}
};
