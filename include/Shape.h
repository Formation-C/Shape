#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    int angles;
    int height;
    int lenth;


    Shape(
          int _angle,  int _height, int _lenth):
              angle(_angle),height(_heght),lenth(_lenth){
              }


    public:
        Shape();
        virtual ~Shape();

        int Getangles() { return angles; }
        void Setangles(int val) { angles = val; }

    protected:

    private:
        int angles;
};

#endif // SHAPE_H
