#include "Vector3.h"

Vector3::Vector3(void) :
	x(0), y(0), z(0)
{
}

Vector3::Vector3(const float& x, const float& y, const float& z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Vector3::operator+(const Vector3& vec)
{
	return Vector3(x + vec.x, y + vec.y, z + vec.z);
}

Vector3 Vector3::operator+(const float& flt)
{
	return Vector3(x + flt, y + flt, z + flt);
}

Vector3 Vector3::operator-(const Vector3& vec)
{
	return Vector3(x - vec.x, y - vec.y, z - vec.z);
}

Vector3 Vector3::operator-(const float& flt)
{
	return Vector3(x - flt, y - flt, z - flt);
}

Vector3 Vector3::operator*(const Vector3& vec)
{
	return Vector3(x * vec.x, y * vec.y, z * vec.z);
}

Vector3 Vector3::operator*(const float& flt)
{
	return Vector3(x * flt, y * flt, z * flt);
}

Vector3 Vector3::operator/(const Vector3& vec)
{
	return Vector3(x / vec.x, y / vec.y, z / vec.z);
}

Vector3 Vector3::operator/(const float& flt)
{
	return Vector3(x / flt, y / flt, z / flt);
}
