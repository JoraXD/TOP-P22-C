#include <iostream>
#include <string>
#include <cmath>
void print_arr(int arr[], int a) {
    for (int i=0;i<a;i++){
        std::cout << arr[i] << "\t";
    }
    std::cout << "\n";
  }

void full_rand(int arr[],int a){
  srand(time(NULL));
  for (int i=0;i<a;i++){
      arr[i]=rand()%100-50;
    }
  }
void rand(int arr[],int a){
  srand(rand());
  for (int i=0;i<a;i++){
      arr[i]=rand()%100-50;
    }
  }
int main() {
  std::cout<<"Задание 1\n";
  int num,sum=0;
  std::cout<<"Введите число\n";
  std::cin>>num;
  for(int i=num;i<=500;i++){
    sum+=i;
    }
  std::cout<<"Сумма чисел от "<<num<<" до 500: \n"<<sum;
  std::cout<<"\n\nЗадание 2\n";
  int x,y,xVy=1;
  std::cout<<"Введите число \n";
  std::cin>>x;
  std::cout<<"Введите еще одно число\n";
  std::cin>>y;
  for(int i=0;i<y;i++){
    xVy*=x;
  }
  std::cout<<xVy;
  std::cout<<"\n\nЗадание 3\n";
  float summ=0,sred;
  for (int i=1;i<=1000;i++){
    summ+=i;
  }
  sred=summ/1000;
  std::cout<<sred;
  std::cout<<"\n\nЗадание 4\n";
  int num1,pr=1;
  std::cout<<"Введите число \n";
  std::cin>>num1;
  if(1<=num1&&num1<=20){
    for(int i=num1;i<=20;i++){
      pr*=i;
    }
  }
  else{
    std::cout<<"Число должно быть в диапазоне от 1 до 20";
  }
  std::cout<<pr;
  std::cout<<"\n\nЗадание 5\n";
  int var;
  std::cout<<"Введите номер варианта \n";
  std::cin>>var;
  for(int i=1;i<=10;i++){
    std::cout<<var<<" * "<<i<<" = "<<var*i<<"\n";
  }
  }