//Програмата извежда колко пъти в масив се среща максималният му елемент
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while(n<2 || n>25) {cout<<"n = "; cin>>n;}

    double a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    double max=a[0];
    for(int j=1; j<n; j++)
    {
      if(a[j]>max){max=a[j];}
    }

    int br=0;
    for(int f=0; f<n; f++){if(a[f]==max)br++;}

    cout<<"br = "<<br;

    return 0;
}
