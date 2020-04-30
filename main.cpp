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
struct Feet
{
    void stepForward();
    int stepSize();
};

void Feet::stepForward()
{
    return;
}

int Feet::stepSize()
{
    return 12;
}

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;
    Feet leftFoot;
    Feet rightFoot;  

    void run( int howFast, bool startWithLeftFoot);
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if( startWithLeftFoot == true )
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();howFast = 1;
}




 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */
struct Hand
{
    bool moveTowardsItem();
    bool moveAwayFromItem();
};

struct GroceryStore 
{

    bool hasProduce = true;
    bool hasMeatSection = true;
    bool hasDairySection = true;
    float revenuePerWeek = 32300.0f;

    int purchasedCheesePerDay = 35;
    Hand moveTowardsItem;
    Hand moveAwayFromItem;

    struct Beans
    {
        bool blackBeans = false;
        bool pentoBeans = true;
    };

    void pickOutFood( Beans Beans );
    bool foodIsFresh();
    int storeFood(int amount);
    Beans beansBeingPicked;

};

void GroceryStore::pickOutFood( Beans beans )
{
    if( beans.blackBeans == true ) {}
}
bool GroceryStore::foodIsFresh()
{
   if( bool foodIsFresh = false ) {}
   return 0;
}
int GroceryStore::storeFood( int amount )
{
    
    amount = 4;
    if(  amount > 0 )
    {
        bool customerBoughtSomething = true;
        customerBoughtSomething = true;
    }
    return 0;
}

//=====================================
struct Vehicles
{
    int countNumberOfRed();
    int countNumberOfBlue();
};

 struct GasStation
{
    bool candyBars = true;
    int annualGasPumped = 2485;
    bool oil = true;
    int snacksPurchasedDaily = 67;
    int carsParkedatPump = 7;
    Vehicles cars;

    void fillUpCars(bool hasCars = true);
    void performOilChanges();
    double chargeCustomer(bool thereIsCustomer = true);

};
void GasStation::fillUpCars( bool hasCars)
{
    if (hasCars == true)
    {
       // cars.countNumberOfRed();        //tried to implement this but it gave me error: linker command failed with exit code 1 (use -v to see invocation)
       // cars.countNumberOfBlue();
    }
}

void GasStation::performOilChanges()
{

}

double GasStation::chargeCustomer(bool thereIsCustomer)
{
    if (thereIsCustomer == true) {}
    return 0;
}
//===============================================================
struct Gymnasium
{
    bool weights = true;
    bool benchPress = true;
    int membershipsScanned = 34;
    bool hasHealthySnacks = true;
    double totalWeeklyHoursWorked = 84.5;
    struct Workout
    {
        bool isWorkoutHappening = true;
        int pullupCount = 10;
        int benchPressMax = 100;
        void muscleMassGained(int caloriesBurnt = 875);
    };
    bool workPeopleOut( Workout Workout );
    int membershipCharge();
    int zumbaDanceClassCount( Workout Workout );
};

bool Gymnasium::workPeopleOut( Workout Workout)
{
    if(Workout.isWorkoutHappening == false)
    {
        Workout.pullupCount = 0;
        Workout.benchPressMax = 0;
    }
    return 0;
}
int Gymnasium::membershipCharge()
{
    if( membershipsScanned != 34) 
    {
        bool zumbaClassIsCancelled = true;
        zumbaClassIsCancelled = true;
    }
    return 0;
}
int Gymnasium::zumbaDanceClassCount( Workout Workout )
{
    Workout.isWorkoutHappening = true;
    return 0;
}
//=====================================================

struct Entertainment
{
    int shows();
    bool showsAreCancelled();
};
struct Casino
{
    bool pokerGame = true;
    int rouletteMachinesCounted = 12;
    bool stageIsSetup = true;
    int dailyCustomerCount = 312;
    float slotMachineChanceOfWinning = 0.0024f;
    Entertainment shows;
    bool didCustomersWin;


    int customerPayout(int gamesWon );
    int bottlesServed();
    bool hostsLiveEvents(int numberOfEvents );
};
int Casino::customerPayout( int gamesWon )
{
    if( gamesWon != 0)
    {
        didCustomersWin = true;
    }
    return 0;
}
int Casino::bottlesServed()
{
    return 0;
}
bool Casino::hostsLiveEvents(int numberOfEvents )
{
    if ((numberOfEvents = 0))
    {
        //shows.showsAreCancelled(); same error in the previous if statemnt
    }
    return 0;
}
//===========================================================
struct Pastor
{
    bool hasWrittenSermon();

};
struct Church
{
    bool hasMainChapel = true;
    int sundayAttendeeCount = 350;
    bool hasEarlyService = true;
    float communityFundBalance = 15496.345f;
    int communityFundProjectsCompleted = 9;
    Pastor participatesInService;
   
    struct SundayService
    {
        int lengthOfService = 90;
        bool hasSermon = true;
        int peopleThatTakeCommunion = 300; 
    };

    bool holdServices(bool sundayServiceIsHappening);
    int priceOfMembership();
    float pristSalary();
    
    SundayService serviceInSession;

};

bool Church::holdServices(bool sundayServiceIsHappening)
{
    sundayServiceIsHappening = true;
    return 0;
}
int Church::priceOfMembership()
{
    if( int priceOfMembership = 1000)
    {
    pristSalary();

    }
    return 0;
}
float Church::pristSalary()
{
    return 0;
}
//=========================================================
struct Park
{

    int numberOfAttendees = 4230;
    int squareFootage = 20000;
    int numberOfAnimals = 18353;
    double donationsPerWeek = 2000.3;
    bool hasSoccerField = true;
    bool childAtDaycare;

    bool communityFunction();
    void reparePark();
    int priceForDaycare();
};
bool Park::communityFunction()
{
    if( bool communityFunction = true)
    {
        numberOfAttendees = 5000;
    }
    else
    {
        numberOfAttendees = 250;
    }
    return 0;
}
void Park::reparePark()
{
    if( bool communityFunction = true)
    {
        return;
    }
}
int Park::priceForDaycare()
{
    if( int priceForDaycare =! 0)
    {
        childAtDaycare = true;
    }
    return 0;
}
//========================================================
struct Marina
{

    int numberOfDocks = 54;
    bool hasBoathouse = true;
    int numberOfBoatsStored;
    float dailyRevinueEarned = 432.32f;
    bool hasFishingOutfitter = true;

    struct Yacht
    {
        int size = 500;
        float costToStore = 5000.5f;
        int costToDrive(double costOfGas = 550.5);
    };


    bool storeBoats();
    unsigned int priceOfStorage();
    void priceToCleanYacht( Yacht );
    Yacht yachtIsInMarina;
};
bool Marina::storeBoats()
{
    if( bool storeBoats =! true)
    {
        numberOfBoatsStored = 0;
    }
    return 0;
}
unsigned int Marina::priceOfStorage()
{
    if( unsigned int priceOfStorage =! 0)
    {
        return 0;
    }
    return 0;
}
void Marina::priceToCleanYacht(Marina::Yacht  )
{
    return;
}
//===========================================================
struct RoseGarden
{

    int roses = 457;
    int timesFlowersAreWatered = 6;
    int numberOfStudentsInCenter = 53;
    int weeklyStudentVisitors = 145;
    int flowerDeathCount;


    int totalFlowersDead();
    int fineAmount();
    int numberOfFlowerClasses();
};
int RoseGarden::totalFlowersDead()
{
    if (bool hasLilacs = false)
    {
        flowerDeathCount = 26;
    }
    return 0;
}
int RoseGarden::fineAmount()
{
    return 0;
}
int RoseGarden::numberOfFlowerClasses()
{
    return 0;
}
//===========================================================
struct AppleStore
{

    bool hasIpads = true;
    bool hasIphones = true;
    int customersServedDaily = 476;
    int numberOfEmployees = 38;
    int storeRanking = 10;


    int newEmployeesHired( int numberOfNewHires );
    float itemsRecycled();
    float priceOfHelpDeskTime();
};
int AppleStore::newEmployeesHired(int numberOfNewHires)
{
    if( numberOfNewHires )
    {
        return 0;
    }
    return 0;
}
float AppleStore::itemsRecycled()
{
    return 0;
}
float AppleStore::priceOfHelpDeskTime()
{
    return 0;
}
//===========================================================
struct City
{

    GroceryStore groceriesAvailable;
    GasStation gasPumped;
    Gymnasium workoutLevel;
    Casino gamesAvailable;
    Church servicesOccuring;


    bool hostingCommunityMeeting();
    int buildRoads( float moneyInCityBank );
    bool electionYear( bool isAnEvenYear );
};
#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
