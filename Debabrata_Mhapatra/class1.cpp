#include <stdio.h>
int main(){

    //Short circuit
  
    // int a = 3,  d = 2, m;
	// m = a++ || --d;  // 3 ||  
    // // //m=1
    // // //a =4
    // // //d=2
    // // //m=1
	// printf("%d %d %d\n",a , d, m);

   //

    // int x=2,y=1,m;
    // m=x++ && --y;  // 1 && 1
    // printf("%d\n",m);
    // printf("%d %d\n",x,y);


    // sizeof()

    // int datatype ->>4 bytes
    // float datatype ->>8 bytes
    // printf("%d\n",sizeof(5));
    // printf("%d\n",sizeof(5.0));



    int a=4;
    // printf("%d\n",sizeof(++a));
    ++a;
    printf("%d\n", a);


    //conditional operator


    // int x;
    // x = 5 > 8 ? 10 : 1 ;
    // printf("Value of x:%d\n", x);

\

    // int x;
    // x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    // printf("Value of x:%d\n", x);



    //bitwise compliment

    // unsigned int num = -4;
	// printf("%d", ~num);
	
    //left shift
    //“x” with an integer “y” denoted as ‘(x<<y)’ is equivalent to multiplying x with 2^y (2 raised to power y)
    
    // unsigned char a = 5;  
    // printf("a<<1 = %d\n", a<<1);


    //right shift
    //“x” with an integer “y” denoted as ‘(x>>y)‘ is equivalent to dividing x with 2^y
    // a = 5(00000101)
    // unsigned char a = 16;
    // printf("%d\n",a>>2);

    //math.h


    return 0;
}