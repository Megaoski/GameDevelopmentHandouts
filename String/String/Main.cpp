#include <iostream>
#include "StringClass.h"

using namespace std;

int main()
{
	MyString example("Hello");

	/*printf("%s\n", example.text);*/
	uint result = example.stringSize();
	cout << result  << endl;
	system("pause");
	return 0;
}
