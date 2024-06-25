#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;  //map stores unique keys in sorted order 
                        // map always stores in form of key value pairs
    mp.insert({3,4});
    mp.emplace(5,6);
    mp.insert({4,5});

    for(auto it: mp)
    {   
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }

    //a pair can also be a key in map
    //example: 
    map< pair<int, int>, int> mp1;
    mp1.insert({{1,2}, 3});
    mp1.insert({{2,3}, 4});

    
    return 0;
}