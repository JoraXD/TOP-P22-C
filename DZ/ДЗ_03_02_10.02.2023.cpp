#include <iostream>
int main() {
  std::cout << "Задание 1\n\n";
  int sIn, s1,s2,m1,m2,h1,h2,sOut;
  std::cout << "Введите сколько секунд прошло с начала дня \n";
  std::cin >> sIn;
  h1=sIn/3600;
  m1=(sIn-h1*3600)/60;
  s1=sIn-h1*3600-m1*60;
  std::cout<<"Время на данный момент -\n"<<h1<<":"<<m1<<":"<<s1<<" ";
  sOut=24*60*60-sIn;
  h2=sOut/3600;
  m2=(sOut-h2*3600)/60;
  s2=sOut-h2*3600-m2*60;
  std::cout<<"\nВремя до полуночи -\n"<<h2<<":"<<m2<<":"<<s2<<"\n\n";
  std::cout << "Задание 2\n\n";
  int sIn1,hOut;
  std::cout << "Введите сколько секунд прошло с начала рабочего дня \n";
  std::cin >> sIn1;
  hOut=(8*3600-sIn1)/3600;
  std::cout<<"До конца рабочего дня осталось "<<hOut<<" полных часов";
}