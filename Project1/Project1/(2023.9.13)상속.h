#pragma once
#include <iostream>
#include "Camera.h"
using namespace std;

#pragma region ���
// ���� Ŭ������ �Ӽ��� ���� Ŭ������ ����� �� �ֵ��� �������ִ� ���

class Vehicle
{
protected:
	float speed;
	static int Killcount;

public:
	Vehicle()
	{
		cout << "Vehicle ������Ʈ" << endl;
	}
	void Movement()
	{
		cout << "�̵�" << endl;
	}

	static int GetCount()
	{


	}

	~Vehicle()
	{
		cout << "Vehicle ������Ʈ ����" << endl;
	}
};

int Vehicle::Killcount = 10;

class Car : public Vehicle
{
private:
	int carID;

public:
	Car()
	{
		carID = 1;
		speed = 100;
		cout << "Car ������Ʈ" << endl;
	}

	~Car()
	{
		cout << "Car ������Ʈ ����" << endl;
		cout << "KillCount : " << Killcount++ << endl;
	}
};

// Ŭ������ ��Ӱ��迡�� ���� Ŭ������ ���� Ŭ������ �Ӽ��� ����� �� ������, ���� Ŭ������ ���� Ŭ������ �޸𸮸� ������ ���·� �޸��� ũ�Ⱑ ������

#pragma endregion


int main()
{
#pragma region ���

	Vehicle vehicle;

	Car car1;
	Car car2;
	Car car3;

	cout << "car�� ũ�� : " << sizeof(Car) << endl;
	cout << "vehicle�� ũ�� : " << sizeof(vehicle) << endl;

#pragma endregion

#pragma region Ŭ���� ���Ұ� ����

	/*Camera camera;

	camera.Information();*/

#pragma endregion




	return 0;
}