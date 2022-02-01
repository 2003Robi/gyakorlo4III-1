#include <iostream>

using namespace std;
int joc(int n)
{
    int i,d,k=0;
    for(d=2 ; d<=n ; d++)
        if(n%d==0)
        k++;

    return k;
}
int main()
{
    cout << joc(12) << endl;
    return 0;
}
