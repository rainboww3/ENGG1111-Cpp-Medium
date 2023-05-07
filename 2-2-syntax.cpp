#include <iostream>
using namespace std;
int main()
{
    int a,hours,min,sec;
    int convert ;
    cout<<"Please enter the number of seconds:";
    cin>>a;
    hours=a/3600;
    min=(a%3600)/60;
    convert = (a%3600);
    sec=(convert)%60;
    cout<<a<<" second(s) = "<<hours<<" hour(s) "<<min<<" minute(s) "<<sec<<" second(s)";


    return 0;
}
