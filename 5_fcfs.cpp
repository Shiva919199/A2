#include<iostream>
using namespace std;

void AvgTime(int n, int burst_time[]){
    
    int wt=0,tt=0,final_wt=0;
    cout<<"Burst Time"<<"\t Waiting Time"<<"\t Turnaround Time"<<endl;
    
    for(int i=0; i<n; i++){
            cout<<burst_time[i]<<"\t\t "<<wt;
            tt += wt + burst_time[i];  
            cout<<"\t\t "<<(wt + burst_time[i])<<endl;
            wt += burst_time[i];          
            if(i!=n-1)
                final_wt += wt;                
    }
    
    float f_wt = float(final_wt)/float(n);
    cout<<"Average waiting time :"<<f_wt<<endl;
    
    float f_tt = float(tt)/float(n);
    cout<<"Average turnaround time :"<<f_tt<<endl;
}

int main(){
    
    int processes[] = { 1, 2, 3, 4};
    int n = sizeof(processes) / sizeof(processes[0]);
    
    int  burst_time[] = {21, 3, 6, 2};
    AvgTime(n,burst_time);
    return 0;
}


/*
OUTPUT :
Burst Time	 Waiting Time	 Turnaround Time
21		        0		        21
3		        21		        24
6		        24		        30
2		        30		        32
Average waiting time :18.75
Average turnaround time :26.75
*/
