#include <bits/stdc++.h>
using namespace std;
int del;
void solve(vector<pair<int,int> >v[],int i,int d[])
{
	for(int j=0;j<v[i].size();j++)
	{
		solve(v,v[i][j].first,d);
		if((d[v[i][j].first]+v[i][j].second)>=del)d[v[i][j].first]=0,cout<<v[i][j].first<<endl;
		d[i]=max(d[i],d[v[i][j].first]+v[i][j].second);
	}
	
}
int main()
{
	int n,m;
	cout<<"Node Edges Weight :";
	cin>>n>>m>>del;
	vector<pair<int,int> >v[n+1];
cout<<"Enter parent, Child and edge weight :\n";
	for(int i=0;i<m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		v[x].push_back(make_pair(y,z));
	}
	int d[n+1];
	memset(d,0,sizeof(d));
    cout<<"The nodes where splitting will occur :\n";
	solve(v,1,d);
	cout<<endl;
}
