#pragma once
class Unit
{
public:
	Unit();
	virtual ~Unit();

	virtual void Attack(Unit* pUnitToAttack);
	virtual void TakeDamage(Unit* pUnitAttacking, int nHealth);

};

