#include <iostream>
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
        size=size-1;
        for(int i=ind;i<size;++i){
            arr[i]=arr[i+1];
        }
        std::cout<<size<<"\n";
    }
}
void print_mass(int arr[],int &size){
    for(int i=0;i<size;++i){
        std::cout<<arr[i]<<" ";
    
    }
     std::cout<<size<<"\n";
    std::cout<<"\n";
    }
    void add(int arr[],int &size,int cap){
    size=size+1;
    int ell;
    std::cout<<"Введите эллемент\n";
    std::cin>>ell;
    if(size>cap){
        throw "Arr error";
    }
        arr[size-1]=ell;
    
}
    int main(){
    const int cap=15;
    int arr[cap]={1,2,3,4,5};
    int size=5;
    print_mass(arr,size);
    add(arr,size,cap);
    print_mass(arr,size);
}