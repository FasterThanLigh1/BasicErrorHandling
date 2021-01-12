#include <iostream>
#include <vector>
using namespace std;
void error(string s)
{
    throw runtime_error(s);
}
void error(string s1,string s2)
{
    throw runtime_error(s1+s2);
}

int main()
{//Examples
    try{
        int a;
        cin>>a;
        if(a<0)
        {
            cout<<a;
        }else
        {
            error("something"," wrong");
        }
        return 0;
    }
    catch(exception& e)
    {
        cerr<<"error :"<<e.what()<<'\n';
        return -1;
    }

}
