#include<iostream>

class square
{
     int width, height;
     public:
     void set_value (int, int);
     int area()
     {
          return width * height;
     }
};

void square::set_value(int x, int y)
{
     width = x;
     height = y;
}

int main()
{
     square myrect; //defining the "variable"
     myrect.set_value(5, 70);
     std::cout << myrect.area() << std::endl;
     return 0;
}
