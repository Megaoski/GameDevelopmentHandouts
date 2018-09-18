#include <iostream>
#include "Vector3D.h"

using namespace std;

int main()
{
	//probando constructores
	
	
	
	
	Vec3D<int> a(1, 2, 3);
	Vec3D<int> b(a);
	Vec3D<int> c = a - b;
	
	if (a == c)
	{
		cout << " They are the same";
	}
	

	/*cout << c.x << "\n";*/

	system("pause");
	return 0;
}