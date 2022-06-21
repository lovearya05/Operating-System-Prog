import java.util.*;

public class pagingTechnique {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        
        System.out.println("Enter no of pages & frames in memory : ");
        int n=sc.nextInt();
        int[] frmno=new int[n];
        
        System.out.println("Enter the page size : ");
        int psz=sc.nextInt();
        
        // System.out.println("Enter the no  : ");
        // int frm=sc.nextInt();
        
        System.out.println("Enter the page table as --\n enter frame no -1 if page not present in frame\n");
        
        System.out.println("Page Number \t frame number ");
        for(int i=0;i<n;i++){
            System.out.print(i+"\t\t\t");
            frmno[i]=sc.nextInt();
        }
        
        find(frmno,n);
    }
    static void find(int[] frmno,int n){
        int a=1;
        do{

            System.out.println("Enter the logical-addres(page no) and offset :");
            Scanner sc=new Scanner(System.in);
            int la=sc.nextInt();
            int temp=sc.nextInt();
            if(la>=n){
                System.out.println("Logical address is not available ");
            }else{
    
                if(frmno[la]==-1){
                    System.out.println("Required page in not available in any frame ");
                }else{
                    System.out.println("physical address(frame no) and offset is : "+frmno[la]+"  "+temp); 
                }
            }
            System.out.println("Enter 1 to continue 0 to exit : ");
            a=sc.nextInt();

        }while(a==1);
    }
    
}
