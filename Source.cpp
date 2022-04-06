#include <iostream>
#include <vector>
#include "Player.h"
#include "Team.h"
#include "Arsenal.h"
using namespace std;

void Fight(Team t1, Team t2) {
	int k = 0;
	int l = 0;
	int sh = 0;
	while (l != 5 && k != 5) {
		sh++;
		int power1 = 1;
		int power2 = 1;
		power1 = t1.the_team[k]->power * t1.the_team[k]->arsenal.power;
		power2 = t2.the_team[l]->power * t2.the_team[l]->arsenal.power;
		if (power1 > power2) {
			while (t1.the_team[k]->xp > 0 && t2.the_team[l]->xp > 0) {
				t2.the_team[l]->xp = t2.the_team[l]->xp - power1;
				t1.the_team[k]->xp = t1.the_team[k]->xp - power2;
			}
			if (t1.the_team[k]->xp <= 0 && t2.the_team[l]->xp <= 0) {
				cout << "--------------FIGHT "<< sh <<"--------------" << endl;
				cout << t1.the_team[k]->name << " and " << t2.the_team[l]->name << " are died with words: " << endl;
				t1.the_team[k]->say1();
				cout << endl;
				t2.the_team[l]->say1();
				k++;
				l++;
				cout << endl;
				cout << "---------------------------------" << endl;

			}
			else if (t1.the_team[k]->xp <= 0) {
				cout << "--------------FIGHT " << sh << "--------------" << endl;
				cout << t1.the_team[k]->name << " was died and said: " << endl;
				t1.the_team[k]->say1();
				cout << endl;
				cout << t2.the_team[l]->name << " with " << t2.the_team[l]->arsenal.name << " is won with words:";
				cout << endl;
				t2.the_team[l]->say2(); 
				k++;
				cout << endl;
				cout << "--------------------------------" << endl;

			}
			else if (t2.the_team[l]->xp <= 0) {
				cout << "--------------FIGHT " << sh << "--------------" << endl;
				cout << t2.the_team[l]->name << " was died and said:"<<endl;
				t2.the_team[l]->say1();
				cout << endl;
				cout << t1.the_team[k]->name << " with " << t1.the_team[k]->arsenal.name << " is won with words:" << endl;
					t1.the_team[k]->say2();
				l++;
				cout << endl;
				cout << "---------------------------------" << endl;

			}
		}
		if (power1 <= power2) {
			while (t1.the_team[k]->xp > 0 && t2.the_team[l]->xp > 0) {
				t1.the_team[k]->xp = t1.the_team[k]->xp - power2;
				t2.the_team[l]->xp = t2.the_team[l]->xp - power1;

			}
			if (t1.the_team[k]->xp <= 0 && t2.the_team[l]->xp <= 0) {
				cout << "--------------FIGHT" << sh << "--------------" << endl;
				cout << t1.the_team[k]->name << " and " << t2.the_team[l]->name << " are died with words:";
				cout << endl;
				t1.the_team[k]->say1();
				cout << endl;
				t2.the_team[l]->say1();
				k++;
				l++;
				cout << endl;
				cout << "---------------------------------" << endl;
			}
			else if (t1.the_team[k]->xp <= 0) {
				cout << "--------------FIGHT " << sh << "--------------" << endl;
				cout << t1.the_team[k]->name << " was died and said: ";
				cout << endl;
				t1.the_team[k]->say1();
				cout << endl;
			    cout<< t2.the_team[l]->name << " with " << t2.the_team[l]->arsenal.name << " is won with words:";
				cout << endl;
				t2.the_team[l]->say2();
				k++;
				cout << endl;
				cout << "---------------------------------" << endl;

			}
			else if (t2.the_team[l]->xp <= 0) {
				cout << "--------------FIGHT " << sh << "--------------" << endl;
				cout << t2.the_team[l]->name << " was died and said:";
				cout << endl;
				t2.the_team[l]->say1();
				cout << endl;
					cout<< t1.the_team[k]->name << " with " << t1.the_team[k]->arsenal.name << " is won with words:";
					cout << endl;
					t1.the_team[k]->say2();
				l++;
				cout << endl;
			}
		}


	}cout << endl;
	cout << endl;
	if (k == 5) cout << "The second team is won!";
	else if (l == 5) cout << "The first team is won!";
	cout << endl;
	cout << endl;
}

void Vivod(Team& t1, Team &t2) {
	//cout << "------------------------------------"<<endl;
	cout << "|-----------TEAM 1-----------|" << endl;
	cout << "|  Players and their arsenal:" << endl;
	cout << "|  " << t1.the_team[0]->name << " with " << t1.the_team[0]->arsenal.name  << endl;
	cout << "|  " << t1.the_team[1]->name << " with " << t1.the_team[1]->arsenal.name << endl;
	cout << "|  " << t1.the_team[2]->name << " with " << t1.the_team[2]->arsenal.name  << endl;
	cout << "|  " << t1.the_team[3]->name << " with " << t1.the_team[3]->arsenal.name  << endl;
	cout << "|  " << t1.the_team[4]->name << " with " << t1.the_team[4]->arsenal.name  << endl;
	cout << "|-----------------------------|" << endl;

	cout << endl;
	cout << endl;
	cout << "|-----------TEAM 2------------|" << endl;
	cout << "|  Players and their arsenal:" << endl;
	cout << "|  " << t2.the_team[0]->name << " with " << t2.the_team[0]->arsenal.name  << endl;
	cout << "|  " << t2.the_team[1]->name << " with " << t2.the_team[1]->arsenal.name << endl;
	cout << "|  " << t2.the_team[2]->name << " with " << t2.the_team[2]->arsenal.name << endl;
	cout << "|  " << t2.the_team[3]->name << " with " << t2.the_team[3]->arsenal.name << endl;
	cout << "|  " << t2.the_team[4]->name << " with " << t2.the_team[4]->arsenal.name << endl;
	cout << "|-----------------------------|" << endl;

}
int main() {
	
	cout << "----------------------------------------------" << endl;
	srand(time(0));
	Team team1;
	Team team2;
	Vivod(team1, team2);
	Fight(team1, team2);
	cout << endl;
	cout << "------------------------------------------------";
}