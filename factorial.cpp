#include<iostream>
using namespace std;
int is_factorial(int num){
    int fact=1;
    for(int i=num;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num1;
    cin>>num1;
    cout<<"enter the number you want to check for it's factorial "<<endl;
    cout<<"factorial of number "<<num1<<"is   "<<  is_factorial(num1);
    return 0;

}
