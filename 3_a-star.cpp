#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>>vect(20);
int heu[20];
int nodes=5, edges=5,goal=5,initial=1;
int cost;
vector<int>ans;

void add(int a, int b, int c)
{
    vect[a].push_back(make_pair(b,c));
}

int cal(int n,int wei){ //1,0
	if(n==goal){
		cost=wei;
		return 1;
	}
	
	vector<pair<int,int>>pq;
	for(int i=0;i<vect[n].size();i++){
		int nod = vect[n][i].first;
		int w   = vect[n][i].second;
		pq.push_back(make_pair(w+wei+heu[nod],nod));
	}
	sort(pq.begin(),pq.end());
	auto tem=pq[0];
	ans.push_back(tem.second);
	cal(tem.second, tem.first-heu[tem.second]);	
	return cost;
}

int main()
{
	memset(heu,0,sizeof(heu));
	ans.push_back(initial);

	add(1,2,7);
	add(1,3,4); //
	add(3,4,3);
	add(2,5,2);
	add(4,5,1);
	heu[1]=10 ;
	heu[2]=35 ;
	heu[3]=10 ;
	heu[4]=20 ;
	heu[5]=0 ;

	// For Manual input;
    /*cout<<"Enter no of nodes and edges:- ";
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
    	cout<<"Enter edge with weight:- ";
    	int a,b,c;
    	cin>>a>>b>>c;
    	vect[a].push_back(make_pair(b,c));
    	
	}
	cout<<"Enter initial state:-";cin>>initial;cout<<"Enter the goal state:-";cin>>goal;
	cout<<"Enter the heuristic values\n";
	for(int i=0;i<nodes;i++){
		int nod,wei;
		cin>>nod>>wei;
		heu[nod]=wei;
	}*/
	int sol=cal(initial,0);
	
	if(sol){	
		cout<<"Path is: ";
		for(int i=0;i<ans.size();i++)
			cout<<ans[i]<<"-";
		
		cout<<"Cost is: "<<cost;
	}
	else 
		cout<<"Path not present";	   
}

































/*
#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>>vect(20);
int heu[20];
int nodes=7, edges=9,goal=6,initial=0;

int cost;
vector<int>ans;

void add(int a, int b, int c)
{
    vect[a].push_back(make_pair(b,c));
}

int cal(int n,int wei){
	if(n==goal){
		cost=wei;
		return 1;
	}
	
	vector<pair<int,int> >pq;
	for(int i=0;i<vect[n].size();i++){
		int nod=vect[n][i].first;int w=vect[n][i].second;
		pq.push_back(make_pair(w+wei+heu[nod],nod));
	}
	sort(pq.begin(),pq.end());
	auto tem=pq[0];
	ans.push_back(tem.second);
	cal(tem.second,tem.first-heu[tem.second]);	
	return cost;
}

int main()
{
	memset(heu,0,sizeof(heu));
	ans.push_back(initial);
	
	Example Input
	add(0,1,4);
	add(0,3,3); //
	add(1,2,6);
	add(1,5,8);
	add(2,6,16);
	add(5,6,5); //  
	add(3,5,10);
	add(3,4,7); //
	add(4,5,2); //
	heu[0]=14 ;
	heu[1]=13 ;
	heu[2]=11 ;
	heu[3]=11 ;
	heu[4]=6 ;
	heu[5]=4 ;
	heu[6]=0 ;

	// For Manual input;
    /*cout<<"Enter no of nodes and edges:- ";
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
    	cout<<"Enter edge with weight:- ";
    	int a,b,c;
    	cin>>a>>b>>c;
    	vect[a].push_back(make_pair(b,c));
    	
	}
	cout<<"Enter initial state:-";cin>>initial;cout<<"Enter the goal state:-";cin>>goal;
	cout<<"Enter the heuristic values\n";
	for(int i=0;i<nodes;i++){
		int nod,wei;
		cin>>nod>>wei;
		heu[nod]=wei;
	}
	int sol=cal(initial,0);
	if(sol){
		cout<<"Path is: ";
		for(int i=0;i<ans.size();i++)cout<<ans[i]<<"-";
		cout<<"Cost is: "<<cost;
	}
	else cout<<"Path not present";	   
}

*/