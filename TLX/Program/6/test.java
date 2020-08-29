import java.util.*;
public class test {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
		int i, j, a, b;
        System.out.print("Jumlah Baris : ");
        a = input.nextInt();
        System.out.print("Jumlah Kolom : ");
        b = input.nextInt();
		for (i = 0; i < a; i ++){
			for (j = b; j > 0; j--){
				if (j%4==0){
					System.out.print(" " + "-" + " ");
				}else{
					System.out.print(" " + j + " ");
				}
			}
			System.out.println();
		}
    }
}