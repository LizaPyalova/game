#include <iostream>
#include "Arsenal.h"
#include "Player.h"
#include "Team.h"
Ars::Ars() {
	power = rand() % 5 + 1;
	if (power == 2) name = "simple stick";
	else if (power == 3) name = "spear";
	else if (power == 4) name = "bow";
	else if (power == 5) name = "sword";
	else if (power == 1) name = "no arsenal";
}