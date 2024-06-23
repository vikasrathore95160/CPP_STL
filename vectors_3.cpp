#include<bits/stdc++.h>
using namespace std;

void vectors_in_cpp()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    v.push_back(16);
    v.push_back(17);
    v.push_back(18);

    vector<int>::iterator it = v.end();  // points to the memory location right after last index
    it--;
    cout<<*(it)<<endl;

    //---<< Different ways of displaying or iterating a vector: ---->>>
    //1st way
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++)
    {
        cout<<*(it)<<" ";
    }
        cout<<endl;

    //2nd way
    //auto keyword automatically assigns datatype of variable based on the data
    for(auto it=v.begin(); it!=v.end(); it++)   
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //3rd way 
    for(auto it: v)
    {
        cout<<it<<" ";
    }

}
int main()
{
    vectors_in_cpp();
    return 0;
}