#include<stdio.h>
#include<stdlib.h>
//#include"test.h"
#include"SceneManager.h"

int main() {
	////インスタンスを取得
	//SceneManager* sceneManager= SceneManager::GetInstance();
	////使用する
	// 
	int scene = 0;
	//
	SceneManager* sm = SceneManager::GetInstance();
	/*TestSingleton::GetInstance()->Hello();*/

	while (true) {
		sm->ChangeScene(scene);
		scene += 1;
		if (scene == 4) {
			break;
		}
		
	}
	return 0;

}

