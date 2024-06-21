#include<bits/stdc++.h>
using namespace std;

void pairs_in_cpp()
{
    pair<int, int> p = {1,4};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    //nesting in pair
    pair<int, pair<int, int>> p1 = {1, {4,5}};
    cout<<p1.first<<endl;
    cout<<p1.second.second<<endl;
    cout<<p1.second.first<<endl;

    //pair of array
    pair<int, int> parray[] = { {1,2}, {2,4}, {3,6}, {4,8} };
    cout<<"Pair of array--->"<<endl;
    cout<<parray[0].first<<endl;
    cout<<parray[0].second<<endl;

    cout<<parray[3].first<<endl;
    cout<<parray[3].second<<endl;
}
int main()
{
    pairs_in_cpp();
    return 0;
}