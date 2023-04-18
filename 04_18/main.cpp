#include <iostream>
#include <string>

class Animal{
    private:
        std::string name;
    public:
        Animal(std::string name):name(name){
            std::cout<<"Name: "<<name<<"\n";
        }
        Animal():Animal("Pet"){}
        virtual void voice(){
            std::cout<<"Some sound\n";
        }
        void sayHi(std::string mess){
            std::cout<<"U say "<<mess<<" to "<<this->name<<"\n";
        }
        ~Animal(){
            std::cout<<"Animal gone\n";
        }
};
class Dog:public Animal{
    public:
        void voice(){
            std::cout<<"Wof Wof\n";
        }
        Dog(std::string name):Animal(name){
            std::cout<<"Dog's name: "<<name<<"\n";
        }
        Dog():Animal(){}
        ~Dog(){
            std::cout<<"Dog Has Gone\n";
        }
};
class Cat:public Animal{
    public:
        void voice(){
            std::cout<<"Mew Mew\n";
        }
        
        Cat(std::string name):Animal(name){
            std::cout<<"Cat's name: "<<name<<"\n";
        }
        Cat():Animal(){}
        ~Cat(){
            std::cout<<"Cat Has Gone\n";
        }
};
class PrimeDog:public Dog{
    private:
        std::string por="Mops";
        int price=20000;
    public:
        void doComand(){
            std::cout<<" Сидеть\n";
        }
        void showSpire(){
            std::cout<<"Порода:"<<this->por<<"\nPrice:"<<this->price<<"\n";
        }
        PrimeDog(std::string name):Dog(name){
            std::cout<<"Prime dog's name:"<<name<<"\n";
        }
        PrimeDog():Dog(){}
        PrimeDog(std::string por,int price):por(por),price(price){}
        
        ~PrimeDog(){
            std::cout<<"Prime dog has gone\n";
        }

};
void saySmth( Animal &animal){
    animal.voice();
    animal.sayHi("hI");
}
int main(){
    PrimeDog some_pr("pigl",10000);
    some_pr.showSpire();
    some_pr.doComand();
    some_pr.voice();
    return 0;
}