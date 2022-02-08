package letsdoit;
import java.util.*;
public class SEMERESULTS {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();//Test case inputs.
        while(t-->0)
        {
            int n=sc.nextInt();// Accepting the number of total students
            int ev=0;
            int od=0;
            for(int i=1;i<=n;i++)
            {
                int in=sc.nextInt();//Accepting marks of students
                if(in%2==0)
                    ev++;//counting the number of students with even marks
                else
                    od++;//counting the number of students with odd marks
            }
            if(ev>od)//if even>odd
            {
                System.out.println("EVEN");
                System.out.println(ev);
                System.out.println(ev%od);
            }
            else if(od>ev)//if odd>even
            {
                System.out.println("ODD");
                System.out.println(od);
                System.out.println(od%ev);
            }
            else//if they are equal
            {
                System.out.println("EQUAL");
            }
            /*
            Question can also be done with array
            by accepting all the numbers in an array and then traversing the array to count even and
            odd numbers.
             */
        }
    }
}
