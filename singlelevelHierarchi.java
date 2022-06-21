import java.util.Scanner;
public class singlelevelHierarchi{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the directory name : ");
        String name=sc.next();
        System.out.println("Enter the no of files wants to enter the directory : ");
        int n=sc.nextInt();

        String[] arr=new String[n];
        for(int i=0;i<n;i++){
            System.out.println("Enter the name of the file : "+i+1);
            arr[i]=sc.next();
        }

        System.out.println("\nName of the Main directory is : " +name);
        System.out.print("files in the directory are : ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+", ");
        }
    }
}
