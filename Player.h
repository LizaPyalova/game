#pragma once
#include <vector>
#include "Arsenal.h"
#include "Team.h"
#include <iostream>
using namespace std;
class Player {
public:
	int xp;
	int power;
	string name;
	Ars arsenal;
	Player(int xp_, int power_, string name_, Ars arsenal_) : xp(xp_), power(power_), name(name_), arsenal(arsenal_) {}
	virtual void say1() {}
	virtual void say2() {}
};

class Player1 : public Player {
public:
	Player1() :Player(20, 1, "Page", Ars()) {}
	void say1();
	void say2();
};

class Player2 : public Player {
public:
	Player2() :Player(40, 2, "Squire", Ars()) {}
	void say1();
	void say2();
};

class Player3 : public Player {
public:
	Player3() :Player(60, 3, "Infantryman", Ars()) {}
	void say1();
	void say2();
};

class Player4 : public Player {
public:
	Player4() :Player(80, 4, "Archer", Ars()) {}
	void say1();
	void say2();
};

class Player5 : public Player {
public:
	Player5() :Player(100, 5, "Knight", Ars()) {}
	void say1();
	void say2();
};


