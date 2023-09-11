#include <iostream>
using namespace std;
//int data = 25;

namespace A
{
	void Attack()
	{
		std::cout << "A ������ Attack( )" << std::endl;
	}
}

namespace B
{
	void Attack()
	{
		std::cout << "B ������ Attack( )" << std::endl;
	}
}

void Damage(int hp = 100)
{
	hp -= 25;
	cout << "hp�� �� : " << hp << endl;
}
// �⺻ �Ű������� �����ʿ������� ����
void Move(int x, int y, int z = 10)
{
	cout << "x�� �� : " << x << endl;
	cout << "y�� �� : " << y << endl;
	cout << "z�� �� : " << z << endl;
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
#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� ������

	/*int data = 100;

	std::cout << "���� ���� data�� �� : " << data << std::endl;
	std::cout << "���� ���� data�� �� : " << ::data << std::endl;*/

	// ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������ ����Ǿ��� �� ���� ����� ������ ����� ������ �̸��� ����ϴ� ���� ��Ģ�� �����ϱ� ������ ���� ������ ȣ�� ���� ����

#pragma endregion

#pragma region �̸� ����
	//// �Ӽ��� ������ �� �ֵ��� ���� ������ �����ϴ� ����(�� ĳ������ ������ ����� �� ������Ʈ���� �����Ѵٸ� ����Ҹ���)
	//A::Attack();
	//B::Attack();

#pragma endregion

#pragma region �⺻ �Ű�����
	// �Լ��� �Ű������� ���� ���޵��� �ʾ��� �� �⺻ ������ �����Ǵ� �Ű�����

	//int hp = 100;

	//Damage();

	//Move(5, 10);
	//// �⺻ �Ű������� �ִ� ��ġ�� �ٽ� ���ο� �μ��� �Է°���
	//Move(5, 10, 100);
#pragma endregion

#pragma region �ּҰ����

	int a, b;
	cin >> a >> b;



	cout << "�ּ� ����� : " << lcm(a, b);

#pragma endregion



	return 0;
}
