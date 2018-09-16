#include <stdio.h>
#include <iostream>
#include "Vector3D.h"

using namespace std;

int main()
{
	//probando constructores
	
	Vec3D<int> vec1(1, 2, 3);
	Vec3D<int> vec2(vec1);
	/*Vec3D<int> vec3();*/

	//cout << vec3 << "\n";// vec3 no inicializa a 0, revisar constructor de 0
	cout << vec1.x << "\n";
	//
	
	//probando operators

	Vec3D<int> vec4(2, 2, 2);
	Vec3D<int> vec5 = vec1 + vec4;
	
	

	system("pause");
	return 0;
}