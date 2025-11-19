#ifndef SYSTEM_FILEIO_H
#define SYSTEM_FILEIO_H

#include "../model/character.h"
#include "../model/monster.h"
#include "../model/equipment.h"
#include "../core/game.h"
#include <stddef.h> // size_t 사용

// 경로 생성 함수 (이름 기반 세이브 지원)

// 플레이어 저장 파일 위치 반환
// ex) data/Sia/player.txt
void GetPlayerSavePath(char* buffer, size_t bufSize, const char* playerName);

// 씬 저장 파일 위치 반환
// ex) data/Sia/save.dat
void GetSceneSavePath(char* buffer, size_t bufSize, const char* playerName);

// 플레이어 폴더 생성 (data/<name>/)
int CreatePlayerSaveFolder(const char* playerName);

// 저장된 플레이어 폴더 목록 불러오기 (불러오기 메뉴용)
// 반환값: 발견된 폴더 개수
int GetSavedPlayerList(char names[][32], int maxCount);


// 캐릭터 저장/로드 (이름 기반 저장)
int SavePlayer(const CharacterData* player, const char* playerName);
int LoadPlayer(CharacterData* outPlayer, const char* playerName);

// 씬 자동 저장/로드 (이름 기반)
int SaveScene(SceneType scene, const char* playerName);
int LoadScene(SceneType* outScene, const char* playerName);

// 몬스터 / 장비 데이터 로드 (게임 DB, 세이브 X)
int LoadMonster(MonsterData* outMonster, int monsterId);
int LoadEquipment(EquipmentData* outEquip, int equipId);

#endif
