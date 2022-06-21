import java.util.Scanner;
import java.util.ArrayList;

public class hierarchicalAllocation {
    static class tree{
        String name;
        ArrayList<tree> child=new ArrayList<>();

        tree(String name){
            this.name=name;
        }
    }
    
    static Scanner sc=new Scanner(System.in);

    static tree root;
    static void createDirectory(tree root){
        System.out.println("wants to create directory in : ---- "+root.name +" ---- : say -- 0/1");
        int it=sc.nextInt();
        // System.out.println(it);

        if(it==1){
        // if(true){
            System.out.println("Enter no directory wants to create in ---"+root.name);
            int i=sc.nextInt();
            System.out.println("Enter the name of the sub directory : ");
            while(i--!=0){
                String temp=sc.next();
                tree node=new tree(temp);
                root.child.add(node);

            }
            // createDirectory(root);
        
        }else{

        }
        // if(it==0 || it==0){
        //     System.out.println("Number of file wants to enter in directory "+root.name);
        //     int temp=sc.nextInt();
        //     System.out.println("enter the name of the file : ");
        //     for(int i=0;i<temp;i++){
        //         tree node=new tree(sc.next());
        //         root.child.add(node);
        //     }
        // }
        for(tree i:root.child){
            createDirectory(i);
        }
    }
    static void displayDirectory(tree root){
        if(root==null) return;
        System.out.print("Name of directory contains directory ---"+root.name+" --> ");
        for(tree i:root.child){
            System.out.print(i.name+", ");
        }
        System.out.println();
        for(tree i:root.child){
            displayDirectory(i);
        }

    }
    public static void main(String[] args) {
        System.out.println("Your welcome in herirical file allocation ");
        System.out.println("Enter the root directory name : ");
        String name=sc.next();
        tree node=new tree(name);
        root=node;
        createDirectory(root);

        displayDirectory(root);
    }
    
}
