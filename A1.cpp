#include <iostream>
using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout<<&x;
}
void g(int yval)
{
   int y;
   // in địa chỉ của y tại đây
   cout<<&y;
}
int main()
{
   f(7);
   g(11);
   return 0;
} 
//Địa chỉ 2 biến x,y có thể trùng nhau vì khi ta gọi hàm f() thì khai báo biến x có 1 địa chỉ sau khi hàm f()
// được gọi xong thì địa chỉ biến x bị mất và tiếp tục lại gọi hàm g() thì khai báo biến y có thể trùng địa chỉ biến x của hàm f()