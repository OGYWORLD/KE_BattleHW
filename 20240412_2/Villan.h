#pragma once
#include "Person.h"

class Villan : private Person
{
private:
	char Name[10] = "³ª»Û ³ð";

public:
	Villan();
	~Villan();

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

