#pragma once
#include <iostream>

//Another way to define a constant
//Defines the maximum size of the stack
#define MAX 1000

using namespace std;

class Stack
{
	//Indicator for if the stack is empty or not
	int top;

public:
	//Array of ints of MAX size
	int a[MAX];

	//Constructor
	Stack()
	{
		top = -1;
	}

	//Methods for adding, removing, seeing, printing and checking for an empty stack
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
	void print(Stack s);
};