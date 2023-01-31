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
	// Enemy 全体の情報
	static  bool isAllAlive;//true:生存　false:死滅

private:
	//個別の状態
	bool isAlive; //true:生存　false:死滅
};

