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
     square myrect, mysecondrect; //defining the "variable"
     myrect.set_value(5, 70);
     mysecondrect.set_value(8934404, 4513453);
     std::cout << myrect.area() << std::endl;
     std::cout << mysecondrect.area() << std::endl;
     return 0;
}
