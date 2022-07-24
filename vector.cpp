#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <char> vowels{'a','e','i','o','u'};
    cout<<vowels[0];
    cout<<vowels.at(1)<<endl;
    cout<<vowels.size()<<endl;
    vowels.push_back('f');
    cout<<vowels.at(5);
}
