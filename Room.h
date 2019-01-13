/**  Room class to demonstrate aggregation in a C++ code.
*
* #include "Room.h" <BR>
* -llib
*
*/
#ifndef ROOM_H
#define ROOM_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Chair.h"

// Room class definition
class Room {
public:
// LIFECYCLE
	/** Default constructor.
	*/
	Room();

	/** Overloaded constructor.
	*/
	Room(Chair*, int);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Room(const Room&);
	// Room& operator=(const Room&);
	// ~Room();


// OPERATIONS
	
	/** Adds chair to the Room.
	*
	* @param pChair Pointer to chair to be added.
	* @param chairNo Chair's location in the room.
	*
	* @return void
	*/
	void AddChair(Chair* pChair, int chairNo);

	/** Folds chair within the Room.
	*
	* @param chairNo Chair's location within the room.
	*
	* @return True if folded successfully, false otherwise.
	*/
	bool FoldChair(int chairNo);

	/** Unfolds chair within the Room.
	*
	* @param chairNo Chair's location within the room.
	*
	* @return True if unfolded successfully, false otherwise.
	*/
	bool UnFoldChair(int chairNo);


// ACCESS
	// setters
	void SetArea(float = 0.0);
	void SetChair(Chair* pChair, int chairNo);
	void SetRoom(Chair*, int);
	/**
	# @overload void SetRoom(const Room&);
	*/
	void SetRoom(const Room&);


	// getters
	float GetArea()const;
	Chair* GetChair(int chairNo)const;
	const Room& GetRoom()const;

private:

// DATA MEMBERS
	float mArea;
	Chair* mpChairs[50];
};
// end class Room
#endif  
// _ROOM_H_
