package BTVN;

    public class test_bai_30{
        private String HoTen;
        private int tuoi;
        private String gioitinh;
    
    public test_bai_30 (String ht, int t, String gt ){
        this.HoTen = ht;
        this.tuoi = t;
        this.gioitinh = gt;
    }
    public void printProfile (){
        System.out.println("Ho va ten: "+this.HoTen);
        System.out.println("Tuoi: "+this.tuoi);
        System.out.println("Gioi tinh: "+this.gioitinh);
    }
    public class Main{
        public static void main(String[] args) {
            test_bai_30 test = new test_bai_30("Nguyen Phuong Nam", 19, "Nam");
            test.printProfile();
        }
    }
}


