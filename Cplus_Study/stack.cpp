#include "stack.h"

Stack::Stack()
{
	top = 0;
}


bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item& item)
{
	return false;
}

bool Stack::pop(Item& item)
{
	return false;
}
