#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    st.insert(1);
    st.insert(13);
    st.insert(2);
    st.insert(8);
    st.insert(34);
    st.insert(18);
    st.insert(4);
    st.insert(90);

    for(auto it: st)
        cout<<it<<" ";
    cout<<endl; 

    auto it = st.find(2);
    st.erase(it);

    cout<<"after erasing: --> "<<endl;
    for(auto it: st)
        cout<<it<<" ";
    cout<<endl;


    cout<<"afer deleting multiple elements: --> "<<endl;
    auto it1 = st.find(4);
    auto it2 = st.find(34);
    st.erase(it1,it2);

    for(auto it : st)
        cout<<it<<" ";
    cout<<endl;

    return 0;
}