#include<iostream>
using namespace std;
int main(){
    cout<<"Enter memory address required to access :";
    int n=0;
    cin>>n;
    int add[n];
    int head=0;
    cout<<"Enter the current head possition : ";
    cin>>head;
    cout<<"Enter memory address to access :";
    for(int i=0;i<n;i++){
        cin>>add[i];
    }
    int st=0;
    int prev=head;
    for(int i=0;i<n;i++){
        cout<<"head is moved to position : "<<add[i]<<"\n";
        st=st+abs(add[i]-prev);
        prev=add[i];
    }
    cout<<"total seek time is : "<<st;
}