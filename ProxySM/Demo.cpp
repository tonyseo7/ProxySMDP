#include "stdafx.h"
#include "RefCamera.h"

void main()
{
	RefCamera rc1;
	RefCamera rc2(rc1);
	RefCamera rc3(rc1);
	RefCamera rc4(rc1);

	cout << rc1->TakeAPicture("현충사의 봄") << endl;
	rc2->ChangeMode(true);
	cout << rc3->TakeAPicture("불국사의 겨울") << endl;
	rc4->ChangeMode(false);
	cout << rc3->TakeAPicture("황릉사지 터의 해질녘") << endl;
}