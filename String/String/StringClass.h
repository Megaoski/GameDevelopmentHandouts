#pragma warning(disable:4996)//to avoid strcat_s CRT WARNING problem


#ifndef _STRING_CLASS_
#define _STRING_CLASS_

typedef unsigned int uint;

class MyString
{
public:

	MyString() : text(nullptr), characters(0) {}

	MyString(const char* word) : characters(strlen(word)), text(new char[characters + 1])
	{
		strcpy(text, word);
	}
	
	//MyString(const MyString &string)
	//{
	//	characters = string.characters;
	//	text = new char[characters];
	//	strcpy_s(text, characters + 1, string.text);
	//}
	MyString(const MyString &string)
	{
		if (string.text != nullptr)
		{
			text = new char[string.characters + 1];
			characters = string.characters + 1;
			memset(text, 0, characters);
			memcpy(text, string.text, characters);
		}
	}
	
	virtual ~MyString() 
	{
		clear();
	}
	
	
	uint stringSize() const;
	void operator=(const MyString &string);
	bool operator==(const MyString &string);
	char* GetString();
	MyString operator+(const MyString &string);
	void clear();
	

private:

	uint characters = 0;
	char* text = nullptr;

};


uint MyString::stringSize() const
{
	return characters;
}

void MyString::operator=(const MyString &string) 
{
	clear();
	characters = string.characters;
	text = new char[characters + 1];
	strcpy(text, string.text);
}

bool MyString::operator==(const MyString &string)
{
	return strcmp(text, string.text) == 0;
}

char* MyString::GetString()
{
	return text;
}

MyString MyString::operator+(const MyString &string)
{
	return strcat(text, string.text);
}

void MyString::clear()
{
	if (text != nullptr)
	{
		delete[] text;
		text = nullptr;
		characters = 0;
	}
}


#endif
