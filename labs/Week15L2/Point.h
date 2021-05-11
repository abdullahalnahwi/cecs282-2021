#ifndef Point_hpp
#define Point_hpp
#include <stdio.h>

 

class Point{

private:

    int x, y;

public:

    Point();

    Point(int, int);

    void setX(int);

    int get();

    void outs() const;

   

};

 

#endif /* Point_hpp */

 
