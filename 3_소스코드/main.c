#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int player, computer;
    int win=0;
    int lose=0;
    srand(time(NULL));

    printf("컴퓨터와 대결하는 가위바위보 게임\n");
    printf("1:가위, 2:바위, 3:보, 0:종료\n\n");

    while (1)
    {
        printf("당신의 선택은?: ");
        scanf("%d", &player);

        if(player==0)
        {
            printf("게임을 종료합니다.\n");
            break;
        }

        if(player<1||player>3)
        {
            printf("잘못된 입력입니다. 1~3 중에서 선택해주세요.\n\n");
            continue;
        }
        
        computer = rand() % 3 + 1;

        printf("컴퓨터의 선택: ");
        if(computer==1) printf("가위\n");
        else if(computer==2) printf("바위\n");
        else printf("보\n");

        if(player==computer)
        {
            printf("비겼어요.\n");
            printf("\n");
            win=0;
            lose=0;
        }

        else if((player==1&&computer==3)||(player==2&&computer==1)||(player==3&&computer==2))
        {
            printf("당신이 이겼어요!\n");
            win++;
            lose=0;

            if(win==3)
            {
                printf("3연승 중! 정말 잘하는데요!\n");
            }
            else if(win==5)
            {
                printf("5연승 중! 가위바위보의 왕!\n");
            }
            else
            {
                printf("\n");
            }

        
        }

        else
        {
            printf("컴퓨터가 이겼어요.\n");
            lose=++;
            win=0;

            if(lose==2)
            {
                printf("2 연패 중 운이 없으시네요\n");
            }
            else if(lose==3)
            {
                printf("3연패 힘내세요..\n");
            }
            else if(lose==5)
            {
                printf("정말 못 하시네요\n");
            }
            else
            {
                printf("\n");
            }
        }
    }

    
  
    
    return 0;
}
