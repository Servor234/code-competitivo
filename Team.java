import java.util.*;

public class Team {
    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);

        int[] Jorge = new int[3];

        int cases=lei.nextInt();

        int  total=0;

        while(cases!=0){
            int sum=0;

            for(int i=0;i<3;i++){
                Jorge[i]=lei.nextInt();

                if(Jorge[i]==1){
                    sum++;
                }
            }

            if(sum>=2){
                total++;
            }
            
            cases--;
        }

        System.out.printf("%d\n", total);

        lei.close();

    }
}
