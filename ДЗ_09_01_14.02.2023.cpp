#include <iostream>
#include <string>

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

  std::cout << "Задание 1\n\n";
  int arr1[10],arr2[5],arr3[5];
  full_rand(arr1, 10);
  for(int i=0;i<5;i++){
    arr2[i]=arr1[i];
    arr3[i]=arr1[i+5];
  }
  std::cout<<"Исходный массив: \n";
  print_arr(arr1, 10);
  std::cout<<"Первый массив: \n";
  print_arr(arr2, 5);
  std::cout<<"Второй массив: \n";
  print_arr(arr3, 5);
  std::cout<<"\n\nЗадание 2\n\n";
  int arr1_1[5],arr2_1[5],arr3_1[5];
  full_rand(arr1_1, 5);
  rand(arr2_1, 5);
  for(int i=0;i<5;i++){
    arr3_1[i]=arr1_1[i]+arr2_1[i];
  }
  std::cout<<"Первый массив: \n";
  print_arr(arr1_1, 5);
  std::cout<<"Второй массив: \n";
  print_arr(arr2_1, 5);
  std::cout<<"Сумма массивов: \n";
  print_arr(arr3_1, 5);
  std::cout<<"\n\nЗадание 3\n\n";
  int a=0,sred=0,sum=0,count=0,mass[7];
  const char *day[7]{"Monday","Tuesday","Wednesday  ","Thursday ","Friday  ","Saturday  ","Sunday  "};
  std::cout<<"Введите расходы за каждый день недели\n";
  for(int i=0;i<7;i++){
    std::cin>>a;
    sum=sum+a;
    if(a>100){
      count++;
      mass[i]=a;
    }
    }
  sred=sum/7;
  std::cout<<"Средняя потраченная сумма: "<<sred<<"\n";
  std::cout<<"За неделю вы потратили: "<<sum<<"\n";
  std::cout<<"Количсетво и название дней в которые вы потратили больше 100 долларов: "<<count<<"\n";
  for(int i=0;i<7;i++){
      if(mass[i]>100){
        std::cout<<day[i]<<"\n";
      }
    }
  std::cout<<"\n\nЗадание 4\n\n";
  double c[12], s[12], si[12], dep[12];
  int month, sumd = 1;
  for (int i = 0; i < 12; i++) {
    std::cout << "Введите курс доллара по отношению к евро в " << i + 1<< " месяц\n";
    std::cin >> c[i];
  }
  for (int i = 0; i < 12; i++) {
    std::cout << "Введите процент начисленного депозита в " << i + 1
              << " месяц\n ";
    std::cin >> dep[i];
  }
  for (int i = 0; i < 12; i++) {
    std::cout << "Введите сумму на депозитном счете в " << i + 1 << " месяц\n ";
    std::cin >> s[i];
  }
  for (int i = 0; i < 12; i++) {
    si[i] = s[i] * c[i] * dep[i] / 100;
  }
  std::cout << "Введите номер нужного месяца\n";
  std::cin >> month;
  month = month - 1;
  if (si[month] < 500) {
    std::cout << "Вы можете снять " << si[month] / 2 << "\n";
  } else {
    std::cout << "Вы можете снять " << si[month] << "\n";
  }
  
  }
