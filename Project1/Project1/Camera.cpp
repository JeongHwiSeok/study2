#include "Camera.h"

Camera::Camera()
{
	view = 60;
	cout << "Camera ����" << endl;
}

Camera::~Camera()
{
	cout << "Camera ����" << endl;
}

	// const �Լ�
	// ���� ��¸��� �̿��Ҷ� ���

void Camera::Information() const;
{
	cout << "view�� �� : " << view << endl;
}