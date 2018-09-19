#ifndef VECTOR_3D
#define VECTOR_3D

template <class T>

class Vec3D
{

public:

	//CONSTRUCTORS
	
	Vec3D<T>(){} //default constructor, importante escribirlo si hemos puesto otros constructores
	Vec3D<T>(const T &x, const T &y, const T &z) : x(x), y(y), z(z) {} // constructor normal y simplificado en una línea
	Vec3D<T>(const Vec3D<T> &vec) : x(vec.x), y(vec.y), z(vec.z) {}

	
	//OPERATORS

	Vec3D<T> operator+(const Vec3D<T> &vec) const;
	Vec3D<T> operator-(const Vec3D<T> &vec) const;
	Vec3D<T> operator+=(const Vec3D<T> &vec);
	Vec3D<T> operator-=(const Vec3D<T> &vec);
	Vec3D<T> operator=(const Vec3D<T> &vec);
	bool operator==(const Vec3D<T> &vec) const;

	//METHODS

	double moduled();
	Vec3D<T> normalize();
	void toZero();
	bool isZero();
	T distanceToVector(const Vec3D<T> &vec);//usamos T ya que no sabemos que nos va a pedir

public:

	T x;
	T y;
	T z;

};

template<class T>

Vec3D<T> Vec3D<T>::operator+(const Vec3D<T> &vec) const
{
	return Vec3D<T>(x + vec.x, y + vec.y, z + vec.z); //asi es mas rapido, ademas no hace falta darle nombre al retVec
};

template<class T>

Vec3D<T> Vec3D<T>::operator-(const Vec3D<T> &vec) const
{
	return Vec3D<T>(x - vec.x, y - vec.y, z - vec.z);
};

template<class T>

Vec3D<T> Vec3D<T>::operator+=(const Vec3D<T> &vec)
{
	return Vec3D<T>(x += vec.x, y += vec.y, z += vec.z, );
};

template<class T>

Vec3D<T>  Vec3D<T>::operator-=(const Vec3D<T> &vec)
{
	return Vec3D<T>(x -= vec.x, y -= vec.y, z -= vec.z,);
};

template<class T>

Vec3D<T> Vec3D<T>::operator=(const Vec3D<T> &vec)
{
	return Vec3D<T>(x = vec.x, y = vec.y, z = vec.z);
};

template<class T>

bool Vec3D<T>::operator==(const Vec3D<T> &vec) const
{
	return x == vec.x && y == vec.y && z == vec.z;
};

template<class T>

double Vec3D<T>::moduled()
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
};

template<class T>

Vec3D<T> Vec3D<T>::normalize()
{
	Vec3D<T> normalized = this;
	return Vec3D<T>(x / normalized.moduled(), y / normalized.moduled(), z / normalized.moduled());
};

template<class T>

void Vec3D<T>::toZero()
{
	return Vec3D<T>(x = 0, y = 0, z = 0);
};

template<class T>

bool Vec3D<T>::isZero()
{
	return x == 0 && y == 0 && z == 0;
}

template<class T>

T Vec3D<T>::distanceToVector(const Vec3D<T> &vec)
{
	T resultVec;
	resultVec.x = x - vec.x;
	resultVec.y = y - vec.y;
	resultVec.z = z - vec.z;

	return sqrt(pow(resultVec.x, 2) + pow(resultVec.y, 2), pow(resultVec.z, 2));
};

#endif
