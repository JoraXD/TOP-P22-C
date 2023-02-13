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
  int arr[10],min=9999,max=-9999;
  full_rand(arr, 10);
  for(int i=0;i<10;i++){
    if(arr[i]<min){
      min=arr[i];
    }
    if(arr[i]>max){
      max=arr[i];
    }
  }
  print_arr(arr, 10);
  std::cout<<"Min: "<<min<<"\nMax: "<<max;
  std::cout<<"\n\nЗадание 2\n\n";
  int a,b,c,sum=0;
  std::cout<<"Введите диапазон массива\n";
  std::cin>>a>>b;
  int mas[10];
  srand(time(NULL));
  if (b>a){
    for (int i=0;i<10;i++){
      mas[i]=rand()%(b-a)+a;
    }
  }
  if (b<a){
    for (int i=0;i<10;i++){
      mas[i]=rand()%(a-b)+b;
    }
  }
  print_arr(mas, 10);
  std::cout<<"Введите число\n";
  std::cin>>c;
  for(int i=0;i<10;i++){
    if (mas[i]<c){
      sum+=mas[i];
    }
  }
  std::cout<<sum;
  std::cout<<"\n\nЗадание 3\n\n";
  int income1[12],incomeMax=0,incomeMin=0,a1,b1,maxi=-99999999,mini=9999999;
  const char *month[12]{"January ","February ","March ","April","May ","June ","July ","August ","September ","October","November","December "};
  std::cout<<"Введите доход фирмы за каждый месяц \n";
  for(int i=0;i<12;i++){
    std::cin>>income1[i];
  }
  std::cout<<"Введите с какого по порядку месяца начать поиск\n";
  std::cin>>a1;
  std::cout<<"Введите с какого по порядку месяца закончить начать поиск\n";
  std::cin>>b1;
  for(int i=a1-1;i<b1;i++){
    if (income1[i]>maxi){
      maxi=income1[i];
      incomeMax=i;
    }
    if (income1[i]<mini){
      mini=income1[i];
      incomeMin=i;
    }
  }
  std::cout<<"Минимальный доход: "<<month[incomeMin]<<"\n";
  std::cout<<"Максимальный доход: "<<month[incomeMax]<<"\n\n";
  std::cout<<"Задание 4\n\n";
int n,summ=0,mi=9999,ma=-9999,pr=1,prch=1,summl=0,f=0,l=0,maxx=0,minn=0;
  std::cout<<"Введите длину списка \n";
  std::cin>>n;
  int m[n],m1[n];
  full_rand(m, n);
  for(int i=0;i<n;i++){
    m1[i]=m[i];
    if(m[i]<0){
      summ+=m[i];
    }
    if(m[i]<mi){
      mi=m[i];
      minn=i;
    }
    if(m[i]>ma){
      maxx=i;
      ma=m[i];
    }
  }
  if (maxx>minn){
    if(maxx==minn+1){
      pr=0;
    }
    for (int i=minn+1; i<maxx; i++){
      pr*=m[i];
      }
    }
  else if(minn>maxx){
    if(maxx+1==minn){
      pr=0;
    }
    for (int i=maxx+1; i<minn; i++){
      pr*=m[i];
    }
    }
  for(int i=0;i<n;i++){
    if(m[i]<0){
      f=i;
      break;
    }
  }  
  for(int i=f+1;i<n;i++){
    if(m[i]<0){
      l=i;
    }
  }
  for(int i=f+1;i<l;i++){
      summl+=m[i];
    }
  for(int i=0;i<n;i+=2){
      prch*=m[i];
  }
  print_arr(m, n);
  std::cout<<"Сумма отрицательных: "<<summ;
  if(pr!=0){
    std::cout<<"\nПроизведение между min и max(Не включая сами эллементы!): "<<pr;
  }
  else if(pr==0){
    std::cout<<"\nПроизведение между min и max(Не включая сами эллементы!): Между эллементами нет чисел! ";
  }
  std::cout<<"\nПроизведение с четными индексами: "<<prch;
  std::cout<<"\nСумма между первым и последним отрицательным числом(Не включая сами эллементы!): "<<summl;
  }  