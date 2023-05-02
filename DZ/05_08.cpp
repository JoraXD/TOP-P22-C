#include <iostream>
int min(int a,int b,int c,int d) {
    if(a>b&a>c&a>d){
        return a;
    }
    if(b>a&b>c&b>d){
        return b;
    }
    if(c>b&c>a&c>d){
        return c;
    }
    if(d>b&d>c&d>a){
        return d;
    }
}
int main(){
    int a,b,c,d;
    std::cin>>a>>b>>c>>d;
    min(a,b,c,d);
}