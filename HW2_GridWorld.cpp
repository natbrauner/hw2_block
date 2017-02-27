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
	int xmin = 0;
	int xmax = max;
	int ymin = 0;
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
	void bump();
	void move();


	//state, not nessasary but could be useful for project Beta
};

void bump(agent* pA,domain* pG) { //
	//use if statement to deal with when the agent leaves the domain
	int i;
	while (pG->xmax<pA->Ax||pG->xmin>pA->Ax||pG->ymax<pA->Ay||pG->ymin>pA->Ay){
			int Ax(i) = Ax(i - 1);
			int Ay(i) = Ay(i - 1);
	}
}

void move(agent* pL, domain* pG) {
	//write a program too move the agent within the domain
	while (Ax != Gx && Ay != Gy) {
		cout << "The coordinates of the agent (x,y)=(" << Ax << "," << Ay << ")" << endl;
		int dir;
		cout << "Press 1 (up), 2 (down), 3 (left), 4 (right) to choose a direction..." << endl;
		cin >> dir;
			switch (dir) {
			case 1:
				Ay++;
			case 2:
				Ay--;
			case 3:
				Ax--;
			case 4:
				Ax++;
				break;
			default:
				cout << "Sorry, that is not a direction." << endl;
			}
			cout << "Congratulations, you have reached the goal!" << endl;
	}
	
}

int main()
{

	//I am tring to run my move() and bump() functions in the main how do you do that?
	return 0;
}

