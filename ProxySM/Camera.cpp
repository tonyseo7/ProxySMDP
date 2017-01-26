#include "stdafx.h"
#include "Camera.h"

Camera::Camera(void)
{
	mode = false;
	refcount = 0;
}

string Camera::TakeAPicture(string subject)
{
	cout << "������ ����ϴ�." << endl;

	if (mode)
	{
		return "���� ���� ���� ����:" + subject;
	}

	return "�ڵ� ���� ���� ����:" + subject;
}

void Camera::ChangeMode(bool mode)
{
	this->mode = mode;
	if (mode)
	{
		cout << "���� ���� ��ȯ�Ǿ����ϴ�." << endl;
	}
	else
	{
		cout << "�ڵ� ���� ��ȯ�Ǿ����ϴ�." << endl;
	}
}

bool Camera::GetMode()
{
	if (mode)
	{
		cout << "���� ����Դϴ�." << endl;
	}

	return mode;
}

int Camera::AddRef()
{
	refcount++;
	cout << "���� ���� ����:" << refcount << endl;
	
	return refcount;
}

int Camera::ReleaseRef()
{
	refcount--;
	cout << "���� ���� ����" << refcount << endl;

	return refcount;
}