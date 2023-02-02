#include <iostream>
int main() {
  std::cout << "Задание 1\n\n";
  int S, t;
  std::cout << "Введите время в часах,за которое нужно доехать \n";
  std::cin >> t;
  std::cout << "Введите расстояние в километрах до аэропорта \n";
  std::cin >> S;
  std::cout << "Вам нужно ехать со скоростью " << S / t << " км/ч \n\n";
  std::cout << "Задание 2\n\n";
  int Hour1, Hour2, Min1, Min2, Sec1, Sec2;
  std::cout<< "Введите время начала поездки в формате: \nЧасы Минуты Секунды\n";
  std::cin >> Hour1 >> Min1 >> Sec1;
  std::cout << "Введите время конца поездки в формате: \nЧасы Минуты Секунды\n";
  std::cin >> Hour2 >> Min2 >> Sec2;
  int nach = Hour1 * 60 + Min1 + Sec1 / 60;
  int end = Hour2 * 60 + Min2 + Sec2 / 60;
  int cost = (end - nach) * 2;
  std::cout << cost << " гривны \n\n";
  std::cout << "Задание 3\n\n";
  int ras, b1, b2, b3;
  std::cout << "Введите расход бензина на 100км \n";
  std::cin >> ras;
  std::cout << "Введите стоимость первого вида бензина \n";
  std::cin >> b1;
  std::cout << "Введите стоимость второго вида бензина \n";
  std::cin >> b2;
  std::cout << "Введите стоимость третьего вида бензина \n";
  std::cin >> b3;
  std::cout << "Вид бензина: \t\t1\t\t2\t\t3\n";
  std::cout << "Стоимость бензина: \t" << b1 << "\t\t" << b2 << "\t\t" << b3 << "\n";
  std::cout << "Стоимость поездки: \t" << b1 * ras << "\t" << b2 * ras << "\t" << b3 * ras << "\n";
}