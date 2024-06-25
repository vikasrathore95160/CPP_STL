#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);     //push element at back of the queue
    q.push(2);
    q.push(3);
    q.emplace(4);

    cout<<q.front()<<endl;  //1
    cout<<q.back()<<endl;   //4

    q.pop();    //pops 1 -- pops from the front of the queue
    cout<<q.front();
}