#pragma once
class Vector3
{
private:
protected:
public:
	explicit Vector3(void);
	explicit Vector3(const float& x, const float& y, const float& z);
	float x, y, z;
	Vector3 operator +(const Vector3&);
	Vector3 operator +(const float&);
	Vector3 operator -(const Vector3&);
	Vector3 operator -(const float&);
	Vector3 operator *(const Vector3&);
	Vector3 operator *(const float&);
	Vector3 operator /(const Vector3&);
	Vector3 operator /(const float&);
};

