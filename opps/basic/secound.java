import java.util.Scanner;

public class secound {
    public static void main(String[] args) {
        String s;
        Scanner input = new Scanner(System.in) ;
        
        s=input.nextLine();
        for(int i=0;i<3;i++)
        {
            System.out.print(s.charAt(i));
        }
        System.out.println("p!");
        input.close();
     }
     
}
