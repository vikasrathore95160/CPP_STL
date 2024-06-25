#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;    //the greater number will be at the top
    pq.push(10);   // {10}
    pq.push(3);    // {10,3}
    pq.push(13);   // {13,10,3}
    pq.push(5);    // {13,10,5,3}

    cout<<pq.top()<<endl;  

    pq.pop();     //pops 13  -- {10,5,3}
    cout<<pq.top()<<endl;   //10
    

    //if we want a priority queue which has minimum element at top
    //Min heap
    cout<<"Minimum Heap --> "<<endl;
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(15);
    pq2.push(10);
    pq2.push(5);
    pq2.push(3);

    cout<<pq2.top()<<endl;
    return 0;
}