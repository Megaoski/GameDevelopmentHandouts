#ifndef VECTOR_3D
#define VECTOR_3D

template <class T>

class Vec3D
{

public:

	
	
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

	//Vec3D<T> operator+(Vec3D<T> vec);//returns sum result
	Vec3D<T> operator+(Vec3D<T> vector) const;






public:

	
	T x;
	T y;
	T z;



};

template<class T>

Vec3D<T> Vec3D<T>::operator+(Vec3D<T> vector) const
{
	Vec3D<T> ret(x + vector.x, y + vector.y, z + vector.z);
	return ret;
}


//template <class T>
//
//Vec3D<T> Vec3D<T>::operator+(Vec3D<T> vec)
//{
//	Vec3D<T> retVec(x + vec.x, y + vec.y, z + vec.z);
//
//	return retVec;
//}



#endif
