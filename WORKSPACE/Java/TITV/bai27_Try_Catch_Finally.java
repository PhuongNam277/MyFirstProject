package TITV;

import java.util.Scanner;

public class bai27_Try_Catch_Finally {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 0; int b = 0;
        try {
            System.out.println("Nhap a = ");
            a = sc.nextInt();
            System.out.println("Nhap b = ");
            b = sc.nextInt();
        } catch (Exception e) {
            System.out.println("Loi");
        }finally{
            System.out.println("Finally");
        }
        float tong = (float)a/b;
        System.out.println("Tong = "+tong);
        sc.close();

    }
}
