#include<bits/stdc++.h>
using namespace std;

void display(list<int> &ls)
{
    for(auto it: ls)
    cout<<it<<" ";
    cout<<endl;
}

void lists_in_cpp()
{
    list<int> ls;
    ls.push_back(30);
    ls.push_back(40);

    display(ls);
    ls.emplace_back(90);
    ls.emplace_back(100);
    display(ls);

    ls.push_front(100);
    ls.push_front(200);
    display(ls);

    ls.emplace_front(400);
    display(ls);
}

int main()
{
    lists_in_cpp();
    return 0;
}