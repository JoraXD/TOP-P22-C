#include <iostream>
#include <random>
#include <vector>
void first(int arr[],int size){
    int summ=0;
    for(int i=0;i<size;i++){
        summ=arr[i]+summ;
    }
    std::cout<<summ<<"\n";
}
void second(int arr[],int size){
    int max=-999;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    std::cout<<max<<"\n";
}
void third(int arr1[],int arr2[],int size1,int size2){
    int size=size1+size2;
    int arr[size];
    for(int i=0;i<size1;++i){
        arr[i]=arr1[i];
    }
    for(int i=0;i<size2;++i){
        arr[size1+i]=arr2[i];
    }
    for(int i=0;i<size;++i){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}
void fourth(int x,int y,int arr[3][3]){
    int sum=0;
    for(int i=0;i<y;++i){
        for(int j=0;j<x;++j){
            sum=sum+arr[i][j];
        }
    }
    std::cout<<sum<<"\n";
}
void fith(int arr[],int size){
    int sum=0;
    int sred=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    sred=sum/size;
    std::cout<<sred<<"\n";
}
void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}
void print_mat(int x,int y,std::vector **arr){
    for(int i=0;i<y;++i){
        for(int j=0;j<x;++j){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}
void random(int arr[],int size){
    for(int i=0;i<size;++i){
        arr[i]=rand()%100-50;
    }
}
void full_rand(int arr[],int size){
    srand(time(NULL));
    for(int i=0;i<size;i++){
        arr[i]=rand()%100-50;
    }
}
int main(){
    int size=7;
    int arr[size];
    int arr1[size];
    int matrex [3][3]{{1,2,3},{4,5,6},{7,8,9}};
    full_rand(arr,7);
    random(arr1,7);
    print_arr(arr,7);
    print_arr(arr1,7);
    print_mat(3,3,matrex);
    first(arr,7);
    second(arr,7);
    third(arr,arr1,7,7);
    fourth(3,3,matrex);    
    fith(arr,7);
}