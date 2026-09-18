import java.util.*;

public class Size{
    public static void main(String[] args){
        Scanner lei = new Scanner(System.in);

        String a;

        int roun=0;

        roun= lei.nextInt();
        
        String buffer=lei.nextLine();

        while(roun!=0){
            a=lei.nextLine();

            if(a.length()>10){
                String b="";

                int num1,num2;

                if(a.length()%10==0 || a.length()%10==1){
                num1=a.length()/10-1;
                if(a.length()%10==0){
                    num2=(a.length()%10+8);
                }else{
                    num2=(a.length()%10+8);
                }
                }else{
                num1=a.length()/10;
                num2=(a.length()%10-2);
                }
                
                b+=a.charAt(0);
                
                if(num1!=0)
                b+=num1;

                b+=num2;
                b+=a.charAt(a.length()-1);
                
                System.out.printf("%s\n", b);
            }else{
                System.out.printf("%s\n", a);
            }

            roun--;
        }

        lei.close();

    }
}