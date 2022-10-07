#include<stdio.h>
main(){
    int initial,final,a,b,c,m,n;
    printf("Enter the range in which you want to search for Pythagorean Triplets:\nInitial: ");
    scanf("%d",&initial);	
    printf("\nFinal: ");
    scanf("%d",&final);
    printf("The Pythogorean Triplets in the given range are as follows:\n____________________________________________________________\n");
    for(m=initial;m<=final;m++){
        for(n=initial;n<=final;n++){
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            if(a<=final&&b<=final&&c<=final&&a>=initial&&b>=initial&&c>=initial){
                printf("%d , %d , %d\n",a,b,c); 
            }
        }
    }
}

