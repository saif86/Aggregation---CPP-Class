/**
* @file Source.cpp
*
* @brief This code tests Aggregation of Room class.
* Room class has aggregation with Chair class.
*
* @author Saif Ullah Ijaz
*
*/
#include<iostream>
using namespace std;
#include "Room.h"

// function main begins program execution
void main()
{
	Chair ch1;
	// nested code block
	{
		Room r1;
		r1.AddChair(&ch1, 1);
		r1.UnFoldChair(1);
	} // end of nested scope. 
	  //Room (r1) object destroys here but chair (ch1) object remains in memory 
	ch1.FoldChair();

	system("pause");
}
// end main
