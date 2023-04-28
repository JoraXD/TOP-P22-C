#include <iostream>
#include <vector>
#include <list>
#include <string>
class Sale{
    private:
        int summ;
        std::string date;
        std::string name;
    public:
        void print_info(){
            std::cout<<"Покупатель "<<name<<"\n";
            std::cout<<"Сумма покупок "<<summ<<"\n";
            std::cout<<"Дата "<<date<<"\n";
        }
        Sale(std::string name):name(name){
            std::cout<<"Покупатель "<<name;
        }
        Sale(std::string name,int summ,std::string date){
            std::cout<<"Есть полная информация по покупателю!\n";
        }
        Sale():Sale("New buyer"){
            summ=0;
            date="28.04.2023";
        }
};
class Data{
    public:
        virtual void insert(){
        }
        virtual void erase(){
        }
};
class DataArray:public Sale,public Data{
    private:
        
        std::string name[];

};