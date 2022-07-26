#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s{};

    cout << "Enter a string";
    getline(cin,s);

    int l = s.length();

    int p {0};
    for (char c: s) 
    {
        int ns = l - p;
        while (ns > 0) {
            std::cout << " ";
            --ns;
        }
        for (int j=0; j < p; j++) 
            cout << s.at(j);
        cout << c;
        for (int j=p-1; j >=0; --j) {
            cout << s.at(j);
        }

        cout << endl;
        ++p;
    }

    return 0;
}