package PROJECT_30_1_23;

import java.util.Scanner;

/**
 * banhdanem
 */
public class banhdanem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap n: ");
        int soBanhDa = sc.nextInt();
        int sodu = soBanhDa%9; int dem  = 0;
        int soLanRan = soBanhDa/9;
        if (sodu>0) {
            dem++;
        }
        soLanRan+=dem;
        System.out.println("So lan ran = " +soLanRan);
        sc.close();
    }
}