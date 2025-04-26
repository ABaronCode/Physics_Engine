#include "Header.hpp"

#include <iostream>
#include <string>

using namespace std;

int main () {
    cout<<"Hello World"<<endl;

    string message = referencedMethod();

    cout << message << endl;

    int aWholeNumber = 4;
    float aDecimalPlus = 4.03;
    double aDecimal = 3.4;
    
    //is there type casting? YES!
    int checkCast = aDecimal;
    //cout << checkCast << endl;

    //also DO WHILE exists
    while(checkCast < 5) {
        //cout << checkCast << endl;
        checkCast++;
    }
    //for loops
    for (int i = 0; i < 5; i++) {
        //cout << i << endl;
    }

    //arrays are part of the initialization of variables
    int lotsOfNumbers[] = {0,1,2,3};
    for(int printing : lotsOfNumbers) {
        cout << printing << endl;
    }

    //other variables include int, double, char, string, bool, float etc...

    //LETS DO SOME MATH and building
    //First thing we need to build a 2-D enviroment for our physics drop!


    return 0;


    //start of building an enviroment to calculate postion of an object within a 2-D space

    //I should account for 3 structs 1-enviorment coor, 2-object dimensions, 3-object position
    //




    //define the struct to describe the postion, this will be useful if I need to account for multiple obj
    struct Position {
        int xCor;
        int yCor;
        //int zCor;//if I want to expand to 3-D enviroment
    };

    //define space
    struct TwoDimension {
        int xMax;
        int yMax;
    };

    //define the struct for the object that is falling
    struct Object {
        std::string objectType;
        int currentXCor;
        int currentYCor;
        int lengthObj;
        int heightObj;
        int area;
        int mass = 1;//assume that mass is 1 for this simple 
        double currentV;
        double currentA;
    };

    //TwoDimension workSpace = createEnv();
    
}