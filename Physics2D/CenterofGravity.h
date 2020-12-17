#pragma once
namespace COG
{
	struct pointMass // ������(��������)
	{
		float mass; // ����
		D3DXVECTOR3 designPosition; // �����߽��� ��ġ
		D3DXVECTOR3 correctedPosition; // �����ġ
	};

	class CenterofGravity // �����߽��� ��ġ�� ã�� ����
	{
	private:
		pointMass PointMassElements[256]; // �������� ����
		int i;
		float TotalMass; // ���� ����
		D3DXVECTOR3 CombinedCG; // ��ü�� �����߽�
		D3DXVECTOR3 FirstMoment; // 1�����Ʈ

	public:
		void FindCenterofGravity(void);
	};
}
