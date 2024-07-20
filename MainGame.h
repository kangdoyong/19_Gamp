#pragma once
#include "Define.h"

class Object;

class MainGame
{
private:
	HDC hdc; // 게임 내 객체를 그릴 때 사용할 hdc
	Object* player; // 플레이어 객체를 담아둘 필드
	list<Object*> monsters;

public:
	void Initialize();
	void Update();
	void Render();
	void Release();

	MainGame();
	~MainGame();
};

