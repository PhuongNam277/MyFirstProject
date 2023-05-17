package TITV;
public class bai30_Tao_1_Class {
    private int day; int year; int month;
public bai30_Tao_1_Class (int d, int m, int y) {
    this.day = d;
    this.month = m;
    this.year = y;
}
 public void PrintDate(){
        System.out.println("Day: "+this.day);
        System.out.println("Month: "+this.month);
        System.out.println("Year: "+this.year);
        System.out.println("Date: "+this.day+"/"+this.month+"/"+this.year);
}
public class Main{
    public static void main(String[] args) {
        bai30_Tao_1_Class md = new bai30_Tao_1_Class(25, 12, 2030);
        md.PrintDate();
    }
} 
}
    
