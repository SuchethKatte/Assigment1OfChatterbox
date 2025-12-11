#include<bits/stdc++.h>
using namespace std;



void solve(){
    //Assume for now we have some number of queries to perform, i.e connect servers etc
    int queries; cin>>queries;

    //Let us represent our servers as graph. Let the MeshLoader be represented as node 0

    vector<vector<int>> graph(20);
    graph[0]={};  //MeshLoader

    while(queries--){
        //Assume no client for now
        //Assume no deletion of server as well for now
        //If deletion is needed, we have to change graph structure from int to string, and apt connections must be made
        //Instead of vector, map can be used to do that

        int n; cin>>n;

        //Send the existing servers' connection to this n

        for(auto it:graph[0]){
            graph[n].push_back(it);
        }

        //Alert the existing servers of the new connection

        for(auto it:graph[0]){
            graph[it].push_back(n);
        }

        graph[0].push_back(n);  //Register this server onto meshloader

    }

    //graph[0] just need to store the existing connections. No real connection happens between server and MeshLoader
    
    for(auto it:graph){
        cout<<"{ ";
        for(auto i:it){
            cout<<i<<" ";
        }
        cout<<"}"<<endl;
    }

}

int main(){
    solve();
}