package theJEElife;

import java.util.Scanner;

public class JEEAdvanced {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t= sc.nextInt();
        while(t-->0)
        {
            int n= sc.nextInt();
            int[] arr=new int[n];
            int es=0;
            int os=0;

            for(int i=0;i<n;i++)
            {
                int j=sc.nextInt();
                if(i%2==0)
                    es=es+j;
                else
                    os=os+j;
            }
            if(os==es)
                System.out.println(0);
            else
            {
                System.out.println(es-os);
            }
        }
    }
}
