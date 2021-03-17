#include <iostream>
using namespace std;

int main()  {
   	char **s = new char*;        //truy cap vung nho khong xac dinh
   	char foo[] = "Hello World";
   	*s = foo;
   	printf("s is %s\n",*s);       //in ra dia chi
   	s[0] = foo;
   	printf("s[0] is %s\n",s[0]);
	system("pause");
   	return(0);
	}