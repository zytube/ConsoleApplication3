#include <stdio.h>
#include <string.h>
#include "../system/utils.h"
#include "scene_admin.h"

void ShowAdmin() {
    char input[32];

    while (1) {
        ClearScreen();

        printf("=================================================\n");
        printf("                [ 관리자 모드 활성화 ]\n");
        printf("=================================================\n");
        printf(" [ 1 ] 몬스터 데이터 확인 (미구현)\n");
        printf(" [ 2 ] 캐릭터 스탯 조정 (미구현)\n");
        printf(" [ 3 ] 테스트 전투 실행 (미구현)\n");
        printf(" [ 4 ] 로그 확인 (미구현)\n");
        printf(" [ 0 ] 돌아가기\n");
        printf("=================================================\n");
        printf(" 선택 > ");

        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (strlen(input) == 0) {
            printf("잘못된 입력입니다.\n");
            Pause();
            continue;
        }

        if (strcmp(input, "0") == 0)
            return;

        printf("잘못된 입력입니다.\n");
        Pause();
    }
}
