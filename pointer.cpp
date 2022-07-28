#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    cout<<"value of x and y\n";
    cin>>x>>y;
    swap(&x,&y);
    cout<<"New value="<<x<<" "<<y;
}