#include <iostream>
#include "StringClass.h"

using namespace std;

int main()
{
	MyString example("Hello");
	MyString example2("Hell");

	/*MyString copied(example2);*/
	MyString added = example + example2;
	/*printf("%s\n", example.text);*/
	uint result = added.stringSize();

	

	//if (example == example2)
	//{
	//	printf("Asmongold\n");
	//}
	//else
	//	printf("McConnell\n");


	cout << result << endl;

	system("pause");
	return 0;
}
