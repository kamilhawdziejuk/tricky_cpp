// TrickyCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WhatIf\PrivateInheritance.cpp"

int _tmain(int argc, _TCHAR* argv[])
{
	PrivateInheritance *p = new PrivateInheritance();
	p->Test();
	return 0;
}

