#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<("Enter total no of process : \n");
    cin>>n;

    int bt[n];
    
    cout<<("Enter each process burst time \n");
    for(int i=0;i<n;i++){
        cin>>bt[i];
    }

    // int bt[]={2,4,6,7,8};
    // int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(bt[j]>bt[j+1]){
                int temp=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;
            }
        }
    }
    int wt[n]={0};
    int tat[n]={0};

    wt[0]=0;
    tat[0]=bt[0];
    for(int i=1;i<n;i++){
        wt[i]=tat[i-1];
        tat[i]=wt[i]+bt[i];
    }


    cout<<"process \t Burst time \t waiting time \t turn around time\n";
    for(int i=0;i<n;i++){
      cout<<"P"<<i+1<<"\t\t  "<<bt[i]<<"\t\t  "<<wt[i]<<"\t\t  "<<tat[i]<<endl;  
    }

    return 0;

}