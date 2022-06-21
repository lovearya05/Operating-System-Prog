#include<iostream>

using namespace std;

struct node{
    int val;
    int next;
    
}
{
    /* data */
};


int main(){
    int temp;
    cout<<"enter the total frame size : ";
    cin>>temp;

    cout<<"memory block is getting divided \n";
    int sz;
    if(temp%2==0){
        sz=temp/2;
    }else{
        sz=(temp+1)/2;
    }

     int frm[sz];
    cout<<"";    




    return 0;
}