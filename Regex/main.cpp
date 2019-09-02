#include<iostream>
#include<string>
#include <regex>

using namespace std;

int main()
{
    string input;
    string validstr = "-[[:alnum:]]+[a-zA-Z][[:alnum]]+";

    cout<<"Enter String to validate: "<<endl;
    cin>>input;
    regex re(validstr);

    if(regex_match(input,re)){
        cout<<"Matched"<<endl;
    }
    return 0;
}
