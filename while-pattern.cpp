#include <iostream>
using namespace std;

// pattern : 1
//           2 3
//           3 4 5
//           4 5 6 7

int main()
{
    int n,i=1,j=1,c=1;
    cout << "enter n : ";
    cin >>n;

    cout << "the pattern : "<<endl;
    while (i<=n)
    {  
        j=1;
        while (j<=i)                  
        {
            cout << c << " ";
            c++;
            j++;
        }
        c=c-i+1;
        i++;
        cout << endl;
    }
    return 0;
}  