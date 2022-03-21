//Daniel Blakeman
//CIS 2207 502
//Implement the palindrome-recognition algorithm described in Section 13.2.2.
#pragma once
#ifndef STACK_INTERFACE_
#define STACK_INTERFACE_

template<class ItemType>
class StackInterface
{
public:
	bool isEmpty() const;
	bool push(const char& newEntry);
	bool pop();
	char peek() const;
	~StackInterface() { };
};
#endif