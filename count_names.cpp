//This program counts number of distinct names 
// And display the frequency of it using map
#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int main()
{
    map<string,int> m;
    string name;
    map<string,int>::iterator itr;
    int key=1;
    char ch='y';
    while(ch!='n')
    {
        cin>>name;
        if(m.find(name)==m.end())
        {
            m.insert({name,key});
        }
        else
        {
            itr=m.find(name);
            (itr->second)++; 

        }
        cin>>ch;

    }
    cout<<" Number of distinct names is "<<m.size()<<endl;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<"\t"<<itr->second<<endl;
    }

    return 0;
}
