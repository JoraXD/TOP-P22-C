#include <iostream>
int main() {
  std::cout<<"Задание 1\n\n";
  double r0;
  double r1,r2,r3;
  std::cout<<"Введите R1\n";
  std::cin>>r1;
  std::cout<<"Введите R2\n";
  std::cin>>r2;
  std::cout<<"Введите R3\n";
  std::cin>>r3;
  r0=1/r1+1/r2+1/r3;
  std::cout<<"R0= "<<r0<<"\n\n";
  std::cout<<"Задание 2\n\n";
  int l;
  std::cout<<"Введите длину окружности\n";
  std::cin>>l;
  double r=l/2/3.14;
  double s=3.14*r*r;
  std::cout<<"Площадь круга равна "<<s<<"\n\n";
  std::cout<<"Задание 3\n\n";
  int v,t,a;
  std::cout<<"Введите скорость\n";
  std::cin>>v;
  std::cout<<"Введите время\n";
  std::cin>>t;
  std::cout<<"Введите ускорение\n";
  std::cin>>a;
  int s1=v*t+(a*t*t)/2;
  std::cout<<"Вы прошли "<<s1<<"\n\n";
}