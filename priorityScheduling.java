import java.util.Scanner;

public class priorityScheduling{

    static class pScheduling{
        int bt; // bust time
        int prt; // priority
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter total no of process");
        int n=sc.nextInt();

        pScheduling[] arr=new pScheduling[n]; // array of object

        for(int i=0;i<n;i++){
            arr[i]=new pScheduling();
            System.out.println("enter the busrt time of process and burst time seperated by space :");
            int a=sc.nextInt();
            int b=sc.nextInt();
            arr[i].bt=a;
            arr[i].prt=b;
        }

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j].prt<arr[j+1].prt){
                    pScheduling temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }

        int[] wt=new int[n];
        int[] tat=new int[n];

        tat[0]=arr[0].bt;
        for(int i=1;i<n;i++){
            wt[i]=tat[i-1];
            tat[i]=wt[i]+arr[i].bt;
        }

        System.out.println("process \t priority \t Burst time \t waiting time \t turn around time\n");
        for(int i=0;i<n;i++){
            System.out.println("P"+i+"\t\t  "+arr[i].prt+"\t\t  "+arr[i].bt+"\t\t  "+wt[i]+"\t\t  "+tat[i]);
        }
        
        
    }
}