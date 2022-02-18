package theJEElife;

import java.util.Scanner;

public class ALLOTROPES {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t= sc.nextInt();
        while(t-->0)
        {
            int n= sc.nextInt();
            if(n%2==0)
                System.out.println("SORRY");
            else
            {
                int a = (n / 2) + 1;
                int b = n - a;
                int cnt = 1;
                for (int i = 1; i <= a; i++)
                {
                    for (int j = (a - 1); j >= i; j--)
                    {
                        System.out.print("  ");
                    }
                    for (int j = 1; j <= (2 * i - 1); j++)
                    {
                        if (cnt % 2 == 0)
                        {
                            System.out.print("* ");
                        }
                        else
                        {
                            System.out.print("& ");
                        }
                        cnt++;
                    }
                    System.out.println("");
                }

                for (int i = b; i >= 1; i--)
                {
                    for (int j = b; j >= i; j--)
                    {
                        System.out.print("  ");
                    }
                    for (int j = 1; j <= (2 * i - 1); j++)
                    {
                        if (cnt % 2 == 0)
                        {
                            System.out.print("* ");
                        }
                        else
                        {
                            System.out.print("& ");
                        }
                        cnt++;
                    }
                    System.out.println("");
                }

            }
        }
    }
}
