package theJEElife;

import java.util.Scanner;

public class ORGANICCHEM {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t= sc.nextInt();
        while(t-->0)
        {
            int c=sc.nextInt();//input of number of carbon atoms
            int h=sc.nextInt();//input of number of hydrogen atoms
            int o=sc.nextInt();//input of number of oxygen atoms
            System.out.println(12*c+1*h+16*o);//printing the total mass as per the given atomic mass
        }
    }
}
