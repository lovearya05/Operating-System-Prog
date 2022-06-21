import java.util.Scanner;
public class sequentialAllocation {

    static class file{
        String name;
        int size;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the no files wants to enter : ");
        int n=sc.nextInt();

        file[] obj=new file[n];

        for(int i=0;i<n;i++){
            obj[i]=new file();
            System.out.println("Enter the file name and size of file : ");
            obj[i].name=sc.next();
            obj[i].size=sc.nextInt();
        }

        for(int i=0;i<n;i++){
            System.out.println(obj[i].name+ " "+ obj[i].size);
        }

        int[] stad=new int[n];
        int ptr=0;
        for(int i=0;i<n;i++){
            stad[i]=ptr;
            ptr+=obj[i].size+1;
        }

        System.out.println("file name \t size \t starting address");
        for(int i=0;i<n;i++){
            System.out.println(obj[i].name+"\t\t  "+obj[i].size+"\t\t"+stad[i]);
        }
    }
}
