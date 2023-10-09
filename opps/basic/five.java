import java.util.Scanner;

public class five {
    public static void main(String[] args) {
        String s1,s2;
        Scanner input = new Scanner(System.in) ;
        s1=input.nextLine();
         s2=input.nextLine();
         int flag =0;
         for(int i=0; i<s1.length();i++)
         {
            for(int j=0;j<s2.length();j++)
            {
            if(s1.charAt(i)==s2.charAt(j))
            {
                flag =1;
            }
            }
            

        
         }
         if(flag==0)
         {
            System.out.println("Not sub string");
         }
         else
         {
            System.out.println("Sub string");
         }
         input.close();
    }
}
