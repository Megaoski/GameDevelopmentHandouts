#include <iostream>
#include "Vector3D.h"

using namespace std;

int main()
{
	int number = 3;
	Vec3D<int> vec1(1, 2, 3);
	Vec3D<int> vec2(vec1);

	cout << vec2.z << "\n";

	system("pause");
	return 0;
}