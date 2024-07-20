#pragma once
#include "Object.h"

// 1. ���� Ŭ������ �����ϰ�, ���ΰ��ӿ��� ���� ��ü�� 10���� ����
// 2. ���ʹ� x, y ������ 100��ŭ�� ����� ����, ���� ����� �����ϴ�.
// 3. ���� ������ ���͸� ������ �� �ְ� list�� ���� ��ü�� ����ּ���
// 4. ���� ��, ������ ��ġ�� ȭ�� ������ ������ ��ġ�� ����

class Monster :
    public Object
{
public:
    // Object��(��) ���� ��ӵ�
    void Initialize() override;
    void Update() override;
    void Render(HDC hdc) override;
    void Release() override;

    Monster();
    virtual ~Monster();
};

