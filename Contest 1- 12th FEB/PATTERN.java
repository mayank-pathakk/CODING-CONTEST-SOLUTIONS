package letsdoit;
import java.util.*;
public class PATTERN {
    public static void main(String[] args) {

        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n=sc.nextInt();
            for(int i=1;i<=n;i++)
            {
                if(i==1||i==n)
                    for(int j=1;j<=n;j++)
                    {
                        System.out.print("& ");
                    }
                else
                {
                    for(int j=1;j<=n;j++)
                    {
                        if(j==1||j==n)
                            System.out.print("& ");
                        else
                            System.out.print("  ");
                    }
                }
                System.out.println(" ");
                for(int k=1;k<=i;k++)
                    System.out.print(" ");
            }
        }
    }
}
