#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char a[100];int n,i,j,k,flag=0;
    cin>>a;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='Q')
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]=='A')
                {
                    for(k=j+1;k<n;k++)
                    {
                        if(a[k]=='Q')
                        {
                            flag++;
                        }
                    }
                }
            }
        }
    }
    cout<<flag;
    return 0;
}
