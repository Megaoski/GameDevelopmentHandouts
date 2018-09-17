#include <iostream>
#include "Vector3D.h"

using namespace std;

int main()
{
	//probando constructores
	
	Vec3D<int> vec1 = Vec3D<int>(1, 2, 3);
	Vec3D<int> vec2(2, 2, 2);
	Vec3D<int> vec3 = Vec3D<int>(vec1);
	
	
	Vec3D<int> vec4 = vec1 - vec2;
	cout << vec4.x << "\n";
	

	system("pause");
	return 0;
}