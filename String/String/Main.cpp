#include <iostream>
#include "StringClass.h"

using namespace std;

int main()
{
	MyString example("Hello");
	MyString example2("Hell");

<<<<<<< HEAD
	MyString copied(example);

	MyString prove = example2;
=======
	/*MyString copied(example2);*/
	MyString added = example + example2;
>>>>>>> origin/master
	/*printf("%s\n", example.text);*/
	uint result = added.stringSize();

	

	//if (example == example2)
	//{
	//	printf("Asmongold\n");
	//}
	//else
	//	printf("McConnell\n");


<<<<<<< HEAD
	cout << prove.GetString() << endl;
=======
	cout << result << endl;
>>>>>>> origin/master

	system("pause");
	return 0;
}
