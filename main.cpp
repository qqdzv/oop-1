#include <iostream>
#include "classes.hpp"


int main(){
    float x;
    float y;
    std::cout<<"введите длину прямоугольника"<<std::endl;
    std::cin>>x;
    std::cout<<"введите ширину прямоугольника"<<std::endl;
    std::cin>>y;
    Rectangle object = Rectangle(x,y);
    std::cout<<"вашему объекту доступны методы"<<std::endl<<"get_perimeter() возвращает периметр"<<std::endl<<"get_square() возвращает площадь"<<std::endl<<"get_volume(height) возвращает объем параллелепипеда с заданным прямоугольником в основании и длиной height"<<std::endl;
    std::cout<<"периметр вашего объекта "<<object.get_perimeter()<<std::endl;
    std::cout<<"площадь вашего объекта "<<object.get_square()<<std::endl;
}