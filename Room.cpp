#include "Room.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Room Default Constructor
Room::Room() : mArea(0.0) {
	cout << "Room  Default Constructor" << endl;
	for (int i = 0; i < 50; i++)
		this->mpChairs[i] = NULL;
}
// end Room constructor

// Room Overloaded Constructor
Room::Room(Chair* pChair, int chairNo) {
	cout << "Room Overloaded Constructor." << endl;
	this->SetRoom(pChair, chairNo);
}
// end Room constructor


//============================= OPERATIONS ===================================

// function that adds chair to the Room.
void Room::AddChair(Chair* pChair, int chairNo) {
	this->SetChair(pChair, chairNo);
}
// end function AddChair

// function that folds chair within the Room.
bool Room::FoldChair(int chairNo) {
	cout << "Room is folding chair." << endl;
	if (chairNo >= 0 && chairNo < 50)
		return mpChairs[chairNo]->FoldChair();
	else
		return false;
}
// end function FoldChair

// function that unfolds chair within the Room.
bool Room::UnFoldChair(int chairNo) {
	cout << "Room is unfolding chair." << endl;
	if (chairNo >= 0 && chairNo < 50)
		return mpChairs[chairNo]->UnFoldChair();
	else
		return false;
}
// end function UnFoldChair



//============================= ACESS      ===================================

// function that sets area of Room
void Room::SetArea(float aArea) {
	if (aArea < 0.0)
		cout << "Error:: Area cannot be nagative." << endl;
	else
		this->mArea = aArea;
}
// end function SetArea

// function that sets Chair within the Room
void Room::SetChair(Chair* pChair, int chairNo) {
	if (chairNo >= 0 && chairNo < 50)
		mpChairs[chairNo] = pChair;
}
// end function SetChair

// function that sets the Room
void Room::SetRoom(Chair* pChair, int chairNo) {
	this->SetChair(pChair, chairNo);
}
// end function SetRoom

// overloded function that sets the Room
void Room::SetRoom(const Room& rObj) {
	this->SetArea(rObj.GetArea());
	for (int i = 0; i < 50; i++)
		this->SetRoom(rObj.GetChair(i), i);
}
// end function SetRoom

// function that gets area of the Room
float Room::GetArea()const {
	return this->mArea;
}
// end function GetArea

// function that gets Chair within the Room
Chair * Room::GetChair(int chairNo)const {
	if (chairNo >= 0 && chairNo < 50)
		return mpChairs[chairNo];
	else
		return NULL;
}
// end function GetChair

// function that get the Room
const Room& Room::GetRoom()const {
	return *this;
}
// end function GetRoom
