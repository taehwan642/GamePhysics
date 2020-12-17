#pragma once
namespace COG
{
	struct pointMass // 점질량(원소질량)
	{
		float mass; // 질량
		D3DXVECTOR3 designPosition; // 무게중심의 위치
		D3DXVECTOR3 correctedPosition; // 상대위치
	};

	class CenterofGravity // 무게중심의 위치를 찾는 과정
	{
	private:
		pointMass PointMassElements[256]; // 점질량의 집합
		int i;
		float TotalMass; // 최종 질량
		D3DXVECTOR3 CombinedCG; // 물체의 무게중심
		D3DXVECTOR3 FirstMoment; // 1차모멘트

	public:
		void FindCenterofGravity(void);
	};
}
