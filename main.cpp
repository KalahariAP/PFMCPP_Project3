/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar(Car carA); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior(Car carB);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  

    /*
    Pay attention to the member functions that take an instance of 'Car'
    Notice that there is a member variable of the same type.

    It makes sense to pass a Car to the function 'washAndWaxCar' because car washes service MANY cars
    However, they only service ONE car at a time.
    the carBeingServiced's value would change every time you wash and wax the car. 

    I see many students who write code emulating this format, but their usage does not make logical sense.  
    Consider the following snippet:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        // train their skills
        void trainPlayerSkills(Manager managerA);
    
        Manager teamManager;
    };

    It does not make sense to pass in a new Manager whenever you are going to train your team players.
    Soccer teams have ONE manager.

    a much more relevant usage would be adding a member function that hires a new manager:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        void hireNewManager(Manager newManager);
    
        Manager teamManager;
    };

    We can safely assume that the 'Manager' instance that is being passed in will be replacing the current 'teamManager' variable without looking at any other code.
    This is because the function name and function argument clearly indicate what they are/what they do.

    Your function names and parameter names should make LOGICAL SENSE.
    Readers of your code should be able to INTUITIVELY understand what your function implementations will do without actually seeing the implementations.

    Keep this in mind when you define your UDTs in this project part.
    */
};


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
struct Beach
{
    // number of tourist
    int numTourist = 350;
    // miles of coastline
    float coastlineMiles = 3.50f;
    // number of sunbeds
    int numSunbeads = 100;
    // number of palmTree
    int numPalmtree = 1500;
    // lifeguardService 
    bool lifeguard = true;

    struct Lifeguard
    {
        std::string name = "David Flinch";
        int age = 25;
        double weightKg = 80.800;
        float heightCm = 180.5f;
        bool officialTitle = true;
        bool experience = true;

    void workWeekend (bool fullTime);
    void swimStyles (int numStyles = 4);
    float strokeSpeed (float averageSpeed); 
    };

    //1) change extension
    void changeExtension (float numMiles);   
    //2) create dunes
    void createDunes (double cubicVolume);
    //3) grow coconut trees
    void growCoconutTrees (std::string palmClass);
};
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
struct Restaurant
{
    //  number of tables 
    int tables = 20;
    //  long measure of barCounter 
    float longBarcounter = 25.5f;
    //  number of services meals 
    int numMeals = 3;
    //  awarded with MichelinStar 
    bool awardMStar = true;
    //  dining capacity 
    int numDinner = 185;

    struct Barcounter
    {
        std::string nameCocktailshaker = "Thomas Anderson";
        int numWaiters = 4;
        float heightCm = 80.5f;
        bool barstool = false;
        float closingTime = 23.30f;

        void drinkTasting (std::string drinkClass);
        void beerShooter (int shoots, float literPM);
        int appetizer (std::string appetizerClass, int portionPlate);
    };

    //1) offer happy hour
    void offerHappyhour (bool happyhour, float happyhourTime);
    //2) feed
    void feed (bool takeaway, int ordersPerDay);
    //3) reserve the right of admission
    bool rightAdmission (bool admission, int securityTeam);
};
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
struct Museum
{
    //1) number of paintsRoom
    int paintsRoom = 48;
    //2) number of visitors
    int numVisitors = 5000;
    //3) exhibition of classicArt
    bool classicArt = false;
    //4) souvenirShop  
    bool souvenirShop = true;
    //5) number of sculptures 
    int numSculptures = 25;

    //1) select artists
    void selectArtist (int timeExposition, float artistCache);
    //2) charge entrance
    void chargeEntrance (float elevatorMeasure, int numTrucks);
    //3) exhibit art
    void exhibitArt (int alternativeExposureAnual);
};
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
struct Robot
{
    //1) processors (int)
    int numProcessors = 120;
    //2) articulatedArms (bool)
    bool articulatedArms = true;
    //3) kilos of metal (float)
    float weightMetal = 150.65f;
    //4) number of viewers (int)
    int viewers = 2;
    //5) number of microchips (int)
    int numMicrochips = 4500;

    //1) replace a human
    void replaceHuman (bool replace, std::string humanTask);
    //2) calculate quickly
    //3) make automated decisions
};
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
