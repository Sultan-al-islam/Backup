package method;

public class task {
    int add,multi;
    public int sum(int a,int b,int c)
    {
        return add= a+b+c;
    }
    public int sub(int a,int b)
    {
        return multi =a-b;
    }
    public void max(int a,int b,int c)
    {
        if(a>b && a>c)
        System.out.println("Max is "+a);
        else if(b>a && b>c)
        System.out.println("Max is "+b );
        else
        System.out.println("Max is " +c  ) ;
    }
    public void min(int a, int b, int c )
    {
         if(a<b && a<c)
        System.out.println("Min is "+a);
        else if(b<a && b<c)
        System.out.println("Min is "+b );
        else
        System.out.println("Min is " +c  ) ;

    }
    public void Even(int a)
    {
       if(a%2==0) System.out.println("Even"); 
    }
 public void odd(int a)
    {
       if(a%2==1) System.out.println("odd"); 
    }

    
}
