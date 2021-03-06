 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 

 tasks
 0) Delete your plain-english comments around your code. 
 
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


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
    //help people pick out what they need
    void pickOutFood( Beans Beans );
    //make sure food is fresh
    bool foodIsFresh();
    //store food for people in advance
    void storeFood();

    Beans beansBeingPicked;

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
    3) charge the customer
 */

 struct GasStation
{
    //has candy bars
    bool candyBars = true;
    //stores the amount of gas pumped annually
    int annualGasPumped = 2485;
    //has oil
    bool oil = true;
    //stores the amount of snacks purchased daily
    int snacksPurchasedDaily = 67;
    //number of cars parked at the gas pumps
    int carsParkedatPump = 7;

    //fill up cars
    void fillUpCars();
    //perform oil changes
    void performOilChanges();
    //charge the customer
    double chargeCustomer();

};


/*
3) gymnasium
5 properties:
    1) has weights
    2) has bench press
    3) amount of memberships scanned
    4) has healthy snacks
    5) shows amount of hours worked by employees in a week
3 things it can do:
    1) work people out
    2) charge for a membership
    3) hold zumba dance classes
 */

struct Gymnasium
{
    //has weights
    bool weights = true;
    //has bench press
    bool benchPress = true;
    //amount of memberships scanned daily
    int membershipsScanned = 34;
    //has healthy snacks
    bool hasHealthySnacks = true;
    //amount of hours worked by employees in a week
    double totalWeeklyHoursWorked = 84.5;

    struct Workout
    {
        //number of pullups
        int pullupCount = 10;
        int benchPressMax = 100;
        void muscleMassGained(int caloriesBurnt = 875);
    };

    //work people out
    bool workPeopleOut( Workout Workout );
    //charge for a membership
    int membershipCharge();
    //hold zumba dance classes
    int zumbaDanceClassCount();
};
/*
4) casino
5 properties:
    1) it has poker
    2) number of roulette machines
    3) it has a stage
    4) states how many customers it has per day
    5) states odds that slot machines are set to
3 things it can do:
    1) pay customers
    2) serve alcohol
    3) host live events
 */
struct Casino
{
    //it has poker
    bool pokerGame = true;
    //number of roulette machines counted
    int rouletteMachinesCounted = 12;
    //it has a stage
    bool stageIsSetup = true;
    //how many customers it has per day
    int dailyCustomerCount = 312;
    //odds that slot machines are set to
    float slotMachineChanceOfWinning = 0.0024f;

    //pay customers
    double customerPayout(int gamesWon );
    //serve alcohol
    int bottlesServed();
    //host live events
    bool hostsLiveEvents();

};
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

struct Church
{
    //has a main chapel
    bool hasMainChapel = true;
    //counts attendees every sunday
    int sundayAttendeeCount = 350;
    //has an early serivce
    bool hasEarlyService = true;
    //community fund balance
    float communityFundBalance = 15496.345f;
    //number of projects done by community fund
    int communityFundProjectsCompleted = 9;

    struct SundayService
    {
        int lengthOfService = 90;
        bool hasSermon = true;
        int peopleThatTakeCommunion = 300;

        
    };

    //hold Services
    bool holdServices();
    //charge people for membership
    int priceOfMembership();
    //pay prist
    float pristSalary();

    SundayService serviceInSession;

};
/*
6) park
5 properties:
    1) can count total number of attendees
    2) square footage of park
    3) number of animals
    4) number of conations per week
    5) has soccer field
3 things it can do:
    1) host community functions
    2) repare park
    3) charge people for daycare
 */

struct Park
{
    //count the total number of attendees
    int numberOfAttendees = 4230;
    //square footage of the park
    int squareFootage = 20000;
    //number of aminals
    int numberOfAnimals = 18353;
    //number of donations per week
    double donationsPerWeek = 2000.3;
    //has a soccer field
    bool hasSoccerField = true;

    //host community functions
    bool communityFunction();
    //repare park
    void reparePark( Park park );
    //charge people for daycare
    int priceForDaycare();

};
/*
7) marina
5 properties:
    1) number of docks 
    2) has a boathouse
    3) number of boats stored
    4) daily revinue earned
    5) has fishing outfitter
3 things it can do:
    1) store boats
    2) charge boaters for storage
    3) clean boats for a fee
 */
struct Marina
{
    //number of docks
    int numberOfDocks = 54;
    //has a boathouse
    bool hasBoathouse = true;
    //number of boats stored
    int numberOfBoatsStored = 56;
    //daily fishing revinue earned
    float dailyRevinueEarned = 432.32f;
    //has fishing outfitter
    bool hasFishingOutfitter = true;

    struct Yacht
    {
        int size = 500;
        float costToStore = 5000.5f;
        int costToDrive(double costOfGas = 550.5);
    };

    //store boats
    bool storeBoats();
    //charge boaters for a storage
    float priceOfStorage();
    //clean the yacht for a fee
    float priceToCleanYacht( Yacht yacht );

    Yacht yachtIsInMarina;
};
/*
8) rose garden
5 properties:
    1) number of roses
    2) has lilacs
    3) monitors times the flowers were watered daily
    4) number of students in student center
    5) monitors number of students visiting per week
3 things it can do:
    1) count total number of flowers that died
    2) fine people for picking them
    3) lead flower-watching classes
 */

struct RoseGarden
{
    //number of roses
    int roses = 457;
    //has lilacs
    bool hasLilacs = false;
    //monitors times flowers are watered daily
    int timesFlowersAreWatered = 6;
    //number of students in student center
    int numberOfStudentsInCenter = 53;
    //monitors number of students visiting per week
    int weeklyStudentVisitors = 145;

    //count total number of flowers that died
    int totalFlowersDead();
    //fine people for picking them
    int fineAmount();
    //lead flower-watching classes
    int numberOfFlowerClasses();
};
/*
9) apple store
5 properties:
    1) has ipads
    2) has iphones
    3) number of customers served daily
    4) number of employees
    5) lists store ranking
3 things it can do:
    1) hire new employees
    2) recycle equipment
    3) charge people for help desk
 */
struct AppleStore
{
    //has ipads
    bool hasIpads = true;
    //has iphones
    bool hasIphones = true;
    //number of customers served daily
    int customersServedDaily = 476;
    //number of employees
    int numberOfEmployees = 38;
    //store ranking
    int storeRanking = 10;

    //hire new employees
    int newEmployeesHired();
    //recycle equipment
    float itemsRecycled();
    //charge people for help desk time
    float priceOfHelpDeskTime();
};
/*
10) city
5 properties:
 These 5 properties should be UDTs that you defined above.
 this goes along with the instruction:
    One of your 10 UDTs should only use UDTs for its member variable types.
    1) grocery store
    2) gas station
    3) gymasium
    4) casino
    5) church
3 things it can do:
    1) host community meetings
    2) build roads
    3) hold elections for city government
 */

struct City
{
    //grocery store
    GroceryStore groceriesAvailable;
    //gas station
    GasStation gasPumped;
    //gymnasium
    Gymnasium workoutLevel;
    //casino
    Casino gamesAvailable;
    //church
    Church servicesOccuring;

    //host community meetings
    bool hostingCommunityMeeting();
    //build roads
    int buildRoads( float moneyInCityBank );
    //hold elections for city government
    bool electionYear( bool isAnEvenYear );
};
#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
