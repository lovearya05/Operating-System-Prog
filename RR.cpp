#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;
int main(){

    int ts=1;
    cout<<"Enter the time slice of the cpu : ";
    cin>>ts;

    int n;
    cout<<("Enter total no of process : \n");
    cin>>n;


    int bt[n];
    
    cout<<("Enter each process burst time \n");
    for(int i=0;i<n;i++){
        cin>>bt[i];
    }
    
    // int bt[]={2,3,1,1,4};
    // int n=5;
    // int ts=1;  // time slice


    int bt1[n];  // copy of burst time for further use
    for(int i=0;i<n;i++){
        bt1[i]=bt[i];
    }

    int max=bt[0];   //   maximum bust time in the process to control total cpu cycle
    for(int i=0;i<n;i++){
        if(max<bt[i]){
            max=bt[i];
        }
    }

    int wt[n]={0}; // calculation of waiting time
    for(int r=1;r<=max;r++){
        for(int i=0;i<n;i++){
            int temp=0;
            if(bt[i]<=0) continue;
            if(bt[i]>0){
                temp=bt[i];
                bt[i]=bt[i]-ts;
            }
            for(int j=0;j<n;j++){
                if(j!=i && bt[j]>0){
                    if(temp<ts){
                    wt[j]+=temp;
                    }else{
                        wt[j]+=ts;
                    }
                }
            }
        }
    }

    int tat[n]={0}; 
    for(int i=0;i<n;i++){ // calculation of turan around time
        tat[i]=bt1[i]+wt[i];
    }

    cout<<"process  Burst-time waiting-time  turn-around-time\n";
    for(int i=0;i<n;i++){
      cout<<"P"<<i+1<<"\t  "<<bt1[i]<<"\t\t  "<<wt[i]<<"\t\t  "<<tat[i]<<endl;  
    }

    getch();
    return 0;

}