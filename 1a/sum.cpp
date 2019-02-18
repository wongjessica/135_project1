/*
Jessica Wong

This program outputs the sum of all the numbers in the text file.
*/

#include <iostream>

int main() { //the main function

    int sum = 0; //initializes the sum starting at 0
    int numbers; //text file input

    while(std::cin >> numbers) { //while the text file is the input

        sum += numbers; //sums up all of the numbers

    }

    std::cout << sum << std::endl; //outputs sum of numbers in the txt file

    return 0; //too make sure the code worked correctly
}
