//
// Created by Tobias Axelsson on 2019-03-08.
//
#include "player.h"
#include "buffeetable.h"
#include <stdio.h>

class GameLoop {

public:
    int REST_FILLINGNESS = 2;
    int STARTING_FULLNESS = 0;
    int STARTING_PROFIT = -20;

    int timeLeft = 10;
    Player player = Player(STARTING_PROFIT, STARTING_FULLNESS);
    BuffeeTable table = BuffeeTable(5);

    void start() {

        int round = 0;
        string input;
        while (timeLeft > 0) {
            printf("\n\n--------------------\nRound %d, time left %d\n", round, timeLeft);
            player.printCurrentState();

            printf("Eat [Y/N] ");
            cin >> input;
            if (input == "Y" || input == "y" || input == "yes" || input == "yas") {
                printf("Eating food \n");
                runBuffeeLoop();
            } else {
                printf("Resting \n");
                player.rest(REST_FILLINGNESS);
            }
            timeLeft -= 2;
            round++;
        }

        printResult();

    }

    void printResult() {
        printf("\n\n\n--------------------\nGAME ENDED\nTotal profit: %d\n", player.profit);
        if (player.profit > 0) {
            printf("Victory! The restaurant lost money on your visit!");
        } else {
            printf("Failure! You did not eat enough!");
        }
    }

    void runBuffeeLoop() {
        for (unsigned int i = 0; i < table.dishes.size(); i++) {
            Dish currentDish = table.dishes.at(i);
            printf("Do you want to eat %s \n", currentDish.name.c_str());

            string answer;
            cin >> answer;

            if (answer == "Y" || answer == "y" || answer == "yes" || answer == "yas") {
                player.eat(currentDish);

                if(player.isFull()) {
                    punish(30);
                }
            }
        }
    }

    void punish(int time) {
        printf("I am being punished :( pls spare me senpai!");
        timeLeft -= time;
    }
};