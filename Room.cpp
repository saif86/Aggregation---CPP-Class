#include "Room.h"
#include <iostream>
using namespace std;


Room::Room() :area(0.0)
{
	cout << "Room  Default Constructor" << endl;
	for (int i = 0; i < 50; i++)
		chairs[i] = NULL;
}

Room::Room(Chair * chair1, int chairNo)
{
	cout << "Room Overloaded Constructor." << endl;
	if (chairNo >= 0 && chairNo < 50)
		chairs[chairNo] = chair1;
}
Room::~Room()
{
	cout << "Room Destructor." << endl;
}

void Room::AddChair(Chair * chair1, int chairNo){
	if (chairNo >= 0 && chairNo < 50)
		chairs[chairNo] = chair1;
}

Chair * Room::GetChair(int chairNo){
	if (chairNo >= 0 && chairNo < 50)
		return chairs[chairNo];
	else
		return NULL;
}


bool Room::FoldChair(int chairNo)
{
	cout << "Room is folding chair." << endl;
	if (chairNo >= 0 && chairNo < 50)
		return chairs[chairNo]->FoldChair();
	else
		return false;
}
	

bool Room::UnFoldChair(int chairNo)
{
	cout << "Room is unfolding chair." << endl;
	if (chairNo >= 0 && chairNo < 50)
		return chairs[chairNo]->UnFoldChair();
	else
		return false;
}