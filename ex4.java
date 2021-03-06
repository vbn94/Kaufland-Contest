import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		String in = input.nextLine();
		String[] inArr = in.split(", ");

		int n = Integer.parseInt(inArr[0]);
		int m = Integer.parseInt(inArr[1]);

		int[][] field = new int[n][m];

		for(int i = 0; i < n; i++)
		    for(int j = 0; j < m; j++)
			field[i][j] = 100;

		while (true){
		    in = input.nextLine();

		    if(in.equals("GAME OVER")){
			break;
		    }

		    inArr = in.split(", ");
		    int x = Integer.parseInt(inArr[0]);
		    int y = Integer.parseInt(inArr[1]);
		    int damage = Integer.parseInt(inArr[2]);


		   /* field[x-1][y-1] -= 10;
		    field[x-1][y] -= 10;
		    field[x-1][y+1] -= 10;
		    field[x][y-1] -= 10;
		    field[x][y] -= damage;
		    field[x][y+1] -= 10;
		    field[x+1][y-1] -= 10;
		    field[x+1][y] -= 10;
		    field[x+1][y+1] -= 10;*/

		    for(int i = -1; i >= 1; i++){
			for(int j = -1; j >= 1; j++){
			    if(i == 0 && j == 0){
			      try{
				field[x+i][y+j] -= damage;
				if(field[x+i][y+j] < 0)
					field[x+i][y+j] = 0;
			       }
			       catch(ArrayIndexOutOfBoundsException e){
				   continue;
			       }
			    }
			    else{
			       try{
				field[x+i][y+j] -= 10;
				if(field[x+i][y+j] < 0)
					field[x+i][y+j] = 0;
			       }
			       catch(ArrayIndexOutOfBoundsException e){
				   continue;
			       }
			    }
			}
		    }


		}

		for(int i = 0; i < n; i++){
		    for(int j = 0; j < m; j++){
			System.out.print(field[i][j] + " ");
		    }
		    System.out.println();
		}
	}
}
