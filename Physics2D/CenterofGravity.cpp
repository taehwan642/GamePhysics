#include "DXUT.h"
#include "CenterofGravity.h"
using namespace	COG;

void CenterofGravity::FindCenterofGravity(void)
{
	for (i = 0; i < 256; ++i)
		TotalMass += PointMassElements[i].mass; // ���������� ������ ��� ��ġ�� ��ü�� ���� ������ ���´�.
	FirstMoment = D3DXVECTOR3(0, 0, 0);
	for (i = 0; i < 256; ++i)
		FirstMoment = FirstMoment + (PointMassElements[i].designPosition * PointMassElements[i].mass); // �������� �����߽� ��ġ * ���� = 1�����Ʈ�̸�, �̸� ���������� ��� ���ϸ� ��ü�� 1�����Ʈ.
	CombinedCG = FirstMoment / TotalMass; // ��ü�� �����߽��� �������� �����߽��� ��� ��ģ�Ϳ� ���������� ������ ���´�.
	for (i = 0; i < 256; ++i)
		PointMassElements[i].correctedPosition = PointMassElements[i].designPosition - CombinedCG; // �����ġ ���
}
