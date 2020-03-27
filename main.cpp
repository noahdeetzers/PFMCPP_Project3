/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1

 Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   
 
 1) write 10 user-defined types in plain-English, 
    in the comments above your UDT, write out, in plain-english, 3 things it can do, and 5 traits.
    Note: Your 10th UDT will use 5 of your UDTs for its properties, so maybe start on UDT #10 first. This goes along with instruction #6.

************************
    Commit after you complete this step so i can review before you proceed with the rest of the projects
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  
 2) define your struct for each of your 10 types. 
    Copy your 3+5 comments into your struct body.
    comment them out.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
    You'll write definitions in part2 for these functions
    you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.  
    this nested class also needs member functions.
    this nested class is not considered one of your 10 UDTs.
 
 6) One of your 10 UDTs should only use UDTs for its member variable types.   
    No primitives allowed!
    it still needs member variables.
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) has vacuum cleaners
    2) has eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */
struct CarWash //2)        
{
    //2) has vacuum cleaners
    bool hasVacuumCleaners = true; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    bool hasEcoFriendlyCleaningSupplies = true; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
1) grocery store
5 properties:
    1) has produce section
    2) has meat section
    3) has dairy section
    4) states amount of revenue made in a week
    5) shows pounds of cheese purchased per day
3 things it can do:
    1) help people pick out what they need
    2) make sure food is fresh
    3) store food for people in advance
 */

struct GroceryStore 
{
    //has produce section
    bool hasProduce = true;
    //has meat section
    bool hasMeatSection = true;
    //has dairy section
    bool hasDairySection = true;
    //amount of revinue made in a week
    float revenuePerWeek = 32300.00f;
    //shows pounds of cheese purchased per day
    int purchasedCheesePerDay = 35;

    struct Beans
    {
        bool blackBeans = false;
        bool pentoBeans = true;
    };

};
/*
2) gas station
5 properties:
    1) it has candy bars
    2) it stores the amount of gas pumped annually
    3) has oil
    4) stores the amount of snacks purchased daily
    5) counts the number of cars parked at the gas pumps
3 things it can do:
    1) fill up cars 
    2) perform oil changes
    3) take money in exchange for supplying candy bars
 */

/*
3) gymnasium
5 properties:
    1) has weights
    2) has bench press
    3) is able to count amount of memberships scanned
    4) has healthy snacks
    5) shows amount of hours worked by employees in a week
3 things it can do:
    1) work people out
    2) charge for a membership
    3) hold zumba dance classes
 */

/*
4) casino
5 properties:
    1) it has poker
    2) it has roulette
    3) it has a stage
    4) states how many customers it has per day
    5) states odds that slot machines are set to
3 things it can do:
    1) pay customers
    2) serve alcohol
    3) host live events
 */

/*
5) church
5 properties:
    1) has a main chapel
    2) counts how many attendees every sunday
    3) has an early service
    4) community fund balance
    5) list of projects done by community fund
3 things it can do:
    1) hold services
    2) charge people for membership
    3) pay prist
 */

/*
6) park
5 properties:
    1) can count total number of attendees
    2) square footage of park
    3) number of animals
    4) number of park users per week
    5) has soccer field
3 things it can do:
    1) host community functions
    2) have a summer camp for kids
    3) charge people for daycare
 */

/*
7) marina
5 properties:
    1) number of docks docks 
    2) has a boathouse
    3) number of boats stored
    4) daily revinue earned
    5) has fishing outfitter
3 things it can do:
    1) store boats
    2) charge boaters for storage
    3) clean boats for a fee
 */

/*
8) rose garden
5 properties:
    1) has roses
    2) has lilacs
    3) monitors times the flowers were watered daily
    4) has student center
    5) monitors number of students visiting per week
3 things it can do:
    1) count total number of flowers that died
    2) fine people for picking them
    3) lead flower-watching classes
 */
 
/*
9) apple store
5 properties:
    1) has ipads
    2) has iphones
    3) number of customers served daily
    4) number of employees
    5) has help desk service
3 things it can do:
    1) hire new employees
    2) recycle equipment
    3) charge people for help desk
 */

/*
10) city
5 properties:
 These 5 properties should be UDTs that you defined above.
 this goes along with the instruction:
    One of your 10 UDTs should only use UDTs for its member variable types.
    1) has a grocery store
    2) has a gas station
    3) has a gymasium
    4) has a casino
    5) has a church
3 things it can do:
    1) host community meetings
    2) build roads
    3) hold elections for city government
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
