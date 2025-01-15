//Jenny Espiñeira Jan 14, 2025, COP2000
//Assignment 1 using var, int, & string
#include <iostream>
using namespace std;

int main()

{
    cout << "***************************\n";
    cout << "***************************\n";
    cout << "**  *     *          *   **\n";
    cout << "**      *  //\\    //\\    **\n";
    cout << "**  //\\   //  \\  //  \\   **\n";
    cout << "** //  \\ //    \\//    \\  **\n";
    cout << "**//           //      \\ **\n";
    cout << "**            //        \\**\n";
    cout << "***************************\n";
    cout << "**  Welcome to Gunter's  **\n**    Mountain Shop!     **\n";
    cout << "***************************\n";
    
    string shop_name; //variable declaration 
    int climbing_boots; 
    int pullovers;
    int gaiters;
    int cleats;
    
    climbing_boots = 59; //assigning value to a var
    pullovers = 10;
    gaiters = 12;
    cleats = 14;
    cout << "\nSale Items \t Sale Price\n\n";
    
    cout << "Hunter Climbing Boots   $" << climbing_boots;
    cout << "\nFleece Pullovers        $" << pullovers;
    cout << "\nSnow Gaiters            $" << gaiters;
    cout << "\nTraction Cleats         $" << cleats;
    cout << "\n\n***************************\n";
    cout << "***************************\n";

    return 0;

}