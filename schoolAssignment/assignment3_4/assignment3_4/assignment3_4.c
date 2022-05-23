#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int energy, DiscountOption, total;
	int BasicFee = 0, FuelAdjust = 0, FamilyDiscount = 0, UsageDiscount = 0;
	double UsageFee = 0, EcoFee = 0, TotalFee = 0;
	double surtax, BaseFund;
	
	printf("사용한 전력량을 입력하세요(kWh)");
	scanf("%d", &energy);
	printf("할인옵션을 선택하세요(1: 없음 2. 대가족(5인) 3.세 자녀)");
	scanf("%d", &DiscountOption);
	

	//기본료+필수사용량 보장 공제 측정
	if (energy <= 200)
	{
		BasicFee = 910;
		UsageDiscount = 2000;
	}
	else if ( (201 <= energy) && (energy <= 400) )
	{
		BasicFee = 1600;
	}
	else 
	{
		BasicFee = 7300;
	}
	

	//사용요금
	//사용요금 계산시 필요한 energy값을 새로운 변수에 받아둔다. 계산시 energy의 값이 바뀔 수 있기에
	int TemporEnergy = energy;
	switch (TemporEnergy /200) {
	case 2: 
		if (TemporEnergy % 200 == 0)    //400인 경우
		{
			UsageFee = UsageFee + 200 * 187.8 + 200 * 93.2;
		}
		else //400 초과
		{
			UsageFee = UsageFee + (TemporEnergy - 400) * 280.5;
			UsageFee = UsageFee + 200 * 187.8 + 200 * 93.2;

		}
		break;

	case 1: {
		if (TemporEnergy % 200 == 0) //200인 경우
		{
			
		}
		else //200 초과
		{
			UsageFee = UsageFee+ (TemporEnergy - 200) * 187.8;
			TemporEnergy = 200;
		}
	}
	case 0: 
	{
		UsageFee = UsageFee + TemporEnergy * 93.2;
	}

	}



	total = BasicFee + UsageFee;

	//기후환경요금
	EcoFee = energy * 7.3;
	total = total + EcoFee;

	//연료비조정액
	total = total + FuelAdjust;

	//5인 이상 가구, 3자녀 가구 할인
	if ((DiscountOption == 2) || (DiscountOption == 3))
	{
		FamilyDiscount = total * 0.3;

		//할인 한도
		if (FamilyDiscount > 16000)
		{
			FamilyDiscount = 16000;
		}
	}
	else
	{
		FamilyDiscount = 0;
	}


	//부과세
	surtax = (total - UsageDiscount) * 0.1;
	surtax = (surtax + 0.5);

	//산업기반기금
	BaseFund = (int)((total - UsageDiscount) * 0.037);
	BaseFund = ((int)(BaseFund * 0.1)) * 10;

	//총 합계
	TotalFee = total + surtax + BaseFund;

	//필수 사용량 공제-최종금액이 1000원 이하가 되지 않도록
	if (TotalFee <= 3000)
	{
		UsageDiscount == 0;
	}

	TotalFee = TotalFee - FamilyDiscount - UsageDiscount;
	TotalFee = ((int)(TotalFee * 0.1)) * 10;
	

	printf("금월의 전기요금은\n");
	printf("기본료                   %10d원\n", BasicFee);
	printf("사용요금                 %10.0f원\n", UsageFee);
	printf("기후환경요금             %10.0f원\n", EcoFee);
	printf("연료비조정액             %10d원\n", FuelAdjust);
	printf("필수사용량 보장공제      %10d원\n", UsageDiscount);
	printf("대가족할인               %10d원\n", FamilyDiscount);
	printf("부가세                   %10.0f원\n", surtax);
	printf("기금                     %10.0f원\n", BaseFund);
	printf("총                       %10.0f원\n", TotalFee);
	printf("20203500 이영주");


	return 0;
}