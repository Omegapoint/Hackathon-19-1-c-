#include <time.h>
#include <vector>
#include "dish.h"

class DishFactory {
public:
    // Min vill
    // Max value
    // Min fill
    // Max fill
    vector<Dish> dishes;

    DishFactory() {
        //              Value - fillingness
        dishes.emplace_back(1, 0, "Koriander");
        dishes.emplace_back(5, 8, "Egg noodles with wok fried in palm oil");
        dishes.emplace_back(3, 10, "Rice with soy");
        dishes.emplace_back(10, 10, "Peanut sauce");
        dishes.emplace_back(1, 0, "Koriander");
        dishes.emplace_back(1, 0, "Koriander");
        dishes.emplace_back(1, 0, "Koriander");
        dishes.emplace_back(1, 0, "Koriander");
        dishes.emplace_back(1, 0, "Koriander");
        dishes.emplace_back(1, 0, "Koriander");
        dishes.emplace_back(1, 0, "Koriander");
        dishes.emplace_back(1, 0, "Koriander");
    }

    Dish randomDish(int minFillingness, int maxFillingness, int minValue, int maxValue) {
        int fillingNess = randomNumberBetween(minFillingness, maxFillingness);
        int value = randomNumberBetween(minValue, maxValue);
        Dish dish = Dish(value, fillingNess, "hej");
        return dish;
    }

private:

    int randomNumberBetween(int min, int max) {
        return min + (rand() % (max - min + 1));
    }

};