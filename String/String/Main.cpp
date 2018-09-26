#include <iostream>
#include "StringClass.h"

using namespace std;

int main()
{
	MyString example("Hello");
	MyString example2("Hell");

	/*printf("%s\n", example.text);*/
	/*uint result = example.stringSize();*/

	if (example == example2)
	{
		cout << "Asmongold" << endl;
	}
	else
		cout << "McConnell" << endl;

	system("pause");
	return 0;
}
