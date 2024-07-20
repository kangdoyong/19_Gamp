#pragma once
#include "Object.h"
class Player :
    public Object
{
private:
	// ���콺 ��ǥ ���� �ޱ� ���� ����ü �ʵ�
	POINT mousePos;

public:
	// Object��(��) ���� ��ӵ�
	void Initialize() override;
	void Update() override;
	void Render(HDC hdc) override;
	void Release() override;

	Player();
	virtual ~Player();
};

