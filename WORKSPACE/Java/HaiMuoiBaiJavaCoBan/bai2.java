package HaiMuoiBaiJavaCoBan;

import java.util.Scanner;

public class bai2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap a = ");
        int a = sc.nextInt();
        switch (a) {
            case 1:
                System.out.println("Mot");
                break;
                case 2:
                System.out.println("Hai");
                break;
                case 3:
                System.out.println("Ba");
                break;
                case 4:
                System.out.println("Bon");
                break;
                case 5:
                System.out.println("Nam");
                break;
                case 6:
                System.out.println("Sau");
                break;
                case 7:
                System.out.println("Bay");
                break;
                case 8:
                System.out.println("Tam");
                break;
                case 9:
                System.out.println("Chin");
                break;
                case 10:
                System.out.println("Muoi");
                break;
            default:
                System.out.println("ERROR");
                break;
        }
        sc.close();
    }
}
