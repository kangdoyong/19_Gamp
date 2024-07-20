#include "Player.h"

void Player::Initialize()
{
	info.sizeX = 50;
	info.sizeY = 50;
}

void Player::Update()
{
	// ���콺 ��ǥ ���� �޾ƿ�
	// �޾ƿ� ��ǥ ���� �츮�� ������ ���α׷�(������) â ������
	// ��ǥ�� �ƴ϶�, ������ ��ũ�� (��üȭ��)�� ��ǥ��
	GetCursorPos(&mousePos);
	// �޾ƿ� ��ũ�� ��ǥ�� Ŭ���̾�Ʈ ��ǥ�� ��ȯ
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
