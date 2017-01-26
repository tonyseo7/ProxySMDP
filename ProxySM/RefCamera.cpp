#include "stdafx.h"
#include "RefCamera.h"
#include "Camera.h"

RefCamera::RefCamera(void)
{
	camera = new Camera();
	camera->AddRef();
}

RefCamera::~RefCamera(void)
{
	if (camera->ReleaseRef() == 0)
	{
		delete camera;
	}
}

RefCamera::RefCamera(const RefCamera &refer_camera)
{
	this->camera = refer_camera.camera;
	camera->AddRef();
}

string RefCamera::TakeAPicture(string subject)
{
	return camera->TakeAPicture(subject);
}

void RefCamera::ChangeMode(bool mode)
{
	camera->ChangeMode(mode);
}

bool RefCamera::GetMode()
{
	return camera->GetMode();
}

Camera *RefCamera::operator->()
{
	return camera;
}