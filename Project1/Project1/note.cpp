#include <iostream>
#include "Vulture.h"
using namespace std;

#pragma region ������
	// ���� ���� ���� �ٸ� ��ü�� ������ ����� ���� �ٸ� ������� ó���� �� �ִ� �۾�

	// �������� ������ ������ �Լ��� �Ӽ��� �����Ǵ� ���� ���ε��� ���� �ʰ�, ���� �ð��� �Լ��� �Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� ��
#pragma endregion




int main()
{
#pragma region �������̵�
	//Mechanic mechanic;
	//mechanic.Move();

	//Vulture vulture;
	//vulture.Move();
#pragma endregion

#pragma region ���� �Լ�
	// ����ϴ� Ŭ���� ������ ���� ������ �Լ��� ������ �� �� �ִ� �Լ�
	
	Mechanic * mechanic1 = new Vulture;
	
	/*cout << "Mechanic�� ũ�� : " << sizeof(Mechanic) << endl;
	cout << "Vulture�� ũ�� : " << sizeof(Vulture) << endl;*/
	mechanic1->Move();
	mechanic1->Attack();

	//Vulture* mechanic2 = new Vulture;
	//mechanic2->Move();

	// Ÿ���� ��ī���̱� ������ �������� �ּҰ� ��ī�� Ŭ������������ �̱� ������ ��ī�и� ȣ���
	// ���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������ ���� Ŭ������ ������ �� �Լ��� ȣ���� �� ������, ���� �����ڴ� ������ �����ؾ���


#pragma endregion

	// ���� : 

	return 0;
}