package letsdoit;

import java.util.Scanner;

public class COWMOOS {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        double m=sc.nextDouble(); //Duration between two moos
        double h=sc.nextDouble(); //duration of the class
        h=h*60; //hours converted into minutes.
        int times=(int)(h/m); //no of times = total time divided by duration
        // since it is stored on integer data type so it will store the floor value which will manage the fact that
        // number of moos cannot be frational.
        System.out.println(times+1); // one is added as class starts with a moo.

    }
}
