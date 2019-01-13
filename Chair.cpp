#include "Chair.h"  // class implemented
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Chair Default + Overloaded Constructor
Chair::Chair(bool aFolded) : mFolded(aFolded) {
	this->SetChair(aFolded);
}
// end Chair constructor


//============================= OPERATIONS ===================================

// function that does something with the Chair.
void Chair::DoSomeThing(void) {
	if (this->GetFold())
		cout << "Folded ";
	else
		cout << "Unfolded ";
	cout << "chair is doing something." << endl;
}
// end function DoSomething

// function that folds chair.
bool Chair::FoldChair(void) {
	cout << "Chair is folding" << endl;
	if (this->GetFold()) 	{
		cout << "Can't fold chair because it is already folded." << endl;
		return false;
	}
	else {
		this->SetFold(true);
		cout << "Chair folded." << endl;
		return true;
	}
}
// end function FoldChair

// function that unfolds chair.
bool Chair::UnFoldChair(void) {
	cout << "Chair is unfolding" << endl;
	if (this->GetFold()) 	{
		this->SetFold(false);
		cout << "Chair unfolded." << endl;
		return true;
	}
	else {
		cout << "Can't unfold chair because it is already unfolded." << endl;
		return false;
	}
}
// end function UnFoldChair



//============================= ACESS      ===================================

// function that sets fold
void Chair::SetFold(bool aFold) {
	this->mFolded = aFold;
}
// end function SetFold

// function that sets the Chair
void Chair::SetChair(bool aFolded) {
	this->SetFold(aFolded);
}
// end function SetChair

// overloaded function that sets the Chair
void Chair::SetChair(const Chair& rObj) {
	this->SetChair(rObj.GetFold());
}
// end function SetChair

// function that gets fold
bool Chair::GetFold()const {
	return this->mFolded;
}
// end function GetFold

// function that gets the Chair
const Chair& Chair::GetChair()const {
	return *this;
}
// end function GetChair