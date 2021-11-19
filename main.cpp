/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives and std::string. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine`
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
        Remember to pick properties that can be represented with 'int float double bool char std::string'
2) write the name of the primitive type you'll be using after each property
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

3) move Thing 5-9 to between your Thing 4 and Thing 10.
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
    3) meals (int)
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

Thing 5) slider
5 properties:
    1) minimum range value (int)
    2) maximum range value (int)
    3) thumb position (int)
    4) Tick mark (int)
    5) color (std:string)
3 things it can do:
    1) change range value
    2) move up
    3) move down
 */

/*
Thing 6) knob
5 properties:
    1) height in cm (int)
    2) width in cm (int) 
    3) number of marks (int)
    4) material protector (std:string)
    5) arrow indicator (bool)
3 things it can do:
    1) Rotate to the left
    2) Rotate to the right
    3) change parameters
 */

/*
Thing 7) midi
5 properties:
    1) number of pins (int)
    2) output signal (bool)
    3) input signal (bool)
    4) led (int)
    5) sign board (std:string)
3 things it can do:
    1) send data
    2) receive data
    3) connect devices
 */

/*
Thing 8) keynote
5 properties:
    1) down position (bool)
    2) up position (bool)
    3) keyboard position (int)
    4) name on scale (std:string)
    5) color (std:string)
3 things it can do:
    1) play a note
    2) harmonize with others 
    3) produce sustain
 */

/*
Thing 9) switch
5 properties:
    1) turn on (bool)
    2) turn off (bool)
    3) bypass (bool)
    4) Fabrication material (std:string)
    5) packing ring (int)
3 things it can do:
    1) turn on the light
    2) activate oscillators
    3) do not interfere with the signal
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
