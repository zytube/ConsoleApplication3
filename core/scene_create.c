#include <stdio.h>
#include <string.h>
#include "../system/utils.h"
#include "scene_create.h"
#include "scene_town.h"

void ShowCharacterCreate() {
    char jobInput[32];

    while (1) {
        ClearScreen();

        printf("=================================================\n");
        printf("                 [ 캐릭터 생성 ]\n");
        printf("=================================================\n");
        printf("당신의 직업을 선택하세요.\n");
        printf(" [ 1 ] 전사\n");
        printf(" [ 2 ] 마법사\n");
        printf(" [ 3 ] 궁수\n");
        printf(" [ 0 ] 취소\n");
        printf("-------------------------------------------------\n");
        printf(" 선택 > ");

        fgets(jobInput, sizeof(jobInput), stdin);
        jobInput[strcspn(jobInput, "\n")] = 0;

        if (strlen(jobInput) == 0) {
            printf("잘못된 입력입니다.\n");
            Pause();
            continue;
        }

        if (strcmp(jobInput, "0") == 0)
            return;
        else if (strcmp(jobInput, "1") == 0 ||
                 strcmp(jobInput, "2") == 0 ||
                 strcmp(jobInput, "3") == 0)
        {
            break;
        }

        printf("잘못된 입력입니다. 다시 선택하세요.\n");
        Pause();
    }

    char name[32];

    while (1) {
        ClearScreen();
        printf("이름을 입력하세요.\n→ ");

        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0;

        if (strlen(name) == 0) {
            printf("이름은 비워둘 수 없습니다.\n");
            Pause();
            continue;
        }

        break;
    }

    ClearScreen();
    printf("'%s' 캐릭터를 생성했습니다.\n", name);
    Pause();

    ShowTown(name);
}
