#include "Stack.h"

//Function to add an item to the stack, or push it
bool Stack::push(int x)
{
	if (top >= MAX - 1)
	{
		cout << "Stack Overflow!!!" << endl;
		return false;
	}
	else
	{
		a[++top] = x;
		cout << x << " pushed into stack." << endl;
		return true;
	}
}

//Function to "remove" an item from the stack, or pop it
int Stack::pop()
{
	if (this->isEmpty())
	{
		cout << "Stack Underflow!!!" << endl;
		return 0;
	}
	else
	{
		int x = a[top--];
		return x;
	}
}

//Function to view the current item at the top of the stack
int Stack::peek()
{
	if (this->isEmpty())
	{
		cout << "Stack is Empty." << endl;
		return 0;
	}
	else
	{
		int x = a[top];
		return x;
	}
}

//Function to check if the stack is empty or not
bool Stack::isEmpty()
{
	return (top < 0);
}

//Function to print the stack
void Stack::print(Stack s)
{
	//Inform the user what is being printed
	cout << "Elements in the stack are: ";

	//While s is not empty, print the stack using peek and moving forward by popping
	while (!s.isEmpty())
	{
		cout << s.pop() << " ";
	}
}