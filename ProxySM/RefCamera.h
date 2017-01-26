#pragma once
#include "ITake.h"
#include "Camera.h"

class RefCamera : public ITake
{
	Camera *camera;		//���� ��ü

public:
	RefCamera(void);
	RefCamera(const RefCamera &ref_camera);
	~RefCamera(void);

	virtual string TakeAPicture(string subject);
	virtual void ChangeMode(bool mode);
	virtual bool GetMode();
	Camera *operator->();		//������ �����ε�
};
