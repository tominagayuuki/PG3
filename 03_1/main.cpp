#include<stdio.h>
#include<stdlib.h>
//#include"test.h"
#include"SceneManager.h"

int main() {
	////�C���X�^���X���擾
	//SceneManager* sceneManager= SceneManager::GetInstance();
	////�g�p����
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

