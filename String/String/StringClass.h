#ifndef _STRING_CLASS_
#define _STRING_CLASS_

typedef unsigned int uint;

class MyString
{
public:

	MyString() : text(nullptr), characters(0) {}

	MyString(const char* word) : characters(strlen(word)), text(new char[characters + 1])
	{
		strcpy_s(text, characters + 1, word);
	}
	
	MyString(const MyString &string)
	{
		text = string.text;
		//characters = string.characters;
		//text = new char[characters];
		//strcpy_s(text, characters + 1, string.text);//aqui peta 
	}
	
	virtual ~MyString() 
	{
		delete[] text;
	}


	uint stringSize() const;
	void reset();
	void operator=(const MyString &string);
	bool operator==(const MyString &string);
	char* GetString();
	

private:

	uint characters = 0;
	char* text = nullptr;

};


uint MyString::stringSize() const
{
	return characters;
}

void MyString:: reset()
{
	if (text != nullptr)
	{
		delete[] text;
		text = nullptr;
		characters = 0;
	}
}

void MyString::operator=(const MyString &string) 
{
	reset();
	characters = string.characters;
	text = new char[characters + 1];
	strcpy_s(text, characters + 1, string.text);
}

bool MyString::operator==(const MyString &string)
{
	return strcmp(text, string.text) == 0;
}

char* MyString::GetString()
{
	return text;
}



#endif
