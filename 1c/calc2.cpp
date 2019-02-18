/*
Author: Jessica Wong
Course: CSCI-135
Instructor: Zamansky / Maryash
Assignment: Project1C
The program calc2.cpp that outputs the solution, a mathematical formula composed of + and -, along with the other lines of formulas following.
*/

#include <iostream>
int main() {
	
char symbol;
int number = 0;
int total = 0;
int count = 0;  		
    while(std::cin >> number >> symbol){  //reads text input until there's no more
	
    	switch (count){ 
		
   		case 0:
   			total = number;
   			count = 3;
    		break;
			
    	case 1: // if counter==1 then add the number to total
    		total += number; 
    		count = 3;
    		break;
			
    	case 2:
    		total -= number;
    		count = 3;
    		break;
			
    	default:
    		std::cout << "error 404" << std::endl; //if there is an arbitrary symbol
			break;	
    	}

    	if(symbol == 43){ // addition ascii
    		count = 1;
    	}
 		
    	else if(symbol == 45){ //subtraction ascii
    		count = 2;
    	}

    	else if (symbol == 59){ //semicolon ascii
    		std::cout << total << std::endl;
    		count = 0;
    	}	
	}
}
