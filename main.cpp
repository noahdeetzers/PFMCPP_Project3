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
#include <iostream>
struct Feet
{
    void stepForward();
    int stepSize();
};

void Feet::stepForward(){}

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
    bool isFoodFresh;

    int purchasedCheesePerDay = 35;
    Hand moveTowardsItem;
    Hand moveAwayFromItem;
    bool customerBoughtSomething;

    struct Beans
    {
        bool blackBeans = false;
        bool pentoBeans = true;
    };

    void pickOutFood( Beans Beans );
    bool foodIsFresh(int numberOfFreshFood);
    int storeFood(int amount);
    Beans beansBeingPicked;

};

void GroceryStore::pickOutFood( Beans beans )
{
    if( beans.blackBeans == true ) {}
}
bool GroceryStore::foodIsFresh( int numberOfFreshFood)
{
    if( numberOfFreshFood == 0)
    {
        isFoodFresh = false;
    }
    return true;
}
int GroceryStore::storeFood( int amount )
{
    
    amount = 4;
    if(  amount > 0 )
    {
        customerBoughtSomething = true;
    }
    return true;
}

//=====================================
struct Vehicles
{
    int countNumberOfRed();
    int countNumberOfBlue();
};

int Vehicles::countNumberOfRed()
{
    return 25;
}
int Vehicles::countNumberOfBlue()
{
    return 15;
}
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
       cars.countNumberOfRed();
       cars.countNumberOfBlue();
    }
}
void GasStation::performOilChanges()
{
    if (oil == true)
    {
        std::cout << "Oil Change was succesfully Performed" << std::endl;
    }
}
double GasStation::chargeCustomer(bool thereIsCustomer)
{
    if (thereIsCustomer == true) {}
    return true;
}
//===============================================================
struct Gymnasium
{
    bool weights = true;
    bool benchPress = true;
    int membershipsScanned = 34;
    bool hasHealthySnacks = true;
    bool zumbaClassIsCancelled;
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
    int zumbaDanceClassCount( Workout workout );
};

bool Gymnasium::workPeopleOut( Workout workout)
{
    if(workout.isWorkoutHappening == false)
    {
        workout.pullupCount = 0;
        workout.benchPressMax = 0;
    }
    return true;
}
int Gymnasium::membershipCharge()
{
    if( membershipsScanned != 34) 
    {
        zumbaClassIsCancelled = true;
    }
    return true;
}
int Gymnasium::zumbaDanceClassCount( Workout workout )
{
    workout.isWorkoutHappening = true;
    return true;
}
//=====================================================

struct Entertainment
{
    int shows();
    bool showsAreCancelled();
};

bool Entertainment::showsAreCancelled()
{
    return true;
}
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
    return true;
}
int Casino::bottlesServed()
{
    return true;
}
bool Casino::hostsLiveEvents(int numberOfEvents )
{
    if ((numberOfEvents = 0))
    {
        shows.showsAreCancelled();
    }
    return true;
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
    int membershipPrice;
   
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
    return true;
}
int Church::priceOfMembership()
{
    if( membershipPrice == 1000)
    {
    pristSalary();

    }
    return true;
}
float Church::pristSalary()
{
    return true;
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
    bool hasACommunityFunction;

    bool communityFunction();
    void repairPark();
    int priceForDaycare();
};
bool Park::communityFunction()
{
    if( hasSoccerField == true)
    {
        numberOfAttendees = 5000;
    }
    else
    {
        numberOfAttendees = 250;
    }
    return true;
}
void Park::repairPark()
{
    if( hasACommunityFunction == true){}
}
int Park::priceForDaycare()
{
    if( int priceForDaycare = 0)
    {
        childAtDaycare = true;
    }
    return true;
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
    if( hasBoathouse == true)
    {
        numberOfBoatsStored = 15;
    }
    return false;
}
unsigned int Marina::priceOfStorage()
{
    if( numberOfBoatsStored == 5)
    {
        return false;
    }
    return false;
}
void Marina::priceToCleanYacht(Marina::Yacht) {}
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
    if (bool hasLilacs = true)
    {
        flowerDeathCount = 26;
    }
    return false;
}
int RoseGarden::fineAmount()
{
    return false;
}
int RoseGarden::numberOfFlowerClasses()
{
    return false;
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
    if( numberOfNewHires == 1 )
    {
        std::cout << "Employee got hired" << std::endl;
    }
    return false;
}
float AppleStore::itemsRecycled()
{
    return false;
}
float AppleStore::priceOfHelpDeskTime()
{
    return false;
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

int main()
{
    std::cout << "good to go!" << std::endl;
}
