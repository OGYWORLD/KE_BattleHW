#pragma once
#include <iostream>
#include "IPerson.h"

class Person abstract : public IPersonClass
{
protected:
	int HP;
	int AttackChoose;

public:
	Person();
	~Person();

};

