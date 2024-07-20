#pragma once
#include "framework.h"

#define WIN_SIZE_X 800
#define WIN_SIZE_Y 600

extern HWND g_hWnd;

// Ư�� ��ü�� �׸� ��, ��ġ�� ����� �ʿ�
// �׷� �� ������, ��ġ�� ����� ���õ� ������
// ���� �����ϱ� ���ŷο�Ƿ� ���� ���Ǵ� �����͸� ����üȭ
typedef struct tagInfo
{
	int posX;
	int posY;
	int sizeX;
	int sizeY;
}INFO;
