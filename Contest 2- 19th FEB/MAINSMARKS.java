package theJEElife;

import java.util.Scanner;

public class MAINSMARKS {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t= sc.nextInt();
        while(t-->0)
        {
            int n= sc.nextInt();// taking size of
            int c=0;
            int w=0;
            int u=0;
            for(int i=0;i<n;i++) {
                char ch = sc.next().charAt(0);
                if (ch == 'C')
                    c++;
                else if (ch == 'W')
                    w++;
                else if (ch == 'U')
                    u++;
            }
                System.out.println(4*c+0-w);
                System.out.println(c+" "+w+" "+u);


        }
    }
}
