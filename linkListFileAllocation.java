import java.util.Scanner;

public class linkListFileAllocation {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the total number of memory block :");
        int n=sc.nextInt();

        System.out.println("Enter the number of block already asigned :");
        int temp=sc.nextInt();

        int[] mem=new int[n];

        for(int i=0;i<temp;i++){
            System.out.println("enter the index of the already assigned block");
            int a=sc.nextInt();
            mem[a]=1;
        }

        System.out.println("Enter the no of file wants to enter :");
        int nfile=sc.nextInt();
        for(int i=0;i<nfile;i++){
            int sz=sc.nextInt();
            boolean flag=true;
            System.out.println("enter the file index and size : ");
            int idx=sc.nextInt();
            for(int j=idx;j<idx+sz;j++){
                if(mem[j]!=0){
                    System.out.println("memory is already in use enter other position:");
                    j--;
                    flag=false;
                }
            }
            if(flag){
                System.out.print("file is allocated at index : ");

                for(int j=idx;j<idx+sz;j++){
                    mem[j]=1;
                    System.out.print(j+",");
                }
                System.out.println();
            }

        }

    }
}
