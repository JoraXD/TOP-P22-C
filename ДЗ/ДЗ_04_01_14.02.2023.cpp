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
  int num;
  std::cout<<"Введите число\n";
  std::cin>>num;
  if(num/100000>0 and num/1000000==0){
    if((num/100000+num%100000/10000+num%10000/1000)==(num%1000/100+num%100/10+num%10)){
      std::cout<<"Ваше число счастливое!\n\n";
    }
    else{
      std::cout<<"Ваше число не счастливое :(\n\n";
    }
  }
  else{
    std::cout<<"Вы ввели не шестизначное число!\n\n";
  }
  std::cout<<"Задание 2\n";
  int num1;
  std::cout<<"Введите число\n";
  std::cin>>num1;
  if(num1/1000>0 and num1/10000==0){
    std::cout<<num1%1000/100<<num1/1000<<num1%10<<num1%100/10;
  }
  else{
    std::cout<<"Вы ввели не четырехзначное число!";
  }
  std::cout<<"\n\nЗадание 3\n";
  int a[7]{},max=-99999;
  for(int i=0;i<7;i++){
    std::cout<<"Введите "<<i+1<<"-ое число\n";
    std::cin>>a[i];
  }
  for(int i=0;i<7;i++){
    if(a[i]>max){
      max=a[i];
    }
  }
  std::cout<<max;
  std::cout<<"\n\nЗадание 4\n";
  int S,S2,m,min=0,AB=0,BC=0;
  std::cout<<"Введите растояние от А до Б\n";
  std::cin>>S;
  std::cout<<"Введите растояние от Б до С\n";
  std::cin>>S2;
  std::cout<<"Введите массу груза\n";
  std::cin>>m;
  
  if(m<500){
    AB=S*1;
    BC=S2*1;
    if(AB>300 or BC>300){
      std::cout<<"Осуществить полет невозможно";
    }  
    else if((300-AB)>S2){
      std::cout<<"Дозапрвка не требуется\n";
    }
    else{
      min=BC-300+AB;
      std::cout<<"Минимальная дозаправка: "<<min;
    }
  }
  if(m>500 and m<1000){
    AB=S*4;
    BC=S2*4;
    if((300-AB)>S2){
      std::cout<<"Дозапрвка не требуется\n";
    }
    else if(AB>300 or BC>300){
      std::cout<<"Осуществить полет невозможно\n";
    }
    else{
      min=BC-300+AB;
      std::cout<<"Минимальная дозаправка: "<<min;
    }
  }
  if(m>1000  and m<1500){
    AB=S*7;
    BC=S2*7;
    if(AB>300 or BC>300){
      std::cout<<"Осуществить полет невозможно";
    }
    else if((300-AB)>S2){
      std::cout<<"Дозапрвка не требуется\n";
    }
    else{
      min=BC-300+AB;
      std::cout<<"Минимальная дозаправка: "<<min;
    }
  }
  if(m>1500 and m<2000){
    AB=S*9;
    BC=S2*9;
    if(AB>300 or BC>300){
      std::cout<<"Осуществить полет невозможно";
    }
    else if((300-AB)>S2){
      std::cout<<"Дозапрвка не требуется\n";
    }
    else{
      min=BC-300+AB;
      std::cout<<"Минимальная дозаправка: "<<min;
    }
  }
  if(m>2000){
    std::cout<<"Вес груза слишком большой";
  }
}