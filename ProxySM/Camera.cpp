#include "stdafx.h"
#include "Camera.h"

Camera::Camera(void)
{
	mode = false;
	refcount = 0;
}

string Camera::TakeAPicture(string subject)
{
	cout << "사진을 찍습니다." << endl;

	if (mode)
	{
		return "수동 모드로 찍힌 사진:" + subject;
	}

	return "자동 모드로 찍힌 사진:" + subject;
}

void Camera::ChangeMode(bool mode)
{
	this->mode = mode;
	if (mode)
	{
		cout << "수동 모드로 변환되었습니다." << endl;
	}
	else
	{
		cout << "자동 모드로 변환되었습니다." << endl;
	}
}

bool Camera::GetMode()
{
	if (mode)
	{
		cout << "수동 모드입니다." << endl;
	}

	return mode;
}

int Camera::AddRef()
{
	refcount++;
	cout << "참조 개수 증가:" << refcount << endl;
	
	return refcount;
}

int Camera::ReleaseRef()
{
	refcount--;
	cout << "참조 개수 감소" << refcount << endl;

	return refcount;
}