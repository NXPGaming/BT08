#include <iostream>
using namespace std;

int main( )
{ 
   char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << sizeof((int*) cp) << " : " << (*cp) << endl;
	  //cout << sizeof((double*) cp) << " : " << (*cp) << endl;
   } 
   
   system("pause");
   return 0;
}
