#include<bits/stdc++.h>
using namespace std;

void display(stack<int> &st)
{
    
}
int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    cout<<st.size()<<endl;
    cout<<st.empty();

    return 0;
}