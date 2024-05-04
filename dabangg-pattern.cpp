#include<iostream>
using namespace std;

// Dabangg pattern : 1 2 3 4 5 5 4 3 2 1
//                   1 2 3 4 * * 4 3 2 1
//                   1 2 3 * * * * 3 2 1
//                   1 2 * * * * * * 2 1
//                   1 * * * * * * * * 1

int main()
{
    int i=1,j,n,s,t;
    cout << "enter n : ";
    cin >>n;

    while (i<=n)
    {
        //first triangle
        j=1;
        while (j<=(n-i)+1)
        {
            cout << j;
            j++;
        }

        //second triangle
        s=1;
        while (s<i)
        {
            cout << "**";
            s++;
        }

        //third triangle
        t =1;
        int start = (n-i)+1;
        while (t<=(n-i)+1)
        {
            cout << start;
            t++;
            start--;
        }

        i++;
        cout << endl;
    }
    return 0;
}