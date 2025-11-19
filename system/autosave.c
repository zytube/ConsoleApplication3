#include "autosave.h"
#include "fileio.h"
#include <stdio.h>

#define SAVE_FILE "data/save.dat"

// 자동 저장: 플레이어 + 현재 씬 저장
void AutoSave(const CharacterData* player, SceneType scene) {
    if (!player) return;

    // 플레이어 정보 저장
    SavePlayer(player);

    // 현재 씬 저장
    FILE* fp = fopen(SAVE_FILE, "w");
    if (!fp) return;

    fprintf(fp, "%d\n", (int)scene);
    fclose(fp);
}

int AutoLoad(CharacterData* outPlayer, SceneType* outScene) {
    if (!outPlayer || !outScene) return 0;

    // 먼저 캐릭터 데이터를 불러온다
    if (!LoadPlayer(outPlayer)) {
        return 0; // 저장된 캐릭터 없음
    }

    // 씬 정보 불러오기
    FILE* fp = fopen(SAVE_FILE, "r");
    if (!fp) return 0;

    int sceneTemp;
    if (fscanf(fp, "%d", &sceneTemp) != 1) {
        fclose(fp);
        return 0;
    }
    fclose(fp);

    // 씬 범위 디펜스
    if (sceneTemp < SCENE_TITLE || sceneTemp > SCENE_BATTLE) {
        return 0;
    }

    *outScene = (SceneType)sceneTemp;
    return 1; // 성공!
}

