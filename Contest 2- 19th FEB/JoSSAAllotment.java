package theJEElife;

import jdk.swing.interop.SwingInterOpUtils;

import java.util.Scanner;

public class JoSSAAllotment {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t= sc.nextInt();
        while(t-->0)
        {
            int p=sc.nextInt();
            int c=sc.nextInt();
            int m= sc.nextInt();
            int tm=p+c+m;
            if(tm>=260)
            {
                System.out.println("YES");
                System.out.println("Tier 1 IIT");
            }
            else if(tm>230)
            {
                System.out.println("YES");
                System.out.println("Tier 2 IIT");
            }
            else if(tm>210)
            {
                System.out.println("YES");
                System.out.println("Tier 1 NIT");
            }
            else if(tm>170)
            {
                System.out.println("YES");
                System.out.println("Tier 2 NIT");
            }
            else if(tm>140)
            {
                System.out.println("YES");
                System.out.println("IIIT");
            }
            else if(tm>100)
            {
                System.out.println("YES");
                System.out.println("GFTI");
            }
            else
            {
                System.out.println("NO");
            }

        }
    }
}
