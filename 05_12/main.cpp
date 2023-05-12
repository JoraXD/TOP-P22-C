#include <iostream>
unsigned int hotpo(unsigned int n){
  int count=0;
    if(n==1){
      return 0;
    }
  while(n!=1){
    if(n%2==0){
      n=n/2;
      count++;
    }
    if(n%2!=0){
      n=n*3+1;
      count++;
    }
    }
    if(n == 0){ return 0;} 
    std::cout<<count;
    return count;
}
int main(){
    hotpo(5);
    return 0;
}