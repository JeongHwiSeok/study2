#pragma once
#include <iostream>

void Damage(int& ref)
{
	ref -= 100;
}

int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름
	//char alphabet = 'A';
	//int data = 100;

	// 스트림의 경우 입력된 데이터는 출력 장치로 전달하며, "<<" 연산자를 사용하여 자신이 참조한 값을 반환
	//std::cout << "alphabet의 값 : " << (int)alphabet << std::end1;

	//std::cin >> data;

	// 스트림으로 입력받을 때 ">>" 연산자를 사용하여 버퍼에 저장한 다음 NULL 문자까지만 버퍼 안의 내용을 출력
	//std::cout << "data의 값 : " << data << std::endl;


	// 스트림은 운영체제에 의해 생성되며, 스트림 자체에 버퍼라는 임시 메모리 공간이 존재

#pragma endregion

#pragma region 동적 할당과 해제

	// 스택에 힙에서 생성된 메모리의 주소를 스택에 있는 변수에 전송(포인터)
	/*int* ptr = new int;

	*ptr = 255;

	std::cout << "ptr 가리키는 값 : " << *ptr << std::endl;

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

#pragma region 참조자
	// 하나의 메모리 공간에 두번째 이름을 지정해서 사용하는것

	//int value = 200;
	////int & ref = value;

	//Damage(value);

	//std::cout << "value의 값 : " << value << std::endl;
	////std::cout << "ref의 값 : " << ref << std::endl;

	//value = 999;
	//
	//std::cout << "value의 값 : " << value << std::endl;
	////std::cout << "ref의 값 : " << ref << std::endl;

#pragma endregion

#pragma region 범위 기반 for문

	int datalist[5] = { 1,2,3,4,5 };

	// const의 이유 : 값의 변동을 막기 위함
	// & 메모리비용을 줄이기 위함
	for (const int& element : datalist)
	{
		std::cout << element << std::endl;
	}

#pragma endregion


	return 0;
}