#include "Camera.h"

Camera::Camera()
{
	view = 60;
	cout << "Camera 생성" << endl;
}

Camera::~Camera()
{
	cout << "Camera 삭제" << endl;
}

	// const 함수
	// 값의 출력만을 이용할때 사용

void Camera::Information() const;
{
	cout << "view의 값 : " << view << endl;
}