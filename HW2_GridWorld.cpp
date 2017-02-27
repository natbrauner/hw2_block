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

int Ax = 2;
int Ay = 2;
int Gx = 8;
int Gy = 8;
int xmin = 1;
int xmax = max;
int ymin = 1;
int ymax = max;

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

/*void move(agent* pAx, agent* pAy, domain* pGx, domain* pGy) {
	//write a program too move the agent within the domain
	while (Ax != Gx && Ay != Gy) {
		cout << "The coordinates of the agent (x,y)=(" << Ax << "," << Ay << ")" << endl;
		int dir;
		cout << "Press 1 (up), 2 (down), 3 (left), 4 (right) to choose a direction..." << endl;
		cin >> dir;
			switch (dir) {
			case 1:
				if (pAy->Ay < pGy->ymax) {
					Ay++;
				}
				break;
			case 2:
				if (pAy->Ay > pGy->ymin) {
					Ay--;
				}
				break;
			case 3:
				if (pAx->Ax > pGx->xmin) {
					Ax--;
				}
				break;
			case 4:
				if (pAx->Ax < pGx->xmax) {
					Ax++;
				}
				break;
			default:
				cout << "Sorry, that is not a direction." << endl;
			}
			//cout << "Congratulations, you have reached the goal!" << endl;
	}
	
}*/

int main()
{
	/*agent L;
	agent* pAx = &L;
	agent* pAy = &L;
	domain Grid;
	domain* pGx = &Grid;
	domain* pGy = &Grid;

	move(pAx, pAy, pGx, pGy);*/

	//write a program too move the agent within the domain
	while (Ax != Gx || Ay != Gy) {
		cout << "The coordinates of the agent (x,y)=(" << Ax << "," << Ay << ")" << endl;
		int dir;
		cout << "Press 1 (up), 2 (down), 3 (left), 4 (right) to choose a direction..." << endl;
		cin >> dir;
		switch (dir) {
		case 1:
			if (Ay < ymax) {
				Ay++;
			}
			break;
		case 2:
			if (Ay > ymin) {
				Ay--;
			}
			break;
		case 3:
			if (Ax > xmin) {
				Ax--;
			}
			break;
		case 4:
			if (Ax < xmax) {
				Ax++;
			}
			break;
		default:
			cout << "Sorry, that is not a direction." << endl;
		}
		//cout << "Congratulations, you have reached the goal!" << endl;
	}
	cout << "Congratulations, you have reached the goal!" << endl;
	//I am tring to run my move() and bump() functions in the main how do you do that?
	return 0;
}

