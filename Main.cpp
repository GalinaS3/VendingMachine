
#include"Classes.h"

int main() {
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(20/*slotCount /*���������� ������ ��� ������*/);
	machine->addSlot(slot); // �������� ���� ������� � �������
	
	std::cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	return 0;
}