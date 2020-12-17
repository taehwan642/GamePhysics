#include "CenterofGravity.h"

void CenterofGravity::FindCenterofGravity(void)
{
	for (i = 0; i < 256; ++i)
		TotalMass += PointMassElements[i].mass; // 점질량들의 질량을 모두 합치면 물체의 최종 질량이 나온다.
	FirstMoment = Vector3(0, 0, 0);
	for (i = 0; i < 256; ++i)
		FirstMoment = FirstMoment + (PointMassElements[i].designPosition * PointMassElements[i].mass); // 점질량의 무게중심 위치 * 질량 = 1차모멘트이며, 이를 최종적으로 모두 더하면 물체의 1차모멘트.
	CombinedCG = FirstMoment / TotalMass; // 물체의 무게중심은 점질량의 무게중심을 모두 합친것에 최종질량을 나누면 나온다.
	for (i = 0; i < 256; ++i)
		PointMassElements[i].correctedPosition = PointMassElements[i].designPosition - CombinedCG; // 상대위치 계산
}
