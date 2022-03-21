//Daniel Blakeman
//CIS 2207 502
//Implement the palindrome-recognition algorithm described in Section 13.2.2.
#pragma once
#ifndef PALINDROME_
#define PALINDROME_
#include<iostream>
#include<string>
#include<vector>
#include "StackInterface.h"
#include "QueueInterface.h"
using namespace std;

template<class ItemType>
class Palindrome
{
public:
	bool isPalindrome(const ItemType& someString);
};
#endif