#ifndef DYNAMICPOINTARRAY_H
#define DYNAMICPOINTARRAY_H


class DynamicPointArray
{
    public:
        DynamicPointArray();
        DynamicPointArray(int _x, int _y);

        void print() const;
        void setPoint(int _x, int _y);
        virtual ~DynamicPointArray();

    private:
        int x; int y;
};

#endif // DYNAMICPOINTARRAY_H


/***

class DynamicPointArray{

      public:
                DyPoArr();
                DyPoarr(Point arr[]; int size);









}








****/
