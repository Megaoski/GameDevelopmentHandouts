#pragma warning(disable:4996)//to avoid strcat_s CRT WARNING problem


#ifndef _STRING_CLASS_
#define _STRING_CLASS_


class MyString
{
public:

	MyString() : text(nullptr), characters(0) {}

	MyString(const char* word) 
	{
		
		
			characters = strlen(word) + 1;
			text = new char[characters];
			strcpy_s(text, characters, word);
		
	}

	MyString(const MyString &string)
	{
		if (text != nullptr)
		{
			characters = string.characters;
			text = new char[characters];
			strcpy_s(text, characters, string.text);
		}
	}

	virtual ~MyString()
	{
		if (text != nullptr)
		{
			delete[] text;
		}
	}

	
	unsigned int stringLenght() const;
	MyString operator=(const MyString &string);
	bool operator==(const MyString &string);
	char* GetString();
	MyString operator+(const MyString &string);
	


private:

	unsigned int characters = 0;
	char* text = nullptr;

};


unsigned int MyString::stringLenght() const
{
	if (text != nullptr)
	{
		return strlen(text);
	}
}

MyString MyString::operator=(const MyString &string)
{
	if (string.stringLenght() != 0)
	{
		if (this->characters >= string.characters)
		{
			this->characters = string.characters;
			this->text = new char[string.characters];
			strncpy(this->text, string.text, string.characters);
			return this->text;
		}
	}
	
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


#endif
