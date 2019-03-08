#include "gamestate.h"
#include "buffeetable.h"
#include <stdio.h>

int main() {
	int fullness = 0;
	int profit = -20;
	int timeLeft = 10;
	GameState gameState = GameState(timeLeft, profit, fullness);

	BuffeeTable table = BuffeeTable(5);

	int round = 0;
	string input;
	while (gameState.timeLeft > 0) {
		printf("\n\n--------------------\nRound %d \n", round);
		gameState.printCurrentState();

		printf("Eat [Y/N] ");
		cin >> input;
		if (input == "Y" || input == "y" || input == "yes" || input == "yas") {
			printf("Eating food \n");
		}
		else {
			printf("Resting \n");
		}

		gameState.timeLeft -= 2;
		round++;
	}

}