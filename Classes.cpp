#include"Classes.h"
#include<string>

Snack::Snack(const std::string& name) : _name(name) {}
Snack::~Snack() = default;

//**********************
SnackSlot::SnackSlot(int slot) : _slot(slot) {}
SnackSlot::~SnackSlot() = default;

void SnackSlot::addSnack(Snack* snack) {
	if (_slot != 0) { _slot--; }
	else { std::cout << "слоты заполнены" << std::endl; }
}
int SnackSlot::GetEmptySnackSlot() const { return 10 - _slot; }

//**************************
VendingMachine::VendingMachine(int slotCount) : _slotCount(slotCount) {}
VendingMachine::~VendingMachine() = default;

void VendingMachine::addSlot(SnackSlot* slot) //если считать все слоты машины пока пустыми
{
	if (_slotCount != 0) { _slotCount = _slotCount - slot->GetEmptySnackSlot(); }
	else { std::cout << "машина заполнена" << std::endl; }

}
int VendingMachine::getEmptySlotsCount() const { return _slotCount; }
