#include "stdafx.h"
#include "RefCamera.h"

void main()
{
	RefCamera rc1;
	RefCamera rc2(rc1);
	RefCamera rc3(rc1);
	RefCamera rc4(rc1);

	cout << rc1->TakeAPicture("������� ��") << endl;
	rc2->ChangeMode(true);
	cout << rc3->TakeAPicture("�ұ����� �ܿ�") << endl;
	rc4->ChangeMode(false);
	cout << rc3->TakeAPicture("Ȳ������ ���� ������") << endl;
}