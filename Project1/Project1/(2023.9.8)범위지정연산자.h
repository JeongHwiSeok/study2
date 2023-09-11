#include <iostream>
using namespace std;
//int data = 25;

namespace A
{
	void Attack()
	{
		std::cout << "A 개발자 Attack( )" << std::endl;
	}
}

namespace B
{
	void Attack()
	{
		std::cout << "B 개발자 Attack( )" << std::endl;
	}
}

void Damage(int hp = 100)
{
	hp -= 25;
	cout << "hp의 값 : " << hp << endl;
}
// 기본 매개변수는 오른쪽에서부터 정의
void Move(int x, int y, int z = 10)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;
	cout << "z의 값 : " << z << endl;
}

int gcd(int a, int b)
{
	int n;
	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}

	return a;
}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자

	/*int data = 100;

	std::cout << "지역 변수 data의 값 : " << data << std::endl;
	std::cout << "전역 변수 data의 값 : " << ::data << std::endl;*/

	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을 때 가장 가까운 범위에 선언된 변수의 이름을 사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출 되지 않음

#pragma endregion

#pragma region 이름 공간
	//// 속성을 구분할 수 있도록 유도 범위를 설정하는 영역(각 캐릭터의 간단한 기술을 한 프로젝트에서 관리한다면 사용할만함)
	//A::Attack();
	//B::Attack();

#pragma endregion

#pragma region 기본 매개변수
	// 함수의 매개변수에 값이 전달되지 않았을 때 기본 값으로 설정되는 매개변수

	//int hp = 100;

	//Damage();

	//Move(5, 10);
	//// 기본 매개변수가 있는 위치에 다시 새로운 인수를 입력가능
	//Move(5, 10, 100);
#pragma endregion

#pragma region 최소공배수

	int a, b;
	cin >> a >> b;



	cout << "최소 공배수 : " << lcm(a, b);

#pragma endregion



	return 0;
}
