#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    double total;
    vector <double> temperature{45.6,76.8,65.8,90.7};
    for(auto temp:temperature)
    {
        total=total+temp;
    }
    double avg=total/temperature.size();
    cout<<fixed<<setprecision(1);
    cout<<avg;
}