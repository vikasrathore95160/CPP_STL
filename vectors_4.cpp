#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v)
{
    for(auto it: v)
        cout<<it<<" ";
    cout<<endl;
}

void vectors_in_cpp()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(12);
    v.push_back(23);
    v.push_back(35);
    v.push_back(56);

    display(v);           //{10,20,12,23,35,56}
    
    //1st way to erase
    v.erase(v.begin()+1);  //{10,12,23,35,56}
    display(v);

    //2nd way to erase
    v.erase(v.begin()+1, v.begin()+3);   //{10,35,56}
    display(v);

    //Insert function in vector in CPP Standard Template Library
    vector<int> v2(2,50);
    display(v2);            //{50,50}

    //1st way to insert
    v2.insert(v2.begin(),300);    //{300,50,50}
    display(v2);  

    //2nd way to insert
    v2.insert(v2.begin()+1, 4,10);
    display(v2);

    //Insert one vector into another vector
    vector<int> v3;
    v3.push_back(900);
    v3.push_back(1800);
    cout<<"vector 3 is : ";
    display(v3);

    vector<int> v4;
    v4.push_back(400);
    v4.push_back(1600);
    cout<<"vector 4 is : ";
    display(v4);

    cout<<"After inserting vector 3 into vector 4"<<endl;

    v4.insert(v4.begin(), v3.begin(), v3.end());
    display(v4);


    //Swapping two vectors
    vector<int> v5;
    v5.push_back(40);
    v5.push_back(50);

    vector<int> v6;
    v6.push_back(90);
    v6.push_back(100);
    cout<<endl;

    cout<<"v5 and v6 initially are: "<<endl;
    cout<<"v5: "; display(v5);
    cout<<"v6: "; display(v6);


    v5.swap(v6);
    cout<<"After Swapping v5 and v6: "<<endl;
    cout<<"v5: ";
    display(v5);
    cout<<"v6: ";
    display(v6);
    cout<<endl; 

    //v.clear() --> clears the entire vector, make it an empty vector
    vector<int> vec(10, 40);
    display(vec);

    vec.clear();
    cout<<"Displaying after clear() : "<<endl;
    display(vec);
    
    cout<<vec.empty()<<endl;    //returns 1 if vector is empty
                                //returns 0 if vector has atleast one element
}       

int main()
{
    vectors_in_cpp();
    return 0;
}