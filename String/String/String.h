#pragma once
#include <iostream>
using namespace std;

class MyString
{
public:
	MyString(void);
	MyString(const char* input);
	~MyString(void);
	int GetLength();
	void Assign(const MyString& otherString);
	char& CharAt(int index);
	void Append(const MyString& otherString);
	bool Compare(const MyString& otherString);
	bool IsEmpty();
	void Clear();

private:
	char* nstring;
	int nlength;
};