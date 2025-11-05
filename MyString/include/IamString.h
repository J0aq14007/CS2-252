#ifndef IAMSTRING_H
#define IAMSTRING_H
#include <iostream>

class IamString
{
    public:
        IamString(char *data);
        int getSize()const;
        char* getData()const;

        void ToUpper();
        void ToLower();

        virtual ~IamString();

    private:
        int size; char*data;
};

#endif // IAMSTRING_H
