#include <iostream>


class Rectangle{

public:
    
    Rectangle (float date_x, float date_y) {
        x = date_x;
        y = date_y;
    }
    void message (){
        std::cout<<"class Rectangle is working"<<std::endl;;
    }
    int get_x(){
        return x;
    }

private:
    float x;
    float y;

protected:
   
};


