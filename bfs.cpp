#include<iostream>
#include <fstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
using namespace std;
void bfs();
void dfs();
void ucs();

typedef vector<int> row;
vector<row> cost;

string choice,source, destn, numnodes, tmp1;
int n,ch;
vector<string> nodes;

int main()
{
    ifstream infile;
    infile.open("input.txt");
    if(!infile.is_open())
    {
        cout<<"file not found";
    }
    
    
    getline(infile, choice);
    //int ch=stoi(choice);
    sscanf(choice.c_str(),"%d", &ch);
    getline(infile,source);
    cout<<"source"<<source;
    getline(infile, destn);
    getline(infile, numnodes);
    // n=stoi(numnodes);
    sscanf(numnodes.c_str(),"%d", &n);
    
    for (int i=0;i<n;i++)
    {
        getline(infile, tmp1);
        nodes.push_back(tmp1);
        
    }
    
    row r;
    int value;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            infile>>value;
            r.push_back(value);
        }
        cost.push_back(r);
    }
    infile.close();
    
    switch(ch){
        case 1:
            bfs();
            break;
        case 2:
            dfs();
            break;
        case 3:
            ucs();
            break;
    }
    return 0;
    
}
void bfs(){
    
}
void dfs(){
    cout<<"dfs under construction";
}
void ucs(){
    cout<<"ufs under construction";
}