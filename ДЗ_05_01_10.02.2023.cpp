#include <iostream>
#include <string>
int main() {
  std::cout << "Задание 1\n\n";
  char sim;
  std::cout << "Введите символ \n";
  std::cin >> sim;
  int simInASCII = sim;
  if ((simInASCII>=65&&simInASCII<=90)||(simInASCII>=97&&simInASCII<=122)){
    std::cout<<"Вы ввели букву\n\n";
  }
  else if ((simInASCII>=33&&simInASCII<=47)||(simInASCII>=58&&simInASCII<=64)||(simInASCII>=91&&simInASCII<=96)||(simInASCII>=123&&simInASCII<=126)){
    std::cout<<"Вы ввели знак препинания\n\n";
  }
  else if (simInASCII>=48&&simInASCII<=57){
    std::cout<<"Вы ввели цифру\n\n";
  }
  std::cout << "Задание 2\n\n";
  int op1,op2;
  int t;
  std::cout<<"Введите длительность разговора\n";
  std::cin>>t;
  std::cout<<"\nВведите с какого и на какой оператор будете звонить\n1-МТС\n2-Билайн\n3-Теле2\n";
  std::cin>>op1>>op2;
  if (op1==op2){
    std::cout<<"Звонок бесплантый\n\n";
    }
  if ((op1==1&&op2==2)||(op2==1&&op1==2)){
  std::cout<<"Цена вашего разговора = "<<t*1<<" рублей\n\n";
  }
  else if ((op1==1&&op2==3)||(op2==1&&op1==3)){
  std::cout<<"Цена вашего разговора = "<<t*0.75<<" рублей\n\n";
  }
  else if ((op1==2&&op2==3)||(op2==2&&op1==3)){
  std::cout<<"Цена вашего разговора = "<<t*1.25<<" рублей\n\n";
  }
  std::cout << "Задание 3\n\n";
  int choise,str,l8,zp;
  std::cout<<"Выберете условия расчета\n1-Сколько строк кода нужно написать\n2-Сколько раз можно опаздать\n3-Сколько заплатят\n";
  std::cin>>choise;
  if (choise==1){
    std::cout<<"\n\nВведите желаемый доход\n";
    std::cin>>zp;
    std::cout<<"\nВведите количсетво опазданий\n";
    std::cin>>l8;
    std::cout<<"Васе нужно написать "<<(zp+l8*20)/50<<" строчек кода \n\n";
  }
  if (choise==2){
    std::cout<<"\n\nВведите количество строк кода\n";
    std::cin>>str;
    std::cout<<"\nВведите желаемую зарплату\n";
    std::cin>>zp;
    if ((str*50-zp)>0){
      std::cout<<"Васе можно опазадать "<<(str*50-zp)/20<<" раз \n\n";
    }
    else{
      std::cout<<"Васе нельзя опаздывать";
    }
  }
  if (choise==3){
    std::cout<<"\n\nВведите количество строк кода\n";
    std::cin>>str;
    std::cout<<"\nВведите количсетво опазданий\n";
    std::cin>>l8;
    if(str*50>l8*20){
      std::cout<<"Васе заплатят "<<str*50-l8*20;
    }
    if(str*50<l8*20){
      std::cout<<"Васе не только не заплатят, он еще и в долгу на "<<str*50-l8*20;
    }
    if(str*50==l8*20){
      std::cout<<"Вася в нуле";
    }
  }
}