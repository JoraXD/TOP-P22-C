#include <iostream>
int main() {
  std::cout<<"Задание 1\n\n";
  int sec;
  std::cout<<"Введите время в секундах\n";
  std::cin>>sec;
  std::cout<<"Время в секундах "<<sec<<"\nВремя в минутах "<<sec/60<<"\nВремя в часах "<<sec/60/60<<"\n\n";
  std::cout<<"Задание 2\n\n";
  double a;
  std::cout<<"Введите дробное число \n";
  std::cin>>a;
  int dol=a;
  int ost=(a-dol)*100;
  std::cout<<dol<<" долларов "<<ost<<" центов" <<"\n\n";
  std::cout<<"Задание 3\n\n";
  int den;
  std::cout<<"Введите количсетво дней \n";
  std::cin>>den;
  int ned=den/7;
  int ost_den=den-7*ned;
  std::cout<<ned<<" недели и "<<ost_den<<" дня\n";
}
