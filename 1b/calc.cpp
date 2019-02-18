/*
Author: Jessica Wong
Course: CSCI-135
Instructor: Zamansky / Maryash
Assignment: Project1B
The program calc.cpp that outputs the solution, a mathematical formula composed of + and -.
*/
#include <iostream>
int main() { //the main function

    char symbol;
    int total;
    int number;

    std::cin >> total; //the first value is set as total

    while(std::cin>>symbol>>number) { //while there is an operator + value
        switch(symbol) { 
            case '-':
                total-=number;
                break;
            case '+':
                total+=number;
                break;
            default:
                std::cout<<"Error"<<symbol<<std::endl; //if there is an arbitrary symbol
                break;
        }
    }

    std::cout << total << '\n';



    return 0; //to assure the code worked correctly
}
