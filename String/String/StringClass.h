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
		characters = string.characters;
		text = new char[characters];
		strcpy_s(text, characters + 1, string.text);//aqui peta 
	}
	
	virtual ~MyString() 
	{
		delete[] text;
	}


	uint stringSize() const;
	bool operator=(const MyString &string);
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

bool MyString::operator=(const MyString &string) 
{
	/*for (int i = 0; i <= string.characters + 1; ++i)
	{
		for ()
		{
			if(string.text[i] == this.text[j])
		}
	}*/
	return false;
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
