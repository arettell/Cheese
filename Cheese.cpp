// Cheese.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Declaring numbers we need for this program.
static int cheeseproduced = 0;
const float containersize = 2.76;
const float containercost = 4.12;
const float profit = 1.45;



int main()
{
    // for making the border at the start with the title
    cout << setfill('*') << setw(50) << '*' << endl;
    cout << setfill('*') << setw(11) << '*';
    cout << "It's not easy being cheesy";
    cout << setfill('*') << setw(11) << '*' << endl;
    cout << setfill('*') << setw(50) << '*' << endl;

    // getting input from the user of the program
    cout << "Please enter the total number of kilograms of cheese produced : ";
    cin >> cheeseproduced;

    // calculate the different answers we will need to output to the user.
    const float totalcontainers = cheeseproduced / containersize;
    float totalcost = round(totalcontainers) * containercost;
    float totalprofit = round(totalcontainers) * profit;

    
    
    
    
    
    
    // outputting the results to the user. Using setw to make sure everything is even and setfill for what to use in the empty spaces. 
    // fixed and setprecision are being used to format the data to the correct length
    cout << setfill('.') << setw(20) << left << "The number of containers to hold the cheese is: " << setw(59) << right << fixed << setprecision(0) << round(totalcontainers) << endl;

    cout << setw(20) << left << "the cost producing: " << fixed << setprecision(0) << round(totalcontainers) << " container(s) of cheese is " << setw(57) << right << fixed << setprecision(2) << totalcost << endl;

    cout << setw(20) << left << "The profit from producing " << fixed << setprecision(2) << round(totalcontainers) << " containers of cheese is " << setw(50) << right << totalprofit;

    // This is the way I could get it to work. When trying to put it into a string like in your example numbers like totancontainers would add numbers at the end of itself.
    // for example instead of 132 it would print 132.00000 and I wasnt sure how to fix this because I cant fix numbers that were converted to a string anymore and it wouldn't do this in any other scenario.
    // IF you could I would appreciate it if you could clean this up a little and show me specifically where I could make things more efficient and why for my own learning purposes.
}

