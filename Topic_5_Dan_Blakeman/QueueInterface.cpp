//Daniel Blakeman
//CIS 2207 502
//Implement the palindrome-recognition algorithm described in Section 13.2.2.
#include "QueueInterface.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;

//Queue Placeholder
static vector<char> aQueue;

template<class ItemType>
bool QueueInterface<ItemType>::isEmpty() const
{
	if (aQueue.empty())
		return true;
	else
		return false;
}

template<class ItemType>
bool QueueInterface<ItemType>::enqueue(const char& newEntry)
{
	aQueue.push_back(newEntry);
	return true;
}

template<class ItemType>
bool QueueInterface<ItemType>::dequeue()
{
	if (!aQueue.empty())
	{
		aQueue.erase(aQueue.begin());
		return true;
	}
	else
	{
		return false;
	}
		
}

template<class ItemType>
char QueueInterface<ItemType>::peekFront() const
{
	if(!aQueue.empty())
		return aQueue.front();
}

