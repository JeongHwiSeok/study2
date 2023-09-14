#pragma once
#include <iostream>
#include "Camera.h"
using namespace std;

#pragma region 상속
// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 설정해주는 기능

class Vehicle
{
protected:
	float speed;
	static int Killcount;

public:
	Vehicle()
	{
		cout << "Vehicle 오브젝트" << endl;
	}
	void Movement()
	{
		cout << "이동" << endl;
	}

	static int GetCount()
	{


	}

	~Vehicle()
	{
		cout << "Vehicle 오브젝트 삭제" << endl;
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
		cout << "Car 오브젝트" << endl;
	}

	~Car()
	{
		cout << "Car 오브젝트 삭제" << endl;
		cout << "KillCount : " << Killcount++ << endl;
	}
};

// 클래스의 상속관계에서 상위 클래스는 하위 클래스의 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의 메모리를 포함한 상태로 메모리의 크기가 결정됨

#pragma endregion


int main()
{
#pragma region 상속

	Vehicle vehicle;

	Car car1;
	Car car2;
	Car car3;

	cout << "car의 크기 : " << sizeof(Car) << endl;
	cout << "vehicle의 크기 : " << sizeof(vehicle) << endl;

#pragma endregion

#pragma region 클래스 분할과 구현

	/*Camera camera;

	camera.Information();*/

#pragma endregion




	return 0;
}