//22070123114
# include <iostream>
using namespace std;

void inc(int *a)
{ ++*a;}

int main() 
{
   int a=2;
   inc(&a);
   cout<<"Incremented value:"<<a<<endl;
}
