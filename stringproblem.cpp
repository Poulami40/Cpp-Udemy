#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string enc,dec;
    int f;
    cout <<"Enter string";
    getline(cin,enc);
    for(auto c:enc)
    {
        f=alphabet.find(c);
        if(f!=0)
        {
        char nc=key.at(f);
        dec=dec+nc;
        }
        else
        dec=dec+c;
    }
    
    cout<<dec;
}