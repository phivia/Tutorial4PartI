/** \file Lab2.cpp
* \brief Drawing program
* \details Program that allows the user to draw
* \author Phoebe Zizirou
* \version 0.1
* \date 15/05/2021
* \copyright UNIC
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <cmath>

using namespace std;

//Horizontal Line Function Prototype

void drawHorizontalLine(const int length, const char ch);

//Vertical Line Funtion Prototype

void drawVerticalLine(const int height, const char ch);

//Square Function Prototype

void drawSquare(const int size, const char ch);

//Rectangle Function Prototype

void drawRectangle(const int length, const int height, const char ch);

//Menu Function Prototype

void showMenu();

/**
* Function <code>main</code> intializes values according
* to arguments
*<BR>
* @return 0, returns 0 to show that the program runs with no errors
*/

int main()
{
    int choice, size;
    char symbol;
    int height, length;

    do
    {
        showMenu();
        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:

            //Asking the user to enter values for length and symbol

            cout << "Enter length: ";
            cin >> size;

            cout << endl;

            cout << "Enter symbol: ";
            cin >> symbol;

            //Calling drawHorizontalLine Function

            drawHorizontalLine(size, symbol);

        case 2:
            drawVerticalLine(height, symbol);

        case 3:
            drawSquare(size, symbol);

        case 4:
            drawRectangle(length, height, symbol);

        default:
            cerr << "Wrong Choice!" << endl;
        }

    } while (choice != 5);

    cout << "Thank you, bye :)";

    return 0;
}

/**
* Function <code>showMenu</code> shows the menu choices according
* to arguments
*<BR>
*/

void showMenu()
{
    cout << "1. Draw a horizontal line" << endl;
    cout << "2. Draw a vertical line" << endl;
    cout << "3. Draw a square" << endl;
    cout << "4. Draw a rectangle" << endl;
    cout << "5. Exit" << endl;

    cout << endl;
    cout << "Enter your choice:";
}

/**
* Function <code>drawHorizontalLine</code> draws horizontal line according
* to arguments
*<BR>
* @param length The length of line to be drawn, must be greater than 0
* @param ch The symbol used to draw the line
*/

void drawHorizontalLine(const int length, const char ch)
{
    assert(length > 0);

    cout << "I am drawHorizalLine" << endl;

    int i;

    for (i = 0; i < length; i++)
        cout << ch;

    cout << endl;
}


/**
* Function <code>drawVerticalLine</code> draws vertical line according
* to arguments
*<BR>
* @param height The height of line to be drawn, must be greater than 0
* @param ch The symbol used to draw the line
*/

void drawVerticalLine(const int height, const char ch)
{
    assert(height > 0);

    cout << "I am drawVerticalLine" << endl;

    int i;

    for (i = 0; i < height; i++)
        cout << ch << endl;

    cout << endl;
}

/**
* Function <code>drawSquare</code> draws a square according
* to arguments
*<BR>
* @param size The size of square to be drawn, must be greater than 0
* @param ch The symbol used to draw the square
*/
void drawSquare(const int size, const char ch)
{
    assert(size > 0);

    cout << "I am drawSquare" << endl;

    int i, j;
    char arr[100][100];

    //Filling the columns of square

    for (i = 0; i < size; i++)
    {
        arr[i][0] = ch;
        arr[i][size - 1] = ch;
    }

    //Filling the rows of square

    for (j = 1; j < size - 1; j++)
    {
        arr[0][j] = ch;
        arr[size - 1][j] = ch;
    }

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            cout << arr[i][j];
}

/**
* Function <code>drawRectangle</code> draws horizontal a rectangle according
* to arguments
*<BR>
* @param length The length of the rectangle to be drawn, must be greater than 0
* @param height The height of the rectangle to be drawn, must be greater than 0
* @param ch The symbol used to draw the line
*/

void drawRectangle(const int length, const int height, const char ch)
{
    assert(length > 0);
    assert(height > 0);

    cout << "I am drawRectangle" << endl;

    int i, j;
    char arr[100][100];

    //Filling the columns of the Rectangle

    for (i = 0; i < height; i++)
    {
        arr[i][0] = ch;
        arr[i][length - 1] = ch;
    }

    //Filling the rows of the Rectangle

    for (j = 0; j < height; j++)
    {
        arr[0][j] = ch;
        arr[height - 1][j] = ch;
    }

    for (i = 0; i < length; i++)
        for (j = 0; j < height; j++)
            cout << arr[i][j];
}