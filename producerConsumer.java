import java.util.*;
public class producerConsumer {

    static int mutex=1,full=0,empty=5,x;
    static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) {

        System.out.println("Enter any value : ");
        prodCons();
        
    }
    static int n=0;
    static void prodCons(){
        System.out.println("\n1 for producer \n2 for consumer \n3 to Exit");
        n=sc.nextInt();

            switch (n){
                case 1:
                     if((mutex==1) && (empty!=0)){
                         producer();
                     }else{
                         System.out.println("Buffer is full");
                     }
                     break;

                case 2:
                    if((mutex==1) && (full!=0)){
                        consumer();
                    }else{
                        System.out.println("Buffer is Empty");
                    }
                    break;

                case 3:
                    return;
                
            }
            prodCons();

    }
    static int wait(int w){
        return --w;
    }
    static int signal(int s){
        return ++s;
    }

    static void producer(){
        mutex=wait(mutex);
        full=signal(full);
        empty=wait(empty);
        System.out.println("\nProducer produce an item : "+ ++x);
        mutex=signal(mutex);
    }
    static void consumer(){
        mutex=wait(mutex);
        full=wait(full);
        empty=signal(empty);
        System.out.println("\nConsumer consumed item : "+x--);
        mutex=signal(mutex);
    }
}
