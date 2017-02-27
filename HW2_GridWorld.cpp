//Grid World, LEGGO!!!

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <random>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define NRAND (double) (rand()/RAND_MAX)
#define max 10

int Ax;
int Ay;
int Gx;
int Gy;

class domain {
	//define the dimensions of domain, make it easily changable
public:
	int xmin = 1;
	int xmax = max;
	int ymin = 1;
	int ymax = max;
	//int **gridword;
	
	//position of the goal in the domain
	int Gx = 8;
	int Gy = 8;
	
};

class agent {
	//origial position of Agent in domain
public:
	int Ax = 2;
	int Ay = 2;
	//void bump();
	void move();


	//state, not nessasary but could be useful for project Beta
};

/*void bump(agent* pA,domain* pG) { //
	//use if statement to deal with when the agent leaves the domain
	int i=1;
	while (pG->xmax<pA->Ax||pG->xmin>pA->Ax||pG->ymax<pA->Ay||pG->ymin>pA->Ay){
			Ax(i) = Ax(i - 1);
			Ay(i) = Ay(i - 1);
	}
}*/

void move(agent* pA, domain* pG) {
	//write a program too move the agent within the domain
	while (Ax != Gx && Ay != Gy) {
		cout << "The coordinates of the agent (x,y)=(" << Ax << "," << Ay << ")" << endl;
		int dir;
		cout << "Press 1 (up), 2 (down), 3 (left), 4 (right) to choose a direction..." << endl;
		cin >> dir;
			switch (dir) {
			case 1:
				if (pA->Ay < pG->ymax) {
					Ay++;
				}
				break;
			case 2:
				if (pA->Ay > pG->ymin) {
					Ay--;
				}
				break;
			case 3:
				if (pA->Ax > pG->xmin) {
					Ax--;
				}
				break;
			case 4:
				if (pA->Ax < pG->xmax) {
					Ax++;
				}
				break;
			default:
				cout << "Sorry, that is not a direction." << endl;
			}
			cout << "Congratulations, you have reached the goal!" << endl;
	}
	
}

int main()
{
	agent L;
	agent* pA = &L;
	domain Grid;
	domain* pG = &Grid;

	move(pA, pG);
	//I am tring to run my move() and bump() functions in the main how do you do that?
	return 0;
}

