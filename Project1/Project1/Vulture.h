#pragma once
#include "Mechanic.h"

class Vulture : public Mechanic
{
public:
	Vulture();

#pragma region �Լ��� �������̵�
	// ���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� �������Ͽ� ����ϴ� ���

	void Move();

	virtual void Attack();

	// �Լ��� �������̵�� ��Ӱ��迡���� �̷������, ���� Ŭ�������� �Լ��� ������ �� �� ���� Ŭ������ �Լ� ���¿� ��ġ�ؾ���.
#pragma endregion

};