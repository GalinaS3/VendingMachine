
#include"Classes.h"

int main() {
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаютс€ в слот*/);
	slot->addSnack(bounty); //ƒобавл€ем батончик в слот
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(20/*slotCount /* оличество слотов дл€ снеков*/);
	machine->addSlot(slot); // ѕомещаем слот обратно в аппарат
	
	std::cout << machine->getEmptySlotsCount(); // ƒолжно выводить количество пустых слотов дл€ снеков
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	return 0;
}