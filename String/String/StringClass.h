#ifndef STRING_CLASS
#define STRING_CLASS

typedef unsigned int uint;

class MyString
{
public:

	MyString() : text(nullptr), characters(0) {}

	MyString(const char* word) : characters(strlen(word)), text(new char[characters + 1])//copy constructor
	{
		strcpy_s(text, characters + 1, word);
	}
	
	/*MyString(const MyString &string) : characters(string), text(new char[characters + 1])
	{

	}*/

	virtual ~MyString() 
	{
		delete[] text;
	}

	uint stringSize() const//metodo para saber numero de caracteres
	{
		return characters;
	}
	
	bool operator==(const MyString &string)
	{
		return strcmp(text, string.text) == 0;
	}

	// do string a("hello"); string b(a); string b("hi);

private:

	uint characters = 0;
	char* text = nullptr;
	uint mem_allocated = 0;//memoria que usaremos

};


#endif
