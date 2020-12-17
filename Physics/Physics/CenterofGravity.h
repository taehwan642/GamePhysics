#include "Vector3.h"
#pragma once

struct pointMass // ������(��������)
{
	float mass; // ����
	Vector3 designPosition; // �����߽��� ��ġ
	Vector3 correctedPosition; // �����ġ
};

class CenterofGravity // �����߽��� ��ġ�� ã�� ����
{
private:
	pointMass PointMassElements[256]; // �������� ����
	int i;
	float TotalMass; // ���� ����
	Vector3 CombinedCG; // ��ü�� �����߽�
	Vector3 FirstMoment; // 1�����Ʈ

public:
	void FindCenterofGravity(void);
};

