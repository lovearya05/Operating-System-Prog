import java.util.Arrays;
import java.util.Scanner;
public class wrostAvgBestFit {
    static class process{
       int pno;
       int pmem;
       int memaloc;
       process(){};
       process(int pno,int pmem){
           this.pno=pno;
           this.pmem=pmem;
       }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the no of memory block wants to enter :");
        int n=sc.nextInt();

        int[] mem=new int[n];  // memory block

        System.out.println("Enter the memory block size : ");
        for(int i=0;i<n;i++){
            mem[i]=sc.nextInt();
        }
        
        process[] obj=new process[n];
        System.out.println("Enter memory size of each process require : ");
        for(int i=0;i<n;i++){
            obj[i]=new process();
            obj[i].pmem=sc.nextInt();
            obj[i].pno=i;
        }
        
        firstFit(obj,mem,n);
        wrostFit(obj,mem,n);
        bestFit(obj,mem,n);

    }

    static void firstFit(process[] obj,int[] mem,int n){

        System.out.println("\n\n \t\t ******First-Fit****** \n\n");
    
        System.out.println("Process number\t Process Memory\t Memory Allocated");
        for(int i=0;i<n;i++){
            int temp=0;
            if(mem[i]>=obj[i].pmem){
                temp=mem[i];
            }
            System.out.println("  P"+obj[i].pno+"\t\t\t"+obj[i].pmem+"\t\t"+temp);

        }
        
    }
    
    static void wrostFit(process[] obj,int[] mem,int n){
    
        System.out.println("\n\n \t\t ******Wrost-Fit****** \n\n");

        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(mem[j]<mem[j+1]){
                    int temp=mem[j];
                    mem[j]=mem[j+1];
                    mem[j+1]=temp;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(obj[j].pmem>obj[j+1].pmem){
                    process temp=obj[j];
                    obj[j]=obj[j+1];
                    obj[j+1]=temp;
                }
            }
        }
        System.out.println("Process number\t Process Memory\t Memory Allocated");
        for(int i=0;i<n;i++){
            int temp=0;
            if(mem[i]>=obj[i].pmem){
                temp=mem[i];
            }
            System.out.println("  P"+obj[i].pno+"\t\t\t"+obj[i].pmem+"\t\t"+temp);

        }
        
    }
    static void bestFit(process[] obj,int[] mem,int n){

        System.out.println("\n\n \t\t ******Best-Fit****** \n\n");

    
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(mem[j]<mem[j+1]){
                    int temp=mem[j];
                    mem[j]=mem[j+1];
                    mem[j+1]=temp;
                }
            }
        }
        // System.out.println(Arrays.toString(mem));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(obj[j].pmem<obj[j+1].pmem){
                    process temp=obj[j];
                    obj[j]=obj[j+1];
                    obj[j+1]=temp;
                }
            }
        }

        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                if(mem[j]==obj[i].pmem || mem[j]!=0 && obj[i].pmem<=mem[j]){
                    temp=mem[j];
                    mem[j]=0;
                    break;
                }
            }
            obj[i].memaloc=temp;
        }

        System.out.println("Process number\t Process Memory\t Memory Allocated");
        for(int i=0;i<n;i++){
            System.out.println("  P"+obj[i].pno+"\t\t\t"+obj[i].pmem+"\t\t"+obj[i].memaloc);

        }
        
    }
    
}
