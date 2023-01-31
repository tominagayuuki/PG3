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
	// Enemy ‘S‘Ì‚Ìî•ñ
	static  bool isAllAlive;//true:¶‘¶@false:€–Å

private:
	//ŒÂ•Ê‚Ìó‘Ô
	bool isAlive; //true:¶‘¶@false:€–Å
};

