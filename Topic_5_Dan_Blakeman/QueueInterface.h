//Daniel Blakeman
//CIS 2207 502
//Implement the palindrome-recognition algorithm described in Section 13.2.2.
#pragma once
#ifndef QUEUE_INTERFACE_
#define QUEUE_INTERFACE_

template<class ItemType>
class QueueInterface
{
public:
	bool isEmpty() const;
	bool enqueue(const char& newEntry);
	bool dequeue();
	char peekFront() const;
	~QueueInterface() { };
};
#endif