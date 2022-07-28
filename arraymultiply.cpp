#include <iostream>
using namespace std;

int *apply_all(int *a,int *b,int sa,int sb)
{
    int *ptr{};
    ptr=new int[sa*sb];
    int x;
    for(int i=0;i<sb;i++)
    {
        for(int j=0;j<sa;j++)
        {
            ptr[x]=a[j]*b[i];
            ++x;
        }
    }
    return ptr;
}
void print(int *a,int size)
{
    
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int a1[]={1,2,3,4,5};
    int a2[]={10,20,30};
    print(a1,5);
    print(a2,3);
    int *r=apply_all(a1,a2,5,3);
    print(r,15);
    delete[] r;
}