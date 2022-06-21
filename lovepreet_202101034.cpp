#include<iostream>
using namespace std;
int main(){
    int n=3; //for no of process
    int r1=3;
    int r2=2;
    int r3=3;
    int r4=2;

    int p1[10][5]={
        {0,0,2,0,0},
        {1,0,0,1,0},
        {2,0,0,0,0},
        {3,2,0,0,0},
        {4,0,0,0,0},
        {5,-1,-1,0,0},
        {6,0,0,0,0},
        {7,0,0,-1,0},
        {8,0,0,0,2},
        {9,0,0,0,0},
        // {10,0,0,0,0},
    };
    int p2[10][5]={
        {0,0,0,2,0},
        {1,0,0,0,0},
        {2,0,0,0,1},
        {3,0,0,0,0},
        {4,1,0,0,0},
        {5,0,0,0,0},
        {6,0,0,-1,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        // {10,0,0,0,0},
    };
    int p3[10][5]={
        {0,0,0,0,1},
        {1,0,0,0,0},
        {2,2,0,0,1},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,2,0,0,0},
        {6,0,0,0,0},
        {7,0,1,0,0},
        {8,0,0,1,0},
        {9,0,0,0,0},
        // {10,0,0,0,0},
    };
    int blk[4][10]={0};
    cout<<"time \t\t\t\tR1\tR2\tR3\tR4\n";
    for(int i=0;i<10;i++){

        //for p1
        cout<<"t"<<i<<" P1 Requested ";
        for(int j=1;j<5;j++){
            if(p1[i][j]!=0){
                cout<<"\t\t"<<p1[i][j]<<"\t";
            }else{
                cout<<"\t";
            }
        }
        if(p1[i][1]<=r1 && p1[i][2]<=r2 && p1[i][3]<=r3 && p1[i][4]<=r4){
        cout<<"\nt"<<i<<"  allocated to P1 ";
        r1=r1-p1[i][1];
        r2=r2-p1[i][2];
        r3=r3-p1[i][3];
        r4=r4-p1[i][4];
        }else{
            cout<<"t"<<i<<" P1 Blocked \n";
            blk[1][i]=1;
        }
        cout<<"\nt"<<i<<" available : res \t\t"<<r1<<"\t"<<r2<<"\t"<<r3<<"\t"<<r4<<"\n";
        
        //for p2
        cout<<"t"<<i<<" P2 Requested ";
        for(int j=1;j<5;j++){
            if(p2[i][j]!=0){
                cout<<"\t\t"<<p2[i][j]<<"\t";
            }else{
                cout<<"\t";
            }
        }
        if(p2[i][1]<=r1 && p2[i][2]<=r2 && p2[i][3]<=r3 && p2[i][4]<=r4){
        cout<<"\nt"<<i<<"  allocated to P2 ";
        r1=r1-p2[i][1];
        r2=r2-p2[i][2];
        r3=r3-p2[i][3];
        r4=r4-p2[i][4];
        }else{
            cout<<"t"<<i<<" P2 Blocked \n";
            blk[2][i]=1;
        }
        cout<<"\nt"<<i<<" available : res \t\t"<<r1<<"\t"<<r2<<"\t"<<r3<<"\t"<<r4<<"\n";
        
        //for p3
        cout<<"t"<<i<<" P3 Requested ";
        for(int j=1;j<5;j++){
            if(p3[i][j]!=0){
                cout<<"\t\t"<<p3[i][j]<<"\t";
            }else{
                cout<<"\t";
            }
        }
        if(p3[i][1]<=r1 && p3[i][2]<=r2 && p3[i][3]<=r3 && p3[i][4]<=r4){
        cout<<"\nt"<<i<<"  allocated to P3 ";
        r1=r1-p3[i][1];
        r2=r2-p3[i][2];
        r3=r3-p3[i][3];
        r4=r4-p3[i][4];
        }else{
            cout<<"t"<<i<<" P3 Blocked \n";
            blk[3][i]=1;
        }
        cout<<"\nt"<<i<<" available : res \t\t"<<r1<<"\t"<<r2<<"\t"<<r3<<"\t"<<r4<<"\n";
        
    }
    return 0;
}