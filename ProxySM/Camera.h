#pragma once
#include "ITake.h"

class Camera :public ITake
{
	bool mode;
	int refcount;		//���� ����

public:
	Camera(void);
	virtual string TakeAPicture(string subject);
	virtual void ChangeMode(bool mode);
	virtual bool GetMode();
	int AddRef();
	int ReleaseRef();
};
