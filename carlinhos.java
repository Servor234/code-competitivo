import java.util.*;

public class carlinhos{
    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);

        int num, tests;

        tests=lei.nextInt();

        while(tests!=0){
            num=lei.nextInt();

            int min=-1,max=num+1;

            int[] vec = new int[num];

            for(int i=0; i<num;i++){
                vec[i]=lei.nextInt();
                if(min==-1 && vec[i]!=0 && vec[i]==-1){
                    min=i;
                    
                }
            }

            tests--;
        }
lei.close();
    }
}