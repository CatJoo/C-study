#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int energy, DiscountOption, total;
	int BasicFee = 0, FuelAdjust = 0, FamilyDiscount = 0, UsageDiscount = 0;
	double UsageFee = 0, EcoFee = 0, TotalFee = 0;
	double surtax, BaseFund;
	
	printf("����� ���·��� �Է��ϼ���(kWh)");
	scanf("%d", &energy);
	printf("���οɼ��� �����ϼ���(1: ���� 2. �밡��(5��) 3.�� �ڳ�)");
	scanf("%d", &DiscountOption);
	

	//�⺻��+�ʼ���뷮 ���� ���� ����
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
	

	//�����
	//����� ���� �ʿ��� energy���� ���ο� ������ �޾Ƶд�. ���� energy�� ���� �ٲ� �� �ֱ⿡
	int TemporEnergy = energy;
	switch (TemporEnergy /200) {
	case 2: 
		if (TemporEnergy % 200 == 0)    //400�� ���
		{
			UsageFee = UsageFee + 200 * 187.8 + 200 * 93.2;
		}
		else //400 �ʰ�
		{
			UsageFee = UsageFee + (TemporEnergy - 400) * 280.5;
			UsageFee = UsageFee + 200 * 187.8 + 200 * 93.2;

		}
		break;

	case 1: {
		if (TemporEnergy % 200 == 0) //200�� ���
		{
			
		}
		else //200 �ʰ�
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

	//����ȯ����
	EcoFee = energy * 7.3;
	total = total + EcoFee;

	//�����������
	total = total + FuelAdjust;

	//5�� �̻� ����, 3�ڳ� ���� ����
	if ((DiscountOption == 2) || (DiscountOption == 3))
	{
		FamilyDiscount = total * 0.3;

		//���� �ѵ�
		if (FamilyDiscount > 16000)
		{
			FamilyDiscount = 16000;
		}
	}
	else
	{
		FamilyDiscount = 0;
	}


	//�ΰ���
	surtax = (total - UsageDiscount) * 0.1;
	surtax = (surtax + 0.5);

	//�����ݱ��
	BaseFund = (int)((total - UsageDiscount) * 0.037);
	BaseFund = ((int)(BaseFund * 0.1)) * 10;

	//�� �հ�
	TotalFee = total + surtax + BaseFund;

	//�ʼ� ��뷮 ����-�����ݾ��� 1000�� ���ϰ� ���� �ʵ���
	if (TotalFee <= 3000)
	{
		UsageDiscount == 0;
	}

	TotalFee = TotalFee - FamilyDiscount - UsageDiscount;
	TotalFee = ((int)(TotalFee * 0.1)) * 10;
	

	printf("�ݿ��� ��������\n");
	printf("�⺻��                   %10d��\n", BasicFee);
	printf("�����                 %10.0f��\n", UsageFee);
	printf("����ȯ����             %10.0f��\n", EcoFee);
	printf("�����������             %10d��\n", FuelAdjust);
	printf("�ʼ���뷮 �������      %10d��\n", UsageDiscount);
	printf("�밡������               %10d��\n", FamilyDiscount);
	printf("�ΰ���                   %10.0f��\n", surtax);
	printf("���                     %10.0f��\n", BaseFund);
	printf("��                       %10.0f��\n", TotalFee);
	printf("20203500 �̿���");


	return 0;
}