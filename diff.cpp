#include <iostream>

using namespace std;

int main()
{

    int a,b;

    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    int dif=(a>b)?(a-b):(b-a);
    cout<<"Difference is "<<dif<<endl;

    return 0;
}