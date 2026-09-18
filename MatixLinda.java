import java.util.*;

public class MatixLinda {
    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);
        int[][] mat = new int[5][5];
        int posx=0, posy=0, movs=0;

        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                mat[i][j]=lei.nextInt();
                if(mat[i][j]==1){
                    posx=i;
                    posy=j;
                }
            }
        }

        if(posx>3){
            movs+=posx-3;
        }else{
            movs+=3-posx;
        }

        
        if(posy>3){
            movs+=posy-3;
        }else{
            movs+=3-posy;
        }

        System.out.printf("%d\n", movs);
        lei.close();
    }
}
