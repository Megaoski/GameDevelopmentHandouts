#ifndef VECTOR_3D
#define VECTOR_3D

template <class T>

class Vec3D
{

public:
	
	Vec3D<T>(T _x, T _y, T _z)// constructor normal 
	{
		x = _x;
		y = _y;
		z = _z;
	}

	

	Vec3D<T> operator+(Vec3D<T> vec) const;
	Vec3D<T> operator-(Vec3D<T> vec) const;
	void operator+=(const Vec3D<T> &vec);
	void operator-=(const Vec3D<T> &vec);
	void operator=(const Vec3D<T> &vec);
	bool operator==(const Vec3D<T> &vec);

public:

	T x;
	T y;
	T z;

};

template<class T>

Vec3D<T> Vec3D<T>::operator+(Vec3D<T> vec) const
{
	Vec3D<T> retVec(x + vec.x, y + vec.y, z + vec.z);
	return retVec;
};

template<class T>

Vec3D<T> Vec3D<T>::operator-(Vec3D<T> vec) const
{
	Vec3D<T> retVec(x - vec.x, y - vec.y, z - vec.z);
	return retVec;
};

template<class T>

void Vec3D<T>::operator+=(const Vec3D<T> &vec)
{
	x += vec.x;
	y += vec.y;
	z += vec.z;
};

template<class T>

void Vec3D<T>::operator-=(const Vec3D<T> &vec)
{
	x -= vec.x;
	y -= vec.y;
	z -= vec.z;
};

template<class T>

void Vec3D<T>::operator=(const Vec3D<T> &vec)
{
	x = vec.x;
	y = vec.y;
	z = vec.z;
}

template<class T>

bool Vec3D<T>::operator==(const Vec3D<T> &vec)
{
	return x == vec.x && y == vec.y && z == vec.z;
};

#endif
