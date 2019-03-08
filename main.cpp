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
		printf("Round %d \n", round);
		gameState.printCurrentState();

		cin >> input;
		cout << input;

		gameState.timeLeft -= 1;
		round++;
	}

}