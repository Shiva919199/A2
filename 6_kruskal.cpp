#include<bits/stdc++.h>
using namespace std;

pair<int, pair<int,int>>p[10];
int id[10];

void init(){    
    for(int i = 0; i<10; i++)    
        id[i] = i;    
}      

int root(int x){
    while(id[x] != x){       //5 != 2
        id[x] = id[id[x]];   //5 = id[5]
        x = id[x];
    }
    return x;
}

void union1(int x, int y){
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}

int kruskal(pair<int,pair<int,int>>p[], int edges){
    int x,y;
    int cost, minimumCost = 0; 
    for(int i = 0; i < edges; i++){
         x =  p[i].second.first;    
         y =  p[i].second.second;  
         cost = p[i].first;  
         if(root(x) != root(y))    
         {    
            minimumCost = minimumCost + cost;    
            union1(x, y);    
         }
    }
    return minimumCost;  
}


int main(){
    
    init(); 
    
    int n,e;
    cin>>n>>e;
    
    for(int i=0; i<e; i++){
        int s,d,w;
        cout<<"\nEnter the source and destination :";
        cin>>s>>d;
        cout<<"Enter the weight :";
        cin>>w;
        p[i] = make_pair(w,make_pair(s,d));        
    }
    sort(p, p+e);
    
    cout<<"Output :"<<endl;
    
    cout<<"Weight\t"<<"Source\t"<<"Destination"<<endl;
    for(int i=0; i<e; i++){
        cout<<p[i].first <<"\t"<<p[i].second.first <<"\t"<<p[i].second.second <<endl;
    }
    
    int re = kruskal(p,e);
    cout<<"Minimum distance is "<<re<<endl;
    
    return 0;
}