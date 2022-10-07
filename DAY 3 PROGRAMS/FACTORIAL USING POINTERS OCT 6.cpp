# include<stdio.h>
int  main( )
{
int  num, fact=1 ;
int  *pn, *pf ;
printf(" Enter any Number : ") ;
scanf("%d ",& num) ;

pn = & num ;
pf = & fact ;

do
{
*pf = ( *pf ) * ( *pn ) ;
*pn = *pn - 1 ;
}while(  *pn > 0) ;
printf("\n Factorial of entred number is : %d ",*pf) ;
return ( 0 );
}

