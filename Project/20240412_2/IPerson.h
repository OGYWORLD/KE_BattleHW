#pragma once

__interface IPersonClass
{
	virtual void SetAttack(int n) = 0;

	virtual int GetAttack() = 0;

	virtual void SetHP(int n) = 0;

	virtual int GetHP() = 0;
};