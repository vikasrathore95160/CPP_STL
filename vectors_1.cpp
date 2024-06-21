#include<bits/stdc++.h>
using namespace std;

void vectors_in_cpp()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);


    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;

    v.emplace_back(3);
    v.emplace_back(3);
    v.emplace_back(3);
    v.emplace_back(3);

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

}
int main()
{
    vectors_in_cpp();

    return 0;
}