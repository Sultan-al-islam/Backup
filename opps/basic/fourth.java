import java.util.Scanner;

public class fourth {
    public static void main(String[] args) {
         String a,b;
        Scanner input = new Scanner(System.in) ;
      
        a=input.nextLine();
        
        b=input.nextLine();
        if(a.equals(b))
        {
            System.out.println("Same");
        }
        else
        {
            System.out.println("NOT Same");
        }
        input.close();input.close();
    }  
}
