#ifndef Chair_H
#define Chair_H
class Chair
{
	bool folded;
public:
	Chair();
	void DoSomething(void);
	bool FoldChair(void);
	bool UnFoldChair(void);
	~Chair();
};
#endif