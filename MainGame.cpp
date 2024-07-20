#include "MainGame.h"
#include "Player.h"
#include "Monster.h"
#include "MathUtil.h"

void MainGame::Initialize()
{
	hdc = GetDC(g_hWnd);

	player = new Player();
	player->Initialize();

	for (int i = 0; i < 10; ++i)
	{
		Object* monster = new Monster();
		monster->Initialize();
		monster->SetPos(rand() % WIN_SIZE_X, rand() % WIN_SIZE_Y);
		
		monsters.push_back(monster);

	}

}

void MainGame::Update()
{
	player->Update();

	for (auto i = monsters.begin(); i != monsters.end();)
	{
		if (MathUtil::OnCollision(player, *i))
		{
			delete* i;
			*i = nullptr;
			i = monsters.erase(i);
		}
		else
		{
			++i;
		}
	}
}

void MainGame::Render()
{
	Rectangle(hdc, 0, 0, WIN_SIZE_X, WIN_SIZE_Y);
	player->Render(hdc);

	for (auto i = monsters.begin(); i != monsters.end(); ++i)
	{
		(*i)->Render(hdc);
	}
}

void MainGame::Release()
{
	if (player)
	{
		delete player;
		player = nullptr;
	}

	for (auto i = monsters.begin(); i != monsters.end(); ++i)
	{
		if (*i)
		{
			delete* i;
			*i = nullptr;
		}
	}
	monsters.clear();

	ReleaseDC(g_hWnd, hdc);
}

MainGame::MainGame()
{
}

MainGame::~MainGame()
{
	Release();
}