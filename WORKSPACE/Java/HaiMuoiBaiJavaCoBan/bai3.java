package HaiMuoiBaiJavaCoBan;

import java.util.Scanner;

public class bai3 {
    public static void main(String[] args) {
        Scanner nhap = new Scanner(System.in);
        float a,b,c;
        System.out.println("Nhap a,b,c: ");
        a = nhap.nextFloat();b = nhap.nextFloat();c = nhap.nextFloat();
        if (a+b>c&&a+c>b&&b+c>a) {
            System.out.println("Day la 1 tam giac");
        } else {
            System.out.println("Day khong phai la tam giac");
        }
        nhap.close();
    }
}
