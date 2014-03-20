#include<iostream>
using namespace std;
void insertion_sort(int x[],int length)
{ int key,i;
  {for(int j=1;j<length;j++)
    {     key=x[j];
         i=j-1;
              while(x[i]>key && i>=0)
              x[i+1]=x[i];
              i--;
    }
              x[i+1]=key;
  }
}
int main()
{
    int a,b,f;
    cin>>a;
    for(;a>0;a--)
    {
        cin>>b;
        cout<<endl;
        f=b;
        int c[b],d[b],e=0;
        for(;f>0;f--)
        {
            cin>>d[f];
        }
        insertion_sort(d,b);
        cout<<endl;
        for(;b>=f;f++)
        {
            cin>>c[f];
        }
        insertion_sort(c,b);
        for(;b>0;b--)
        {
            e=e+c[b]*d[b];
        }
        cout<<endl<<e;
    }
}
