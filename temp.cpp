#include <iostream>
using namespace std;
int main() {
    int n ,i ;
    cout<<"enter the time slice";
    int ts;
    cin>>ts;
    cout<<"enter the number of processes";
    cin>>n;
    int bt[n];
    for(int i=0;i<n;i++){
        cout<<"enter burst time of process"<<i+1<<" : ";
        cin>>bt[i];
    }
    cout<<"burst time recieved, now creating copy of it";
   int btt[i];
    for(int i=0;i<n;i++){
        btt[i]=bt[i];
    }
    int max=bt[0];
    for(int i=0;i<n;i++){
        if(max<bt[i]){
            max=bt[i];
        }
    }
    int wt[n]={0};
    for(int r=1;r<max;r++){
        for(int i=0;i<n;i++){
            if(bt[i]<=0) continue;
            if(bt[i]>0){
                bt[i]=bt[i]-ts;
            }
            for(int j=0;j<n;j++){
                if(j!=i && bt[j]>0){
                if(bt[j]>ts){
                    wt[j]+=ts;}else{
                        wt[j]+=bt[j];
                    }
                }
            }
        }
    }
    int tat[i];
    for(i=0;i<n;i++){
        btt[i]+wt[i];
    }
    cout<<" "<<bt[i]<<" "<<wt[i]<<" "<<tat[i];

return 0;
}