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
	
	/*Vec3D<int> a(0, 0, 0);
	Vec3D<int> b(1, 2, 3);
	printf("Distance between vectors 1 and 2 = %i\n", a.distanceToVector(b));*/

	system("pause");
	return 0;
}