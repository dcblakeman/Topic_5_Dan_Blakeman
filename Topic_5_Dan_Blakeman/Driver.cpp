//Daniel Blakeman
//CIS 2207 502
//Implement the palindrome-recognition algorithm described in Section 13.2.2.
#include<iostream>
#include<string>
#include<vector>
#include "Palindrome.cpp"
#include "QueueInterface.cpp"
#include "StackInterface.cpp"
using namespace std;

int main()
{
	Palindrome<string> p;
	string pal = "racecar";
	string notPal = "Hello";
	p.isPalindrome(notPal);
	return 0;
}