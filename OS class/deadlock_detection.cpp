#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the no of processes : \n";
    int n=0;
    cin>>n;

int alloc[n][3];
for(int i=0;i<n;i++){
    cout<<"Enter the allocation of resources A,B,C to process : P"<<i+1<<"\n";
    int temp=0;
    cin>>temp;
    alloc[i][0]=temp;
    cin>>temp;
    alloc[i][1]=temp;
    cin>>temp;
    alloc[i][2]=temp;
}

cout<<"Enter the available Resources :\n";
int a,b,c;
cin>>a;
cin>>b;
cin>>c;

int request[n][3];
for(int i=0;i<n;i++){
    cout<<"Enter the Requested resources of process A,B,C : P"<<i+1<<"\n";
    int temp=0;
    cin>>temp;
    request[i][0]=temp;
    cin>>temp;
    request[i][1]=temp;
    cin>>temp;
    request[i][2]=temp;
}

bool arr[n] = {0};
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[j]==0 && request[j][0]<=a && request[j][1]<=b && request[j][2]<=c){
            cout<<"Process P"<<j+1<<" Executed\n";
            arr[j]=1;
            a+=alloc[j][0];
            b+=alloc[j][1];
            c+=alloc[j][2];
        }
    }
}
for(int i=0;i<n;i++){
    if(arr[i]==0){
        cout<<"\nDeadlock Occure at process P"<<i+1<<"\n";
        break;
    }
}
    return 0;
}