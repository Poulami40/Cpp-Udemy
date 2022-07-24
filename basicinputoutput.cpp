#include <iostream>
using namespace std;
int main()
{
    int s,l,cost,tax;
    cout << "Enter number of small and large rooms\n";
    cin >> s >> l;
    cout << "\nEstimate for carpet cleaning service";
    cout<<"No of small rooms:"<<s<<endl;
    cout<<"No of large rooms:"<<l<<endl;
    cout<<"Price per small room:$"<<25<<endl;
    cout<<"Price per large room:$"<<35<<endl;
    cost=(25*s)+(35*l);
    cout<<"Cost:$"<<cost<<endl;
    tax=0.06*cost;
    cout<<"Tax:$"<<tax<<endl;
    cout<<"============================="<<endl;
    cout<<"Total estimate:$"<<tax<<endl;
    cout<<"This estimate is valid for 30 days";
}
