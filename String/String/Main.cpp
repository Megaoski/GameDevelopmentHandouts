#include <iostream>
#include "StringClass.h"

using namespace std;

int main()
{
	MyString example("Hello");
	MyString example2("Hell");

	MyString copied(example2);
	/*printf("%s\n", example.text);*/
	/*uint result = example.stringSize();*/

	

	//if (example == example2)
	//{
	//	printf("Asmongold\n");
	//}
	//else
	//	printf("McConnell\n");


	cout << copied.GetString() << endl;

	system("pause");
	return 0;
}
