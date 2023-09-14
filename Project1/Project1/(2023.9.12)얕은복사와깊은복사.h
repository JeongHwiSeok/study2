#include <iostream>
using namespace std;

#pragma region 복사 생성자
// 같은 객체를 복사하여 생성시킬 때 호출되는 생성자

class Item
{
private:
	int price;
	int* size;


public:
	Item()
	{
		price = 100;
		size = new int;
		*size = 999;
	}

	Item(const Item& clone)
	{
		price = clone.price;
		size = new int;
		*size = 450;
	}

	void show()
	{
		cout << "price : " << price << endl;
		cout << "*size : " << *size << endl;
	}


	~Item()
	{
		delete size;
	}
	// 기본 생성자
	// public Item() {};
};

#pragma endregion


int main()
{
#pragma region 복사 생성자

	/*Item item1;
	item1.show();

	Item item2();
	item2.show();*/

#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때 주소 값을 복사하여 같은 메모리를 가리키는 복사

	/*int * ptr1 = new int;
	int * ptr2 = ptr1;

	*ptr2 = 1000;

	cout << "ptr1 : " << *ptr1 << endl;
	cout << "ptr2 : " << *ptr2 << endl;

	delete ptr1;*/
	// delete ptr2; Error

	// 얕은 복사는 객체가 메모리에서 해제될 때 생성자의 실행 순서와 반대로 소멸자가 실행됨



	// 복사한 객체의 메모리가 먼저 해제되므로 원래 있던 객체가 해제될 때는 이미 해제된 메모리에 접근하게 됨

#pragma endregion

#pragma region 깊은 복사
	// 객체를 복사 할 때, 참조 값이 아닌 인스턴스 자체를 새로 복사하여 서로 다른 메모리를 생성하는 복사

	Item item1;
	item1.show();

	Item item2(item1);
	item2.show();

#pragma endregion



	return 0;
}