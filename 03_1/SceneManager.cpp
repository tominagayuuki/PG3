#include "SceneManager.h"
#include<stdio.h>

SceneManager::SceneManager()
{}

SceneManager::~SceneManager()
{
}

void SceneManager::ChangeScene(int sceneNo)
{
	if (sceneNo == 0) {
		printf("scene1 Title\n");
	}
	else if (sceneNo == 1) {
		printf("scene2 NewGame\n");
	}
	else if (sceneNo == 2) {
		printf("scene3 GamePlay\n");
	}
	else if (sceneNo == 3) {
		printf("scene4 GameClear\n");
	}
}

SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;

	return &instance;
}
