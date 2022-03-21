//Daniel Blakeman
//CIS 2207 502
//Implement the palindrome-recognition algorithm described in Section 13.2.2. 
#include "StackInterface.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;

//Stack Placeholder
static vector<char> aStack;

template<class ItemType>
bool StackInterface<ItemType>::isEmpty() const
{
	if (aStack.empty())
		return true;
	else
		return false;
}

template<class ItemType>
bool StackInterface<ItemType>::push(const char& newEntry)
{
	aStack.push_back(newEntry);
	return true;
}

template<class ItemType>
bool StackInterface<ItemType>::pop()
{
	if (!aStack.empty())
	{
		aStack.pop_back();
		return true;
	}
	else
		return false;
}

template<class ItemType>
char StackInterface<ItemType>::peek() const
{
	if (!aStack.empty())
		return aStack.back();
}