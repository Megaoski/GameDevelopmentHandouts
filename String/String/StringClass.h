#ifndef STRING_CLASS
#define STRING_CLASS

typedef unsigned int uint;

class MyString
{
public:

	MyString() : text(nullptr), characters(0) {}
	MyString(const char* word) {}

	virtual ~MyString() 
	{
		delete[] text;
	}

	//metodo para comprar dos triungs y ver si son iguales


private:

	uint characters = 0;
	char* text = nullptr;

};


#endif
