/**  Chair class to demonstrate aggregation in a C++ code.
*
* #include "Chair.h" <BR>
* -llib
*
*/
#ifndef CHAIR_H
#define CHAIR_H

// SYSTEM INCLUDES
#include<iostream>


// Chair class definition
class Chair {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Chair(bool = true);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Chair(const Chair&);
	// Chair& operator=(const Chair&);
	// ~Chair();


	
// OPERATIONS

	/** Does something with the Chair.
	*
	* @param void
	*
	* @return void
	*/
	void DoSomeThing(void);

	/** Folds chair.
	*
	* @param void
	*
	* @return True if folded successfully, false otherwise.
	*/
	bool FoldChair(void);

	/** Unfolds chair.
	*
	* @param void
	*
	* @return True if unfolded successfully, false otherwise.
	*/
	bool UnFoldChair(void);


// ACCESS
	// setters
	void SetFold(bool = true);
	void SetChair(bool = true);
	/**
	# @overload void SetChair(const Chair&);
	*/
	void SetChair(const Chair&);
	

	// getters
	bool GetFold()const;
	const Chair& GetChair()const;
	
private:

// DATA MEMBERS
	bool mFolded;
};
// end class Chair
#endif  
// _CHAIR_H_
