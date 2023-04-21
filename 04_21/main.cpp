#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ios>
void input_int(){
    int n;
    std::ifstream test("test.txt");
    test>>n;
    std::cout<<n<<"\n";
}   
void output_int(){
    int n=64;
    std::ofstream test("test.txt",std::ios::app);
    test<<"\n"<<n;
}
void readln(const std::string &filename){
    int n;
    std::ifstream fin(filename);
    std::string ln;
    std::getline(fin,ln);
    std::cout<<ln<<"\n";
    fin>>n;
    std::cout<<n<<"\n";
}   

void print_file(const std::string &filename){
    std::fstream fin(filename);
    if(! fin.good()){
        std::cout<<"file error";
        return;
    }

     while(! fin.eof()){
        std::string ln;
        std::getline(fin,ln);
        std::cout<<ln<<"\n";
    }
}
void add_out_rect(std::ostream &out){
    for(int i=0;i<5;++i){
        for (int j=0;j<5;++j){
            out<<"0";
        }
        out<<"\n";
    }
}
void copy_file(const std::string &filename){
    std::fstream fin(filename);
    std::ofstream fout("text_copy.txt");
    while(! fin.eof()){
        std::string ln;
        std::getline(fin,ln);
        fout<<ln<<"\n";
    }

}
void in_out(std::istream &in,std::ostream &out){

    //in>>out;
}
void in_from_cons(const std::string &filename){
    std::string ln;
    std::getline(std::cin,ln);
    std::getline(std::cin,ln);
    std::ofstream fout(filename,std::ios::app);
    fout<<"\n"<<ln;
}
int main(){
   int choise;
   std::cout<<"1. Чтение файла\n2.Создание копии файла\n3.Добавить в файл строку с консоли\n";
   std::cin>>choise;
   while (choise!=4){
    if (choise==1){
        print_file("test.txt");
        std::cout<<"1. Чтение файла\n2.Создание копии файла\n3.Добавить в файл строку с консоли\n";
        std::cin>>choise;
    }
    else if(choise==2){
        copy_file("test.txt");
        std::cout<<"1. Чтение файла\n2.Создание копии файла\n3.Добавить в файл строку с консоли\n";
        std::cin>>choise;
    }
    else if(choise==3){
        in_from_cons("test.txt");
        std::cout<<"1. Чтение файла\n2.Создание копии файла\n3.Добавить в файл строку с консоли\n";
        std::cin>>choise;
    }
    else{
        std::cout<<"1. Чтение файла\n2.Создание копии файла\n3.Добавить в файл строку с консоли\n";
        std::cin>>choise;
    }
   }
}