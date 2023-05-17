package HaiMuoiBaiJavaCoBan;

import java.util.Scanner;

public class bai1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap a = ");
        int soA = sc.nextInt();
        if (soA>0) {
            System.out.println("So nguyen duong");
        } else {
            System.out.println("So nguyen am");
        }
        sc.close();
    }
}
