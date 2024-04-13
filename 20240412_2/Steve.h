#pragma once
#include "Person.h"

class Steve : private Person
{
private:
	char Name[10] = "½ºÆ¼ºñ";

public:
	Steve();
	~Steve();

	virtual void SetAttack(int n)
	{
		this->AttackChoose = n;
	}

	virtual int GetAttack()
	{
		return this->AttackChoose;
	}

	virtual void SetHP(int n)
	{
		this->HP = n;
	}

	virtual int GetHP()
	{
		return this->HP;
	}
};

