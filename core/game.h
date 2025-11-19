#ifndef CORE_GAME_H
#define CORE_GAME_H

// 씬 종류 (자동저장될 값)
typedef enum {
    SCENE_TITLE = 0,
    SCENE_CREATE,
    SCENE_MENU,
    SCENE_TOWN,
    SCENE_BATTLE
} SceneType;

// 현재 씬 상태 (자동 저장 대상)
extern SceneType g_CurrentScene;

#endif
