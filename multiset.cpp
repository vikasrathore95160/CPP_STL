#include<bits/stdc++.h>
using namespace std;

void display(multiset<int> &ms)
{
    for(auto it: ms)
        cout<<it<<" ";
    cout<<endl;
}

int main()
{
    multiset<int> ms;   //elements may or may not be unique, but they will be in sorted order
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    for(auto it: ms)
        cout<<it<<" ";
    cout<<endl;

    int cnt = ms.count(1);  //count the no of occcurences of 1
    cout<<cnt<<endl;

    ms.erase(1);      //will erase all the occurences of 1 
    cout<<"after deleting 1 : --> "<<endl;
    for(auto it: ms)
        cout<<it<<" ";
    cout<<endl;


    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);

    display(ms);
    //to delete any one occurence of 2 
    ms.erase(ms.find(2));
    display(ms);


    //unordered set
    unordered_set<int> us;     // i) stores unique values
                               // ii) doesn't have any particular order of storing elements;  
    us.insert(1);
    us.insert(6);
    us.insert(3);
    us.insert(78);
    us.insert(87);
    us.insert(2);

    for(auto it: us)
        cout<<it<<" ";
    cout<<endl;

    return 0;
}