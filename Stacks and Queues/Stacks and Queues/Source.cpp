#include "Stack.h"

using namespace std;


int main()
{
	Stack s;

	s.push(55);
	s.push(66);
	s.push(77);

	cout << s.pop() << " Popped from the stack." << endl;

	s.print(s);

	return 0;
}