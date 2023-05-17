package TITV;

import java.util.Scanner;

public class bai28_GioiThieuVeMang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int mang[];
        mang = new int[10];
        for (int i = 0; i < mang.length; i++) {
            System.out.println("Nhap phan tu thu " + i + ": ");
            mang[i] = sc.nextInt();
        }
        int tong = 0;
        for (int i = 0; i < mang.length; i++) {
            tong += mang[i];
        }
        System.out.println("Tong = "+tong);
        sc.close();
    }
}
