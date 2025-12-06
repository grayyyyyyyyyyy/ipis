#include <string>

// main - точка входа в программу
int
main()
{
  std::string name; // переменная для хранения имени пользователя

  // запрашиваем ввод от пользователя
  std::cout << "Enter your name: ";
  std::cin >> name; // читаем ввод пользователя

  // выводим приветственное сообщение
  std::cout << "Hello world from " << name << std::endl;

  return 0; // сигнал об успешном выполнении программы
}
