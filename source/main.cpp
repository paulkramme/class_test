#include<iostream>

class square
{
     int width, height;
     public:
     square(int, int);
     int area()
     {
          return width * height;
     }
};

square::square(int a, int b) //constructor
{
     width = a;
     height = b;
}

int main()
{
     square myrect(4, 5983);
     square mysecondrect(454, 8539); //defining the "variable"
     std::cout << myrect.area() << std::endl;
     std::cout << mysecondrect.area() << std::endl;
     return 0;
}
