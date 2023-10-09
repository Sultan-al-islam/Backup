import java.util.Scanner;

public class first {
    public static void main(String[] args) 
    {
        String a,b;
        Scanner input = new Scanner(System.in) ;
        System.out.print("Enter your first name : ");
        a=input.nextLine();
        System.out.print("Enter your last name : ");
        b=input.nextLine();
        System.out.print(a);
        System.out.println(" "+b);
        input.close();

    }

}
