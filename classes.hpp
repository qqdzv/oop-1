#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>


class Rectangle{

public:

    Rectangle (float date_x = 0, float date_y = 0) {
        x = date_x;
        y = date_y;
    }

    void is_working(){
        std::cout<<"class Rectangle is working"<<std::endl;
    }
    int get_perimeter(){
        return (x+y)*2;
    }
    int get_square(){
        return x*y;
    }
private:
    float x;
    float y;

protected:
   
};

#endif