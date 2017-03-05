// BraunerNatan_ProjectBeta.cpp : Defines the entry point for the console application.
//the react function will be difficult and coding the domain will be difficult

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

//Britny taught me about passing by reference and passing by pointer
//Bryant taught me a lot about coding in general for HW 2 but I forgot to mention him...

class domain {
	//define the dimensions of domain, make it easily changable
public:
	//define size
	int rowsize = 10;
	int columnsize = 10;
	double Grid[]; //[];
	//define goal location
	//store values for the state
	//store values for the Q-table
	struct values;
	void buildtable();
		//How do I store these values in the Qtable?
		//Do I need separate tables to store state and Qtable values?
	//store reward values for every state based on whether it is the goal or not

};

struct domain::values {
	int state=0;					//state coordinate
	int xy[1][2] = { 0,0 };					//y coordinate
	double Qval=0;	//value from q table
	int agentpresent;
};

/*void domain::buildtable() {
	int rowsize = 10;
	int columnsize = 10;

	for (int row = rowsize; row < 10; row++) {
		for (int column = 0; column < columnsize; column++) {
			//Grid[rowsize] = { values };//[columnsize] = { {},{} }

		}
	}
}*/
class agent {
public:
	void sense(); //sense which state
	void decide(); //use the data in this state to determine which q table to enter
	void act(); //move the agent in the space to a new state.
	void react(); //calculate the values for the q table and input the values into its proper state


};

void agent::sense() {
	//read the state that the agent is in by use of the domain class
	//output a value that is useful to initialize the decide function.
}

void agent::decide() {
	//choose whether to take greedy/random option
	//if (greed option chosen){
		//read values from Qtable
		//pick largest one
	//}
	//output a direction based on the largest Qvalue
}

void agent::act() {
	//take in the decided direction
	//move to space by changing states
}

void agent::react() {
	//code here
	//calculate the new Qtable value
	//use equation
		//get old Q value from state
		//decide a value for alpha
		//input reward value for this state
		
}
int main()
{
	/*int rowsize = 10;
	int columnsize = 10;
	for (int row = 0; row < rowsize; row++) {
		for (int column = 0; column < columnsize; column++) {
			domain values[row][column];
		}
	}
	


	/*Qlearner state1=
	{

	}*/
domain values=
{
	int state;
	


};
	return 0;
}

