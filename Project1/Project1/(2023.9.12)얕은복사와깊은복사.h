#include <iostream>
using namespace std;

#pragma region ���� ������
// ���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� ������

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
	// �⺻ ������
	// public Item() {};
};

#pragma endregion


int main()
{
#pragma region ���� ������

	/*Item item1;
	item1.show();

	Item item2();
	item2.show();*/

#pragma endregion

#pragma region ���� ����
	// ��ü�� ������ �� �ּ� ���� �����Ͽ� ���� �޸𸮸� ����Ű�� ����

	/*int * ptr1 = new int;
	int * ptr2 = ptr1;

	*ptr2 = 1000;

	cout << "ptr1 : " << *ptr1 << endl;
	cout << "ptr2 : " << *ptr2 << endl;

	delete ptr1;*/
	// delete ptr2; Error

	// ���� ����� ��ü�� �޸𸮿��� ������ �� �������� ���� ������ �ݴ�� �Ҹ��ڰ� �����



	// ������ ��ü�� �޸𸮰� ���� �����ǹǷ� ���� �ִ� ��ü�� ������ ���� �̹� ������ �޸𸮿� �����ϰ� ��

#pragma endregion

#pragma region ���� ����
	// ��ü�� ���� �� ��, ���� ���� �ƴ� �ν��Ͻ� ��ü�� ���� �����Ͽ� ���� �ٸ� �޸𸮸� �����ϴ� ����

	Item item1;
	item1.show();

	Item item2(item1);
	item2.show();

#pragma endregion



	return 0;
}