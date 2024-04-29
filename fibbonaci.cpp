#include<iostream>
using namespace std;

int main()
{
    int fibo[20],i,j,a=0,b=1,n;
    cout << "enter n : ";
    cin >>n;

    fibo[0]=a;
    fibo[1]=b;

    for (i=2; i<n; i++)
    {
        fibo[i]=fibo[i-1] + fibo [i-2];
    }
    cout << "fibonaci series : "<<endl;

    for(i=0; i<n; i++)
    {
        cout << fibo[i] << "\t";
    }
    return 0;
}