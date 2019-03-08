//
// Created by Tobias Axelsson on 2019-03-08.
//
#include "player.h"
#include "buffeetable.h"
#include <stdio.h>

class GameLoop {

public:

    int fullness = 0;
    int profit = -20;
    int timeLeft = 10;
    Player player = Player(profit, fullness);
    BuffeeTable table = BuffeeTable(5);

    void start() {

        int round = 0;
        string input;
        while (timeLeft > 0) {
            printf("\n\n--------------------\nRound %d \n", round);
            player.printCurrentState();

            printf("Eat [Y/N] ");
            cin >> input;
            if (input == "Y" || input == "y" || input == "yes" || input == "yas") {
                printf("Eating food \n");
                runBuffeeLoop();
            } else {
                printf("Resting \n");
            }
            timeLeft -= 2;
            round++;
        }
    }

    void runBuffeeLoop() {
        for (int i = 0; i < table.dishes.size(); i++) {
            Dish currentDish = table.dishes.at(i);
            printf("Do you want to eat %s \n", table.dishes.at(i).name.c_str());

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