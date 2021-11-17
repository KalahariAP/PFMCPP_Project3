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
    1) number of tourists
    2) kilometers of coastline
    3) number of sunbeds
    4) number of palm trees
    5) lifeguard service
3 things it can do:
    1) change extension
    2) create dunes
    3) grow coconut trees
 */

/*
Thing 2) Restaurant
5 properties:
    1) number of tables
    2) meters of bar counter
    3) meals per day
    4) Michelin star rating
    5) diners per week
3 things it can do:
    1) offer happy hour
    2) feed
    3) reserve the right of admission
 */

/*
Thing 3) Museum
5 properties:
    1) number of paints rooms
    2) visitors per day
    3) classic art section
    4) souvenir shop
    5) number of sculptures
3 things it can do:
    1) select artists
    2) charge entrance
    3) exhibit art
 */

/*
Thing 4) Robot
5 properties:
    1) number of processors
    2) articulated arms
    3) kilos of metal
    4) number of viewers
    5) number of microchips
3 things it can do:
    1) replace a human
    2) calculate quickly
    3) make automated decisions
 */

/*
Thing 1) synthesizer
5 properties: 
    1) power (bool)
    2) oscillator (int)
    3) filter (float)
    4) keyboard (int)
    5) model (char)
3 things it can do:
    1) modify waves
    2) emit sound
    3) vary frequencies
 */

 /*
Thing 2) HDD
5 properties:
    1) memory (float)
    2) disk RPM (int)
    3) LED (bool)
    4) voltage (int)
    5) color (std::string)
3 things it can do:
    1) store data
    2) connect with computer
    3) contain information
 */

 /*
Thing 3) Microphone
5 properties:
    1) low cut filter (bool)
    2) coil meters (float)
    3) square grid (int)
    4) magnet weight (float)
    5) support type (std::string)
3 things it can do:
    1) amplify sound
    2) cut low sounds
    3) attach to a stand
 */

 /*
Thing 4) Radio 
5 properties:
    1) volume (int)
    2) light vu meter (bool)
    3) frequency class (int)
    4) antenna length (float)
    5) batteries (int)
3 things it can do:
    1) receive radio frequency
    2) choose stations
    3) broadcast information live
 */

 /*
Thing 5) Reflex camera
5 properties:
    1) flash (bool)
    2) diaphragm (float)
    3) lens (int)
    4) screen (int)
    5) Format (std::string)
3 things it can do:
    1) capture images
    2) regulate the amount of light
    3) focus images
 */

 /*
Thing 6) Drumbox
5 properties:
    1) knob (int)
    2) sample rate (int)
    3) steps (int)
    4) mute (bool)
    5) start point sample (float)
3 things it can do:
    1) create loops
    2) store beats
    3) import midi
 */

 /*
Thing 7) Pedal Delay
5 properties:
    1) switch (bool)
    2) level (int)
    3) time (int)
    4) feedback (int)
    5) brand (std::string)
3 things it can do:
    1) repeat the sound
    2) light up when activated
    3) connect to another effect
 */

 /*
Thing 8) watch
5 properties:
    1) clock hands (int)
    2) crown type (std::string)
    3) bracelet strap (std::string)
    4) dial (int)
    5) alarm (bool)
3 things it can do:
    1) mark the time
    2) used as a complement
    3) be used as an alarm clock
 */

 /*
Thing 9) Shoe
5 properties:
    1) tongue (std::string)
    2) laces (int)
    3) color (std:string)
    4) size (int)
    5) airunit (bool)
3 things it can do:
    1) conform to the foot
    2) protect from cold
    3) be stored
 */

 /*
Thing 10)
5 properties: Umbrella
    1) rods (int)
    2) hinge (int)
    3) waterproof fabric (std::string)
    4) handle (std::string)
    5) automatism (bool)
3 things it can do:
    1) protect from rain
    2) fold
    3) used as a weapon
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
