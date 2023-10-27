//call by value and ref
#include<iostream>
using namespace std;
void change(int data)  
{  
data = 5;  
}  
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()  
{  
 //Call by value   
int data = 3;  
change(data);  
cout << "Value of the data is: " << data<< endl;  
//Call by reference

    int a=500;
    int b=100;
    swap(&a,&b);
    cout<<"Value of a is:"<<a<<endl;
    cout<<"Value of b is:"<<b<<endl;
    return 0;
}