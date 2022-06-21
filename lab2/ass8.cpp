#include<iostream>
using namespace std;

void fcfs(int arr[],int n,int cp){
    int seekt=0;
    int prev=cp;
    for(int i=0;i<n;i++){
        cout<<"Head is moved to "<<arr[i]<<"\n";
        seekt+=abs(arr[i]-prev);
        prev=arr[i];
    }

    cout<<" seek time "<<seekt<<"\n";

}
void sstf(int arr[],int n,int cp){
    int seekt=0;
    int prev=cp;
    int min=-1;
    int tempmin=1e9;
  for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        if(arr[i]!=-1 && arr[i]<tempmin){
            min=i;
            tempmin=arr[i];

        }
    }
    cout<<"Head is moved to position :"<<arr[min]<<"\n";
    seekt+=abs(prev-arr[min]);
    prev=arr[min];
    arr[min]=-1;
    tempmin=1e9;

  }

  cout<<"Seak time is : "<<seekt<<"\n";
}
void scan(int arr[],int n,int cp){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=cp){
            cout<<"Head is moved to position : "<<arr[i]<<"\n";
            arr[i]=-1;
        }
    }
    cout<<"Head is moved to position : "<<arr[n-1]<<"\n";
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=-1){
            cout<<"Head is move to position : "<<arr[i]<<"\n";
        }
    }
}
void cscan(int arr[],int n,int cp){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=cp){
            cout<<"Head is moved to position : "<<arr[i]<<"\n";
            arr[i]=-1;
        }
    }
    cout<<"head is moved to position : "<<arr[n-1]<<"\n";
    cout<<"Head is moved to position :"<<arr[0]<<"\n";
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            cout<<"Head is move to position : "<<arr[i]<<"\n";
        }
    }
}

void look(int arr[],int n,int cp){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=cp){
            cout<<"Head is moved to position : "<<arr[i]<<"\n";
            arr[i]=-1;
        }
    }
    cout<<"Head is moved to position : 0"<<"\n";
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=-1){
            cout<<"Head is move to position : "<<arr[i]<<"\n";
        }
    }
}
void clook(int arr[],int n,int cp){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=cp){
            cout<<"Head is moved to position : "<<arr[i]<<"\n";
            arr[i]=-1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            cout<<"Head is move to position : "<<arr[i]<<"\n";
        }
    }
}

int main(){
     int cp=0;
     cout<<"Enter the no of heads wants to access :\n";
     int n=0;
     cin>>n;
     int arr[n];

     cout<<"\n Enter the current position of the head :\n";
     cin>>cp;
     cout<<"\n Enter the track No wants to access : ";
    
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
    // int arr[]={4,7,3,1,2};
    // int n=5;
    // int cp=3;
    
    
    // fcfs(arr,n,cp);
    sstf(arr,n,cp);
    // scan(arr,n,cp);
    // cscan(arr,n,cp);
    // look(arr,n,cp);
    // clook(arr,n,cp);


    return 0;
}
