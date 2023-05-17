package TITV;

public class bai31_HieuRoHonVePhuongThucJava {
    private String tenLoaiCaPhe;
    private double giaTien1KG; //Khai bao cac bien
    private double khoiLuong;
    public bai31_HieuRoHonVePhuongThucJava(String ten, double gia, double kl){
        this.tenLoaiCaPhe = ten;
        this.giaTien1KG = gia; //Gan cac bien 
        this.khoiLuong = kl;
    }
    public double tinhTongTien() {
        return this.giaTien1KG * this.khoiLuong;
    }
    public boolean kiemTraKhoiLuong(double kl){
        return this.khoiLuong > kl;
    }
    public boolean kiemTraGiaTen(){
        return this.tinhTongTien() > 500;
    }
    public double giamGia(double x){
        if(this.tinhTongTien()>500){
            return (x/100)*this.tinhTongTien();
        }
        else return 0;
    }
    public double soTienSauKhiGiam(double x){
        return this.tinhTongTien()-this.giamGia(x);
    }
    public static void main(String[] args) { // goi ham main
        bai31_HieuRoHonVePhuongThucJava hd = new bai31_HieuRoHonVePhuongThucJava("G7", 100, 1);
        bai31_HieuRoHonVePhuongThucJava hd2 = new bai31_HieuRoHonVePhuongThucJava("G7", 150, 100);
        System.out.println("Tong tien = "+hd.tinhTongTien());
        System.out.println("Tong tien hd2 = "+hd2.tinhTongTien());
        System.out.println("Kiem tra khoi luong lon hon 2kg: "+hd.kiemTraKhoiLuong(2));
        System.out.println("Kiem tra so tien lon hon 500k: "+hd.kiemTraGiaTen());
        System.out.println("So tien duoc giam gia cua hd: "+hd.giamGia(10));
        System.out.println("So tien duoc giam gia cua hd2: "+hd2.giamGia(10));
        System.out.println("So tien sau khi duoc giam cua hd: "+hd.soTienSauKhiGiam(10));
        System.out.println("So tien sau khi duoc giam cua hd: "+hd2.soTienSauKhiGiam(10));
    }
}
