#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string st;
    cout<<"Enter string : ";
    getline(cin,st);
    reverse(st.begin(), st.end());
    cout<<"reversed string : "<<st;
    return 0;
}
