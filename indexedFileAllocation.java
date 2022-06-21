import java.util.Scanner;

public class indexedFileAllocation {
    static class index{
        String name;
        int idx;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the total no file wants to enter : ");
        int n=sc.nextInt();

        index[] obj=new index[n];
        for(int i=0;i<n;i++){
            obj[i]=new index();
            System.out.println("Enter the name of the file " + (i+1) + " to enter");
            obj[i].name=sc.next();
            obj[i].idx=i;
        }

        System.out.print("Files are present at index : ");
        for(int i=0;i<n;i++){
            System.out.println(obj[i].idx);
        }

        System.out.println("\n\n Press from below key : \n");
        System.out.println("To get all file indexes press :\t\t\t  1");
        System.out.println("To access file by indexes press :\t\t  2");
        int a=sc.nextInt();

        if(a==1){
            System.out.println("file name \t\t     index");
            for(int i=0;i<n;i++){
                System.out.println(obj[i].name+"\t\t\t\t"+obj[i].idx);
            }
        }else if(a==2){
            System.out.println("Enter the index no of the file wants to access : ");
            int temp=sc.nextInt();
            System.out.println("file name is "+obj[temp].name+" and index is "+obj[temp].idx);
        }else{
            System.out.println("wrong input ");
        }



    }
    
}
