#include "person.h"
#include "buffeetable.h"

int main() {
	Person player;

	player.fullness = 2;

	player.printHunger();

	BuffeeTable table = new BuffeeTable(10);
	table.print();

}