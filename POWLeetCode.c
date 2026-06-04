double myPow(double a, long int b){
    double c=1;
    if(b>0){
    while(b>0){
        if(b==1 || b%2==1){
            c=c*a;
            b--;
        }else{
        a=a*a;
        b/=2;
        }
    }
    return c;
    }else{
        b=-b;
    while(b>0){
        if(b%2!=0){
            c*=a;
            b--;
        }else{
            a*=a;
            b/=2;
        }
    }
    return 1/c;
    }
}
