#include <iostream>
using namespace std;
void  what (  int  & a,    int   b,    int & c );
int  main() {

 

      int  x =  3 , y =  6 , z = 2 ;

 

      what ( x, y, z) ;

 

      cout << "\n x="  <<  x <<  " y="  <<  y  <<  " z="   <<   z ;

}

 

void  what (  int  & a,    int   b,    int & c ) {

 

     a = a - 2;

     b = b + 2;

     c++;

}