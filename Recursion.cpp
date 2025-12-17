#include<iostream>
using namespace std;
//Print number from n to 1
void printNumber(int n ){
    if(n == 1){
        cout<<"1";
        return ;
    }
    cout<<n<<" ";
    printNumber(n-1);
}
//factorial of n
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);

}
//sum of n
int sum(int n){
    if(n==1){
        return 1;
    }
    return n + sum(n-1);

}

int main(){
  printNumber(4);
  cout<<" " << endl;
  cout<<factorial(4)<<endl;
  cout<<sum(4)<<endl;
  
}