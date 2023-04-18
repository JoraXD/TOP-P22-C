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
  int c=0;
  for(int i=100;i<1000;i++){
    if(((i/10/10==i/10%10) && (i/10/10!=i%10) && (i/10%10!=i%10))
      ||((i/10/10!=i/10%10) && (i/10/10==i%10) && (i/10%10!=i%10))
      ||((i/10/10!=i/10%10) && (i/10/10!=i%10) && (i/10%10==i%10))){
      c++;
    }
  }
  std::cout<<"Числа у которых две одинаковые цифры: "<<c<<"\n\n";
  std::cout<<"Задание 2\n";
  int count=0;
  for(int i=100;i<1000;i++){
    if(i/100!=i%100/10 and i/100!=i%10%10 and i%100/10!=i%10%10){
      count++;
    }
  }
  std::cout<<"Числа у которых все цифры разные: "<<count<<"\n\n";
  std::cout<<"Задание 3\n";
  int num,r=0,numF=0,count1=0;
  std::cout<<"Введите целое число\n";
  std::cin>>num;
  while (num > 0){
    r = num%10;
    if (r!= 3 && r!=6){
      numF=numF+r*pow(10,count1);
      count1++;
    }
    num=num/10;
 }
  std::cout<<"Конечное сисло\n"<<numF;
  std::cout<<"\n\nЗадание 4\n";
  int input,counter=0;
  std::cout<<"Введите число\n";
  std::cin>>input;
  for(int i=1;i<=input;i++){
    if(input%(i*i)==0&&input%(i*i*i)!=0){
      std::cout<<i<<" ";
      counter++;
    }
  }
  if(counter==0){
    std::cout<<"Таких чисел нет";
  }
  std::cout<<"\n\nЗадание 5\n";
  int a,sum=0;
  std::cout<<"Введите число\n";
  std::cin>>a;
  int a1=a;
  while (a1>0){
    sum=sum+a1%10;
    a1=a1/10;
  }
  if(sum*sum*sum==a*a){
    std::cout<<"Куб суммы цифр числа равен квадрату этого числа\n\n";
  }
  else{
    std::cout<<"Куб суммы цифр числа не равен квадрату этого числа\n\n";
  }
  std::cout<<"Задание 6\n";
  int num1;
  std::cout<<"Введите число\n";
  std::cin>>num1;
  for(int i=1;i<=num1;i++){
    if(num1%i==0){
      std::cout<<i<<" ";
    }
  }
  std::cout<<"\n\nЗадание 7\n";
  int j,j1;
  std::cout<<"Введите число \n";
  std::cin>>j;
  std::cout<<"Введите еще одно число\n";
  std::cin>>j1;
  if(j>=j1){
    for(int i=1;i<=j1;i++){
    if(j1%i==0&&j%i==0){
      std::cout<<i<<" ";
    }
  }
  }
  else{
    for(int i=1;i<=j;i++){
    if(j1%i==0&&j%i==0){
      std::cout<<i<<" ";
    }
  }
  }
}