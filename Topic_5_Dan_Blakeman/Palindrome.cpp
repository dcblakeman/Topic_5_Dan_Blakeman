//Daniel Blakeman
//CIS 2207 502
//Implement the palindrome-recognition algorithm described in Section 13.2.2.
#include<iostream>
#include<string>
#include<vector>
#include "Palindrome.h"
using namespace std;

template<class ItemType>
bool Palindrome<ItemType>::isPalindrome(const ItemType& someString)
{
	//Create an empty queue and stack
	QueueInterface<ItemType> pQueue;
	StackInterface<ItemType> pStack;
	
	int length = someString.size();
	//Add each chararcter of the string to both the queue and the stack
	for (int i = 0; i < length; i++)
	{
		char nextChar = someString[i];
		pQueue.enqueue(nextChar);
		pStack.push(nextChar);
	}
	
	//Compare the queue characters with the stack characters
	bool charactersAreEqual = true;
	while (!pQueue.isEmpty() && charactersAreEqual)
	{
		char queueFront = pQueue.peekFront();
		char stackTop = pStack.peek();
		if (queueFront == stackTop)
		{
			pQueue.dequeue();
			pStack.pop();
		}
		else
			charactersAreEqual = false;
	}
	
	cout << "Is the string a palindrome?: ";
	if (charactersAreEqual == true)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return charactersAreEqual;
}
