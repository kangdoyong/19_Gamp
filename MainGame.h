#pragma once
#include "Define.h"

class Object;

class MainGame
{
private:
	HDC hdc; // ���� �� ��ü�� �׸� �� ����� hdc
	Object* player; // �÷��̾� ��ü�� ��Ƶ� �ʵ�
	list<Object*> monsters;

public:
	void Initialize();
	void Update();
	void Render();
	void Release();

	MainGame();
	~MainGame();
};

