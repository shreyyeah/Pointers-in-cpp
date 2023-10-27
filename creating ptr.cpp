//22070123114
//creating pointer-exp 9
# include <iostream>
using namespace std;

int main() 
{
    int a=10;
    int *ptr;/*Creating a pointer*/
    ptr=&a;
    cout<<a<<endl;
    cout<<&a<<endl;/*address of the variable*/
    *ptr=20;/*Changing the value of the variable on the same address*/
    cout<<a<<endl;
    cout<<&a;
}