# VendingMachine
Мы предлагаем вам написать некоторый функционал для вендинговой машины (торговый автомат, со снеками (англ. snack — «лёгкая закуска») или чем-то еще), используя изученный материал.
Главным требованием является возможность использования классов следующим образом:

int main(){
  Snack *bounty = new Snack("Bounty");
  Snack *snickers = new Snack("Snickers");
  SnackSlot *slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
  slot->addSnack(bounty); //Добавляем батончик в слот
  slot->addSnack(snickers); 
  VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
  machine->addSlot(slot); // Помещаем слот обратно в аппарат
 
  cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
  delete machine;
  delete slot;
  delete snickers;
  delete bounty;
}
