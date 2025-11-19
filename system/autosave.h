#ifndef SYSTEM_AUTOSAVE_H
#define SYSTEM_AUTOSAVE_H

#include "../model/character.h"
#include "../core/game.h"

// 현재 플레이어 + 현재 씬을 자동 저장
void AutoSave(const CharacterData* player, SceneType scene);

// 자동 불러오기: 플레이어 + 씬 로드
int AutoLoad(CharacterData* outPlayer, SceneType* outScene);

#endif
