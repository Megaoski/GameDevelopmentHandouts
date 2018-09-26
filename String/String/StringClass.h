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

	//metodo para comprar dos triungs y ver si son iguales
	uint stringSize() const//metodo para saber numero de caracteres
	{
		return characters;
	}
	
	bool operator==(const MyString &string)
	{
		return strcmp(text, string.text) == 0;
	}

private:

	uint characters = 0;
	char* text = nullptr;

};


#endif
