#pragma once
#include "Object.h"
class Player :
    public Object
{
private:
	// 마우스 좌표 값을 받기 위한 구조체 필드
	POINT mousePos;

public:
	// Object을(를) 통해 상속됨
	void Initialize() override;
	void Update() override;
	void Render(HDC hdc) override;
	void Release() override;

	Player();
	virtual ~Player();
};

