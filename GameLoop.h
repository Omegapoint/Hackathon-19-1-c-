//
// Created by Tobias Axelsson on 2019-03-08.
//
#include "gamestate.h"
#include "buffeetable.h"
#include "GameLoop.h"
#include <stdio.h>

class GameLoop {

public:
    void start() {

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

                for (int i = 0; i < table.dishes.size(); i++) {
                    Dish currentDish = table.dishes.at(i);
                    printf("Do you want to eat %s \n", table.dishes.at(i).name.c_str());

                    string answer;
                    cin >> answer;

                    if (answer == "Y" || answer == "y" || answer == "yes" || answer == "yas") {
                        gameState.eat(currentDish);
                        // @TODO: too full?
                    }
                }

            }
            else {
                printf("Resting \n");
            }

            gameState.timeLeft -= 2;
            round++;
        }
    }
};