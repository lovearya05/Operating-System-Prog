import java.util.Scanner;
public class twoLeveDirectory {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the name of root directory : ");
    String name=sc.next();
    System.out.println("Enter the no of sub-directory  : ");
    int n=sc.nextInt();

    String[][] sub=new String[n][20];
    for(int i=0;i<n;i++){
        System.out.println("Enter the name of the sub-directory : "+ (i+1));
        sub[i][0]=sc.next();
    }
    int temp=0;
    for(int i=0;i<n;i++){
        System.out.println("Enter the no of files wants to enter in sub directory : " + sub[i][0]);
        temp=sc.nextInt();
        System.out.println("Enter file names : ");
        for(int j=1;j<=temp;j++){
            sub[i][j]=sc.next();
        }

    }

    System.out.println("\n\t\t\t\tName of the Main directory is : " +name + "\n");

    for(int i=0;i<n;i++){
        System.out.println("name of sub-directory is " + sub[i][0]);
        for(int j=1;j<=temp;j++){
            System.out.println(sub[i][j]+", ");
        }
        System.out.println();
    }
    
}    
}
