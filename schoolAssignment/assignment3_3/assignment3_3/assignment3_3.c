#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int com, player;
	int win = 0;
	int lost = 0;
	printf("가위바위보 게임\n\n");
	printf("컴퓨터: %d승 %d패,  당신: %d승 %d패\n", lost, win, win, lost);

	srand(time(NULL));

	while ( (win < 3) && ( lost < 3) )
	{
		i++;
		printf("\n\n라운드 %d\n\n", i );
		com = rand() % 3;
		printf("컴퓨터가 결정했습니다.\n");
		printf("무엇을 내시겠습니까? (가위:0, 바위:1, 보:2)");
		scanf("%d", &player);

		//잘못된 입력(0,1,2 이외) 거르기
		while((player < 0) || (player > 2))
		{
			printf("\n잘못된 숫자입니다. 다시 입력하세요.\n");
			printf("무엇을 내시겠습니까? (가위:0, 바위:1, 보:2)");
			scanf("%d", &player);
		}

		//같을 경우(비길 경우)
		if (com == player)
		{
			printf("비겼습니다.\n");
		}

		//다를 경우
		else
		{
			if (com == 0)  // com이 0이면 가위로 판단
			{
				if (player == 1)
				{
					printf("컴퓨터는 가위, 당신은 바위, 당신이 이겼습니다.\n");
					win++;
					printf("컴퓨터: %d승 %d패,  당신: %d승 %d패\n", lost, win, win, lost);
				}
				else
				{
					printf("컴퓨터는 가위, 당신은 보, 컴퓨터가 이겼습니다.\n");
					lost++;
					printf("컴퓨터: %d승 %d패,  당신: %d승 %d패\n", lost, win, win, lost);
				}
			}

			else if (com == 1) // com이 1이면 바위로 판단
			{
				if (player == 0)
				{
					printf("컴퓨터는 바위, 당신은 가위, 컴퓨터가 이겼습니다.\n");
					lost++;
					printf("컴퓨터: %d승 %d패,  당신: %d승 %d패\n", lost, win, win, lost);
				}
				else
				{
					printf("컴퓨터는 바위, 당신은 보, 당신이 이겼습니다.\n");
					win++;
					printf("컴퓨터: %d승 %d패,  당신: %d승 %d패\n", lost, win, win, lost);
				}
			}

			else if (com == 2) // com이 2면 보로 판단
			{
				if (player == 0)
				{
					printf("컴퓨터는 보, 당신은 가위, 당신이 이겼습니다.\n");
					win++;
					printf("컴퓨터: %d승 %d패,  당신: %d승 %d패", lost, win, win, lost);
				}
				else
				{
					printf("컴퓨터는 보, 당신은 바위, 컴퓨터가 이겼습니다.\n");
					lost++;
					printf("컴퓨터: %d승 %d패,  당신: %d승 %d패\n", lost, win, win, lost);
				}
			}

		}

	}

	//한쪽의 승리 판단
	if (win == 3)
	{
		printf("\n당신의 최종승리\n");
	}
	else
	{
		printf("\n컴퓨터의 최종승리\n");
	}

	printf("20203500 이영주");

	return 0;
}