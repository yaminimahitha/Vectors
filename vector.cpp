#include<iostream>
#include<bits/stdc++.h>
#include<vector>//vector is dynamic array we can change size
using namespace std;
int main()
{
    //creation of vector and insert elements and print
    vector<int>v;
    v.push_back(30);
    v.push_back(60);
    v.push_back(90);
    //emplace_back() function is also used to insert the elements
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //delete elements in vector
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //create vector with given size and fill with zeroes
    vector<int>vct(10,0);
    vector<int>::iterator itr=vct.begin();
    //traverse through vector using iterator
    for(vector<int>::iterator itr=vct.begin();itr!=vct.end();itr++)
    {
        cout<<*(itr)<<" ";
    }
    cout<<endl;
    vector<int>::iterator it=v.begin();
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //printing elements easiest way
    for(auto it:vct)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //checking weather element is present in vector or not
    vector<int>::iterator iter=v.begin();
    iter=find(v.begin(),v.end(),40);
    cout<<*(iter);
    cout<<endl;
    //copy one vector to another vector
    vector<int>vect(vct);
    for(auto it:vect)
    {
        cout<<it<<" ";
    }

    
}
