#pragma once
#include <iostream>

void Damage(int& ref)
{
	ref -= 100;
}

int main()
{
#pragma region ��Ʈ��
	// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧
	//char alphabet = 'A';
	//int data = 100;

	// ��Ʈ���� ��� �Էµ� �����ʹ� ��� ��ġ�� �����ϸ�, "<<" �����ڸ� ����Ͽ� �ڽ��� ������ ���� ��ȯ
	//std::cout << "alphabet�� �� : " << (int)alphabet << std::end1;

	//std::cin >> data;

	// ��Ʈ������ �Է¹��� �� ">>" �����ڸ� ����Ͽ� ���ۿ� ������ ���� NULL ���ڱ����� ���� ���� ������ ���
	//std::cout << "data�� �� : " << data << std::endl;


	// ��Ʈ���� �ü���� ���� �����Ǹ�, ��Ʈ�� ��ü�� ���۶�� �ӽ� �޸� ������ ����

#pragma endregion

#pragma region ���� �Ҵ�� ����

	// ���ÿ� ������ ������ �޸��� �ּҸ� ���ÿ� �ִ� ������ ����(������)
	/*int* ptr = new int;

	*ptr = 255;

	std::cout << "ptr ����Ű�� �� : " << *ptr << std::endl;

	delete ptr;

	ptr = nullptr;

	ptr = new int[5];

	for (int i = 0; i < 5; i++)
	{
		ptr[i] = i;
		std::cout << ptr[i] << std::endl;
	}

	delete [] ptr;*/

#pragma endregion

#pragma region ������
	// �ϳ��� �޸� ������ �ι�° �̸��� �����ؼ� ����ϴ°�

	//int value = 200;
	////int & ref = value;

	//Damage(value);

	//std::cout << "value�� �� : " << value << std::endl;
	////std::cout << "ref�� �� : " << ref << std::endl;

	//value = 999;
	//
	//std::cout << "value�� �� : " << value << std::endl;
	////std::cout << "ref�� �� : " << ref << std::endl;

#pragma endregion

#pragma region ���� ��� for��

	int datalist[5] = { 1,2,3,4,5 };

	// const�� ���� : ���� ������ ���� ����
	// & �޸𸮺���� ���̱� ����
	for (const int& element : datalist)
	{
		std::cout << element << std::endl;
	}

#pragma endregion


	return 0;
}