#ifndef Room_H
#define Room_H
#include "Chair.h"
class Room
{
	float area;
	Chair * chairs[50];
public:
	Room();
	Room(Chair *, int);
	~Room();
	void AddChair(Chair *, int);
	Chair * GetChair(int);
	bool FoldChair(int);
	bool UnFoldChair(int);
};
#endif