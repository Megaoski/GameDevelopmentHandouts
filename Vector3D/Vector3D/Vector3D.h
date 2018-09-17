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
	float moduled();
	void normalize();
	void toZero();
	bool isZero();
	float distanceToVector(Vec3D<T> vec);

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

template<class T>

float Vec3D<T>::moduled()
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
};

template<class T>

void Vec3D<T>::normalize()
{
	Vec3D<T> normalized = this;

	x = x / normalized.moduled();
	y = y / normalized.moduled();
	z = z / normalized.moduled();
};

template<class T>

void Vec3D<T>::toZero()
{
	x = 0;
	y = 0; 
	z = 0;
};

template<class T>

bool Vec3D<T>::isZero()
{
	return x == 0 && y == 0 && z == 0;
}

template<class T>

float Vec3D<T>::distanceToVector(Vec3D<T> vec)
{
	Vec3D<T> resultVec;
	resultVec.x = x - vec.x;
	resultVec.y = y - vec.y;
	resultVec.z = z - vec.z;

	return resultVec;
};

#endif
