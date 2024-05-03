#include<iostream>
using namespace std;

//pattern : 1 2 3 4
//            2 3 4
//              3 4
//                4

int main()
{
    int i=1,j,n,s,c;
    cout << "enter n : ";
    cin >>n;

    while (i<=n)
    {
        s=1;
        while (s<i)
        {
            cout << " ";
            s++;
        }

        j=1;
        c=s;
        while (j<=(n-i)+1)
        {
            //cout << "*";
            //cout << i ;
            cout << c;
            c++;
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}
