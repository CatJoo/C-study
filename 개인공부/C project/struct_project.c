#include <stdio.h>
#include <time.h>
// 5마리의 펫이 있다
// 아무키나 눌러서 랜덤으로 펫을 뽑는다
// 5마리 모두 다 수집을 해서 열심히 키우면 되는 게임
// 중복발생가능!

// 펫
// 이름, 나이, 성격, 키우기 난이도 (레벨)

void initPets(); //펫 정보 초기화
void printPet(int selected);
int checkCollection();

typedef struct {
	char* name; //이름
	int age; //나이
	char* character; //성격
	int level; //키우기 난이도(1-5, 5가 어려움)
} PET;

int collection[5] = { 0,0,0,0,0 }; //현재까지 보유한 펫
PET animal[5]; //전체 펫 리스트

int main_struct_project(void)
{
	srand(time(NULL));

	initPets();
	while (1)
	{
		printf("두근두근! 어느 펫을 키우게 될까요?\n아무키나 눌러서 확인하세요!\n");
		getchar();

		int selected = rand() % 5; //0 ~ 4 사이의 숫자 반환  
		printPet(selected); //뽑은 펫 정보 출력
		collection[selected] = 1; //펫 뽑기 처리

		int collectAll = checkCollection();
		if (collectAll)
			break;
	}
	return 0;
}

void initPets()
{
	animal[0].name = "이현우쉽";
	animal[0].age = 5;
	animal[0].character = "온순함";
	animal[0].level = 1;

	animal[1].name = "이현우냥냥이";
	animal[1].age = 8;
	animal[1].character = "시크함";
	animal[1].level = 2;

	animal[2].name = "이현우찍찍이";
	animal[2].age = 3;
	animal[2].character = "시끄러움";
	animal[2].level = 3;

	animal[3].name = "이현우개미";
	animal[3].age = 11;
	animal[3].character = "어지럽힘";
	animal[3].level = 4;

	animal[4].name = "이현우멍멍이";
	animal[4].age = 10;
	animal[4].character = "귀여움";
	animal[4].level = 5;
}

void printPet(int selected)
{
	printf("\n\n=== 당신은 이 펫의 주인이 되었어요! ===\n\n");
	printf("이름 :   %s\n", animal[selected].name);
	printf("나이 :   %d\n", animal[selected].age);
	printf("성격 :   %s\n", animal[selected].character);
	printf("난이도 :  ");

	for (int i = 0; i < animal[selected].level; i++)
	{
		printf("★");
	}
	printf("\n\n");
}

int checkCollection()
{
	// 현재 보유한 펫 목록을 출력
	// 다 모았는지 여부 반환

	int collectAll = 1;

	printf("\n\n================================ 보유한 펫 목록이에요 ==================================\n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0)  // 펫 수집 X
		{
			printf("%15s", "빈 박스");
			collectAll = 0; // 다 모으지 못한 상태
		}
		else // 펫 수집 O
		{
			printf("%15s", animal[i].name);
		}
	}
	printf("\n=======================================================================================\n\n");

	if (collectAll)
	{
		printf("\n\n축하합니다! 모든 펫을 다 모았어요. 열심히 키워주세요\n\n");
	}
	return collectAll;
}