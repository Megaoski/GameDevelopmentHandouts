#ifndef VECTOR_3D
#define VECTOR_3D

template <class T>

class Vec3D
{

public:

	Vec3D<T>()//constructor que inicializa a 0
	{
		x = 0;
		y = 0; 
		z = 0;
	};

	Vec3D<T>(T X, T Y, T Z)// constructor normal 
	{
		x = X;
		y = Y;
		z = Z;
	}

	Vec3D<T>( Vec3D &vec)// constructor que inicializa un vector con datos de otro existente
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}








public:

	T x;
	T y;
	T z;



};




#endif
