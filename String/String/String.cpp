#include "String.h"

MyString::MyString()
{
	nlength = 0;
	nstring = NULL;
}

MyString::MyString(const char *input)
{
	nlength = strlen(input) + 1;
	nstring = new char[nlength];
	for (int i = 0; i < nlength; i++)
		nstring[i] = input[i];
}

MyString::~MyString()
{
	delete[] nstring;
	nstring = NULL;
	nlength = 0;
}

int MyString::GetLength()
{
	return nlength;
}

void MyString::Assign(const MyString& otherString)
{
	nlength = otherString.nlength;  
	strcpy(nstring, otherString.nstring);
}

char& MyString:: CharAt(int index)
{
	return nstring[index - 1];
}

void MyString::Append(const MyString& otherString)
{
	nlength += otherString.nlength;
	strcat(nstring, otherString.nstring);
}

bool MyString::IsEmpty()
{
	if (nstring == NULL )
	{ 
		return true;
	}
	return false; 
}

void MyString::Clear()
{
	MyString::~MyString();
}

bool MyString::Compare(const MyString& otherString)
{
	if (0 == strcmp(nstring, otherString.nstring))
	{
		return true;
	}
	return false;
}


