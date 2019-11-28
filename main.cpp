#include <iostream>

using namespace std;


class Shape
{
    public:

    int angle;
    int height;
    int width;


    Shape(int _angle,  int _height, int _width): angle(_angle),height(_height),width(_width)
    {
        cout << "constructor SHAPE"  << endl;
    }

    virtual ~Shape()
    {
        cout << "dectruct SHAPE" << endl;
    }

    virtual int getAera() = 0;
};

class Triangule : public Shape
{
    public:
    Triangule(int _height, int _width):Shape(3, _height, _width)
    {
        cout << "creat TRIANGLE" << endl;
    }

    ~Triangule(){
        cout << "desctruct Triangle" << endl;
    };

    int getAera()
    {
        return height * width / 2;
    }
};

class Rectangle : public Shape
{
    public:
    Rectangle(int _height, int _width):Shape(4, _height, _width)
    {
        cout << "creat RECTANGLE" << endl;
    }

    ~Rectangle()
    {
        cout << "desctruct Rectangle" << endl;
    }


    int getAera()
    {
        return height * width;
    }
};

void displayAera(Shape& shape)
{
    cout << shape.getAera() << endl;
}


int main()
{
    Triangule triangule(10,5);
    Rectangle rectangle(10 ,5);

    //cout << triangule.getAera() << endl;
    //cout << rectangle.getAera() << endl;

    displayAera(triangule);

    //cout << "Hello world!" << endl;
    return 0;
}
