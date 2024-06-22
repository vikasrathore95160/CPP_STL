#include<bits/stdc++.h>
using namespace std;

void display_vector(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void vectors_in_cpp()
{
    vector<pair<int,int>> v;
    v.push_back({1,2});
    v.push_back({2,4});

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    v.emplace_back(3,6);
    v.emplace_back(4,8);

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    vector<int> v1(5,100);
    display_vector(v1);

    vector<int> v2(5);
    display_vector(v2);

    vector<int> v3(v2);
    display_vector(v3);

    vector<int> v5;
    v5.push_back(11);
    v5.push_back(12);
    v5.push_back(13);

    vector<int>:: iterator it = v5.begin();
    cout<<*it<<endl;

    it++;
    cout<<*it<<endl;
}

int main()
{
    vectors_in_cpp();
    return 0;
}