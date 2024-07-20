#include "Player.h"

void Player::Initialize()
{
	info.sizeX = 50;
	info.sizeY = 50;
}

void Player::Update()
{
	// 마우스 좌표 값을 받아옴
	// 받아온 좌표 값은 우리가 생성한 프로그램(윈도우) 창 내에서
	// 좌표가 아니라, 윈도우 스크린 (전체화면)의 좌표값
	GetCursorPos(&mousePos);
	// 받아온 스크린 좌표를 클라이언트 좌표로 변환
	ScreenToClient(g_hWnd, &mousePos);

	info.posX = mousePos.x;
	info.posY = mousePos.y;
}

void Player::Render(HDC hdc)
{
	Ellipse(hdc, info.posX - info.sizeX, 
		info.posY - info.sizeY,
		info.posX + info.sizeX,
		info.posY + info.sizeY);
}

void Player::Release()
{
}

Player::Player()
{
}

Player::~Player()
{
}
