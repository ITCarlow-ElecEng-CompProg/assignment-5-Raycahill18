
/** \ Ray Cahill
 *
 * \ Lab 5
 * \ 25/10/1990
 * \ Computer Programming
 *
 */  #include <iostream>
#include <math.h>
using namespace std;

/**< main function */
int main()
{
  /**< Variable Declerations */
    double arrayX[100] = {0};
    double arrayY[100] = {0};
    double sumX=0, sumY=0, sumXY=0;
    double xSQ=0, avgX=0, avgY=0, slope=0, c_intercept=0;

    int n=0, i=0;

   /**<  Do while loop to determine the size of the array */
    do
    {
        cout << "Enter value for n: ";
        cin >> n;
    }
    while ((n<=0) || ( n>100));

    /**< For loop to enter the X and Y values into the arrays */
    for(i=0; i<n; i++)
    {
        cout << "Enter x: ";
        cin >> arrayX[i];
        cout << "Enter y: ";
        cin >> arrayY[i];

    }
   /**< Gives a neat heading for the X and Y tables respectively */
    cout << "X Y Table" << endl;

    /**< For loop to calculate the values of the sum of x, the product of X*Y and the value of X squared */
    for(i=0; i<n; i++)
    {
        cout << arrayX[i] << " " << arrayY[i] << endl;
        sumX = sumX + arrayX[i];
        sumY = sumY + arrayY[i];
        sumXY = sumXY + arrayX[i] * arrayY[i];
        xSQ = xSQ + pow(arrayX[i], 2.0);
    }

    /**< Equation to calculate the average of X and Y */
    avgX = sumX / n;
    avgY = sumY / n;

    /**< Displays the results of ll the Equations to the user */
    cout << endl;
    cout << "sum of X: " << sumX << endl;
    cout << "Sum of Y: " << sumY << endl;
    cout << "Avg X: " << avgX << endl;
    cout << "Avg Y: " << avgY << endl;
    cout << "Product of XY: " << sumXY << endl;
    cout << "X squared is : " << xSQ << endl;

    /**< Equation used to calcualte the Slope and the c intetercept */
    slope = ((n*sumXY) - (sumX * sumY)) / ((n*xSQ) - (pow(sumX, 2.0)));
    c_intercept = avgY - (slope * avgX);

    /**< Displays the slope and intercept to the user */
    cout << "Slope: " << slope << endl;
    cout << "Point of interception: "<< c_intercept << endl;



    return 0;
}
