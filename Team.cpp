#include <iostream>
#include "Team.h"
#include "Arsenal.h"
#include"Player.h" 
using namespace std;
Team::Team() {
	Player1* P1 = new Player1();
	Player2* P2 = new Player2();
	Player3* P3 = new Player3();
	Player4* P4 = new Player4();
	Player5* P5 = new Player5();
	for (int i = 0; i < 5; i++) {
		int val = rand() % 5;
		if (val == 1) the_team.push_back(P1);
		else if (val == 2) the_team.push_back(P2);
		else if (val == 3) the_team.push_back(P3);
		else if (val == 4) the_team.push_back(P4);
		else if (val == 0) the_team.push_back(P5);
	}
}
