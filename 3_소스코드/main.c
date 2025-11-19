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
        pintf("당신의 선택은?: ");
        scanf("%d", &player);

        if(player==0)
        {
            printf("게임을 종료합니다.\n");
            break;
        }

        if(player<1||player>3)
        {
            pintf("잘못된 입력입니다. 1~3 중에서 선택해주세요.\n\n");
            continue;
        }
        
    }

    
  
    
    return 0;
}
