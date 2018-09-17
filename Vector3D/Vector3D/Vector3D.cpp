#include <iostream>
#include "Vector3D.h"


//using namespace std;
//
//
//int main()
//{
//	vec3<int> vector_1 = vec3<int>(6, 4, 7);
//	vec3<int> vector_2 = vec3<int>(2, 1, 7);
//	vec3<int> vector_3 = vec3<int>(6, 4, 7);
//
//	printf("vector 1 = %i, %i, %i\n", vector_1.x, vector_1.y, vector_1.z);
//	printf("vector 2 = %i, %i, %i\n", vector_2.x, vector_2.y, vector_2.z);
//	
//
//	vec3<int> vector_4 = vector_1 + vector_2;
//
//	cout << vector_4.x << "\n";
//
//
//	system("pause");
//	return 0;
//}

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