#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	bool IsAlive();
	void SetDeath();

	void Update();
	void Draw();

public:
	// Enemy �S�̂̏��
	static  bool isAllAlive;//true:�����@false:����

private:
	//�ʂ̏��
	bool isAlive; //true:�����@false:����
};

