#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;  ///연관 업체 게임
};

typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO;

typedef struct {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO;

int main_struct(void)
{
	//[게임 출시]
	//이름: 이현우바보
	//발매년도: 2022년
	//가격: 50억
	//제작사: 이영주천재

	char* name = "이현우바보";
	int year = 2022;
	int price = 50;
	char* company = "이영주 천재";

	//[게임 출시]
	//이름: 이현우멍청이
	//발매년도: 2022년
	//가격: 100억
	//제작사: 이영주똑똑이

	char* name2 = "이현우멍청이";
	int year2 = 2022;
	int price2 = 100;
	char* company2 = "이영주똑똑이";

	//구조체 사용
	struct GameInfo gameInfo1;
	//struct GameInfo gameInfo2;
	gameInfo1.name = "이현우바보";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "이영주천재";

	//구조체 출력
	printf("---게임 출시 정보---\n\n");
	printf("게임명    :    %s\n", gameInfo1.name);
	printf("발매년도  :    %d\n", gameInfo1.year);
	printf("가격      :    %d\n", gameInfo1.price);
	printf("제작사    :    %s\n", gameInfo1.company);

	//구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = { "이현우멍청이", 2022, 100,"이영주똑똑이" };
	printf("---또 다른 게임 출시 정보---\n\n");
	printf("게임명    :    %s\n", gameInfo2.name);
	printf("발매년도  :    %d\n", gameInfo2.year);
	printf("가격      :    %d\n", gameInfo2.price);
	printf("제작사    :    %s\n", gameInfo2.company);

	//구조체 배열
	struct GameInfo gameArray[2] = {
		{"이현우바보", 2022, 50,"이영주천재"},
		{"이현우멍청이", 2022, 100,"이영주똑똑이"}
	};

	//구조체 포인터
	struct GameInfo* gamePtr; //미션맨
	gamePtr = &gameInfo1;
	printf("\n\n--미션맨의 게임 출시 정보--\n");
	printf("게임명    :    %s\n", (*gamePtr).name);
	printf("발매년도  :    %d\n", (*gamePtr).year);
	printf("가격      :    %d\n", (*gamePtr).price);
	printf("제작사    :    %s\n", (*gamePtr).company);

	printf("게임명    :    %s\n", gamePtr->name);
	printf("발매년도  :    %d\n", gamePtr->year);
	printf("가격      :    %d\n", gamePtr->price);
	printf("제작사    :    %s\n", gamePtr->company);

	//연관 업체 소개(구조체 안의 구조체)
	gameInfo1.friendGame = &gameInfo2;              // 굳이..? 이렇게 쓰는 이유가 뭐냐
	printf("\n\n--연관업체의 게임 출시 정보--\n");
	printf("게임명    :    %s\n", gameInfo1.friendGame->name);
	printf("발매년도  :    %d\n", gameInfo1.friendGame->year);
	printf("가격      :    %d\n", gameInfo1.friendGame->price);
	printf("제작사    :    %s\n", gameInfo1.friendGame->company);

	//typedef
	//자료형에 별명 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3;  //int i = 3;
	실수 실수변수 = 3.23f;  //float f = 3.23f;
	printf("\n\n정수변수 : %d, 실수변수 : %.2f\n\n", 정수변수, 실수변수);

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "이현우 sheep";
	game1.year = 2022;

	GAME_INFO game2;
	game2.name = "이현우 sheep2";
	game2.year = 2022;

	struct GameInformation game3;
	game3.name = "이현우 sheep3";
	game3.year = 2022;


	return 0;
}