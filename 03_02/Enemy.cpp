#include "Enemy.h"
#include "Enemy.h"
#include "Enemy.h"
#include "Enemy.h"
#include<stdio.h>

//static �����o�ϐ��� Enemy cpp �ŗp�ӂ���
bool Enemy::isAllAlive = false;

Enemy::Enemy()
{
    isAlive = true;
    isAllAlive = true;
}

Enemy::~Enemy()
{
}


bool Enemy::IsAlive()
{
    return isAlive;
}

void Enemy::SetDeath()
{
    isAlive = false;
    isAllAlive = false;
}

void Enemy::Update()
{
    printf("�X�V����\n");
    if (isAllAlive == false) {//�S�łȂ�
        isAlive = false;
    }
}

void Enemy::Draw()
{
    if (IsAlive()) {
        printf("�G�̕\��\n");
    }
 
}
