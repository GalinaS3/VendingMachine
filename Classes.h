#pragma once
#include<iostream>
#include<string>

class Snack
{
	std::string _name;

public:	
	Snack(const std::string& name);
	~Snack();
};
//*********************
class SnackSlot
{
	int _slot=0;

public:
	SnackSlot(int slot);
	~SnackSlot();

	void addSnack(Snack* snack); 
	int GetEmptySnackSlot() const;
};
//*********************
class VendingMachine
{
	int _slotCount=0;

public:
	VendingMachine(int slotCount);
	~VendingMachine();

	void addSlot(SnackSlot* slot);
	int getEmptySlotsCount() const;
};