import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int beers = 200;
		int wines = 300;
		int beersD = 0;
		int beersO = 0;
		int winesD = 0;
		int winesO = 0;
		
		while(true){
		    
		    String in = input.nextLine();
		    
		    if(in.equals("END")){
		          break;
		    }
		    
		    String[] inputArr = in.split(": ");
		    int cnt;
		    
		    try{
		         cnt = Integer.parseInt(inputArr[1]);
		    }
		    catch(NumberFormatException e){
		        System.out.println("Sorry this is not number!");
		        cnt = 0;
		    }
		   
		    
		    if(inputArr[0].equals("Beers")){
		        beers += cnt;
		        if(cnt < 0)
		            beersO++;
		        else
		            beersD++;
		    }
		    else if(inputArr[0].equals("Wines")){
		        wines += cnt;
		        if(cnt < 0)
		            winesO++;
		        else
		            winesD++;
		    }
		    else{
		        System.out.println("Invalid input");
		    }
		}
		
		System.out.println("Wines: " + wines);
		System.out.println("Deliveries: " + winesD);
		System.out.println("Orders: " + winesO);
		System.out.println("Beers: " + beers);
		System.out.println("Deliveries: " + beersD);
		System.out.println("Orders: " + beersO);
	}
}
