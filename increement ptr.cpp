//22070123114
# include <iostream>
using namespace std;

int main() 
{
    float a=10;
    float *ptr;
   //increment of address of float data type
    ptr=&a;
    cout<<"Before increment:"<<&a<<endl;
    ptr++; //gets incremented by 4-bits
    cout<<"After increment:"<<ptr<<endl;
   //increment of address of char data type
    char b;
    char *pt;
    pt=&b;
    cout<<"Before increment:"<<(void*)pt<<endl;
    pt++;//gets incremented by 1-bit
    cout<<"After increment:"<<(void*)pt;
}