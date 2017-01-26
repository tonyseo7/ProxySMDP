#pragma once
#include "common.h"

class ITake
{
public:
	virtual string TakeAPicture(string subject) = 0;
	virtual void ChangeMode(bool mode) = 0;
	virtual bool GetMode() = 0;
};
