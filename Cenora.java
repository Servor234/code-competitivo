import java.util.Scanner;

public class Cenora{
    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);

        int cases=0, size1,size2;

        cases= lei.nextInt();

        while(cases!=0){
        size1 = lei.nextInt();
        size2 = lei.nextInt();
            
        int[] arr = new int[size1], arr2 = new int [size2+1];

        for(int i=0;i<size1;i++){
            arr[i]= lei.nextInt();
            if(arr[i]%2==0 || arr[i]==1){
                arr2[arr[i]]++;
            }else{
            arr2[arr[i]/2]++;
            arr2[arr[i]%2]++;
            }
            System.out.printf("%d\n", arr2[arr[i]]);
        }

        for(int i=0;i<size2;i++){
            System.out.printf("%d ", arr2[arr[i]]);
        }
        System.out.printf("\n");

        int min=10000000;

        for(int i=0;i<size2;i++){
            if(arr2[i]<min){
                min=arr2[i];
            }
        }

        System.out.printf("%d\n", min);
        
        cases--;
        }
        lei.close();
        
    }
}