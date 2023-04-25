#include <iostream>
void print_mass(int arr[],int size){
    for(int i=0;i<size;++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}
void find_ell(int arr[],int size){
    bool flag=false;
    int ell;
    std::cout<<"Введите эллемент\n";
    std::cin>>ell;
    for(int i=0;i<size;++i){
        if(arr[i]==ell){
            std::cout<<"Нужный еллемент имеет индекс "<<i<<"\n";
            flag=true;
        }
    }
    if(flag==false){
        throw"No ell in arr!";
    }
}
void del_ell_by_ell(int arr[],int &size){
    bool flag=false;
    int ind=0;
    int ell;
    std::cout<<"Введите эллемент\n";
    std::cin>>ell;
    for(int i=0;i<size;++i){
        if(arr[i]==ell){
            flag=true;
            ind=i;
        }
    }
    if(flag==false){
        throw"No ell in arr!";
    }
    if(flag==true){  
        for(int i=ind;i<size;++i){
            arr[i]=arr[i+1];
        }
        size=size-1;
    }
}
void add(int arr[],int &size,int cap){
    int ell;
    std::cout<<"Введите эллемент\n";
    std::cin>>ell;
    if(size+1>cap){
        throw "Arr error";
    }
    else{
        size=size+1;
        arr[size-1]=ell;
    }
}
void del_ell_by_ind(int arr[],int &size){
    int ind;
    std::cout<<"Введите индекс\n";
    std::cin>>ind;
    if(ind>size-1){
        throw "Arr error";
    }
        for(int i=ind;i<size;++i){
            arr[i]=arr[i+1];
        }
        size=size-1;
    }
int main(){
    const int cap=15;
    int arr[cap]={1,2,3,4,5};
    int size=5;
    int choise=0;
    while(choise!=-1){
    std::cout<<"Выберите команду\n";
    std::cout<<"1. Вывод массива\n";
    std::cout<<"2. Поиск эллемента\n";
    std::cout<<"3. Удаление эллемента по значению\n";
    std::cout<<"4. Добавление эллемента\n";
    std::cout<<"5. Удаление эллемента по индексу\n";
    std::cout<<"-1. Выход\n";
    std::cin>>choise;
    try{
    if(choise==1){
        print_mass(arr,size);
        }
    if(choise==2){
            find_ell(arr,size);
    }
    if(choise==3){
        del_ell_by_ell(arr,size);
    }
    if(choise==4){
        add(arr,size,cap);
    }
    if(choise==5){
        del_ell_by_ind(arr,size);
    
    }
    if(choise==-1){
        std::cout<<"Досвидания!\n";
        break;
    }
    else{
        std::cout<<"";
    }
    }
    catch(const char *error){
        std::cout<<error<<"\n";
    }
    catch(...){
        std::cout<<"Error\n";
    }
    }
}
    
