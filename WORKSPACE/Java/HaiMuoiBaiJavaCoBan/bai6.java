package HaiMuoiBaiJavaCoBan;

import java.util.Scanner;

public class bai6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap n = ");
        int n = sc.nextInt(); int tong = 0;
        for (int i = 1; i <= n; i++) {
            tong +=i;
        }
        System.out.println("Tong = "+tong);
        sc.close();
    }
}
