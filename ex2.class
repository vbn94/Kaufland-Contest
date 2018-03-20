import java.util.Scanner;

public class Main
{
    
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String in = input.nextLine();
		
		String[] inputArr = in.split(",");
		
		int r1 = Integer.parseInt(inputArr[0]);
		int h1 = Integer.parseInt(inputArr[1]);
		int r2 = Integer.parseInt(inputArr[2]);
		int h2 = Integer.parseInt(inputArr[3]);
		
		double v1 = (Math.PI * r1 * r1 * h1) / 1000;
		double v2 = (Math.PI * r2 * r2 * h2) / 1000;
		
		if(Math.abs(v1 - v2) < 0.001)
		    System.out.printf("V1 = V2 = %.3f", v1);
		else if
		    System.out.printf("V = %.3f", v1 > v2 ? v1 : v2);
		    
	}
}
