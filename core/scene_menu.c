#include <stdio.h>
#include <string.h>
#include "../system/utils.h"
#include "scene_menu.h"
#include "scene_create.h"
#include "scene_town.h"
#include "scene_admin.h"

void ShowMainMenu() {
    char input[32];

    while (1) {
        ClearScreen();

        printf("=================================================\n");
        printf("                    ECHOES OF VALOR\n");
        printf("=================================================\n");
        printf(" [ 1 ] 새로 시작하기\n");
        printf(" [ 2 ] 불러오기\n");
        printf(" [ 3 ] 설정 (미구현)\n");
        printf(" [ 4 ] 종료하기\n");
        printf("-------------------------------------------------\n");
        printf(" 개발자 모드 ▶ 1000110101\n");
        printf("=================================================\n");
        printf(" 선택 > ");

        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strlen(input) == 0) {
            printf("잘못된 입력입니다.\n");
            Pause();
            continue;
        }

        if (strcmp(input, "1") == 0) {
            ShowCharacterCreate();
        }
        else if (strcmp(input, "2") == 0) {
            ClearScreen();
            printf("불러오기 기능은 아직 미구현입니다.\n");
            Pause();
        }
        else if (strcmp(input, "3") == 0) {
            ClearScreen();
            printf("설정 기능은 아직 미구현입니다.\n");
            Pause();
        }
        else if (strcmp(input, "4") == 0) {
            ClearScreen();
            printf("게임을 종료합니다.\n");
            return;
        }
        else if (strcmp(input, "1000110101") == 0) {
            ShowAdmin();
        }
        else {
            printf("잘못된 입력입니다. 다시 시도하세요.\n");
            Pause();
        }
    }
}
