#include <iostream>
#include "Vector3D.h"

using namespace std;

int main()
{
	//probando constructores
	
	
	
	
	/*Vec3D<int> a(1, 2, 3);
	Vec3D<int> b(a);
	Vec3D<int> c = a - b;
	
	if (a == b)
	{
		cout << " They are the same\n";
	}*/
	
	Vec3D<float> a(0, 0, 0);
	Vec3D<float> b(4.4, 8.8, 12.2);
	printf("Distance between vectors 1 and 2 = %f\n", a.distanceToVector(b));

	system("pause");
	return 0;
}