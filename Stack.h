#include <iostream>

using namespace std;

class Stack
{
	enum { EMPTY = -1, FULL = 20 };
	int top;
	char mas[FULL + 1];
public:
	Stack();
	Stack(const char* mas_P);
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	void Push(char c);
	void Print();
	char Pop();
};