#include "person.h"
#include "buffeetable.h"
#include <stdio.h>

int main() {
	int fullness = 0;
	int profit = -20;
	int timeLeft = 10;
	Person person = Person(timeLeft, profit, fullness);

	BuffeeTable tb = BuffeeTable(5);

	int round = 0;
	while (person.timeLeft > 0) {
		printf("Round %d \n", round);

		person.timeLeft -= 1;
		round++;
	}

}