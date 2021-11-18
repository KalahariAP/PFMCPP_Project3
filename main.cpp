/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  

2) write the name of the primitive type you'll be using after each property in UDTs 1-4:
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            area in cm2 (int)
            brand (std::string)

3) Move the Thing 10 pseudo-code to after your Thing1-4 in the project.
*/

/*
Thing 10)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */




/*
Thing 1) Beach
5 properties:
    1) tourists (int)
    2) coastline (float)
    3) sunbeds (int)
    4) palmTree (int)
    5) lifeguardService (bool)
3 things it can do:
    1) change extension
    2) create dunes
    3) grow coconut trees
 */

/*
Thing 2) Restaurant
5 properties:
    1) table (int)
    2) barCounter (float)
    3) meals ()
    4) MichelinStar (bool)
    5) diners (int)
3 things it can do:
    1) offer happy hour
    2) feed
    3) reserve the right of admission
 */

/*
Thing 3) Museum
5 properties:
    1) paintsRoom (int)
    2) visitors (int)
    3) classicArt (bool)
    4) souvenirShop (bool) 
    5) sculptures (int)
3 things it can do:
    1) select artists
    2) charge entrance
    3) exhibit art
 */

/*
Thing 4) Robot
5 properties:
    1) processors (int)
    2) articulatedArms (bool)
    3) metal (float)
    4) viewers (int)
    5) microchips (int)
3 things it can do:
    1) replace a human
    2) calculate quickly
    3) make automated decisions
 */

/*
Thing 10) synthesizer
5 properties: 
    1) slider 
    2) knob 
    3) midi 
    4) keynote
    5) switch
3 things it can do:
    1) modify fiter
    2) play note
    3) change frequency
 */

 



/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
