package HaiMuoiBaiJavaCoBan;
import java.util.Scanner;
public class bai5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String MSSV;
        System.out.println("Nhap ma so sinh vien: ");
        MSSV = sc.nextLine();
        if (MSSV.matches("B\\d{7}")) {
            System.out.println("Phu hop");
        } else {
            System.out.println("Khong phu hop");
     
        }
        sc.close();
    }
    
}
