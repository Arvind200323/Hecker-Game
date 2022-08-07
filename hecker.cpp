#include<iostream>
#include<ctime>
using namespace std;

void Introduction(int Difficulty)
{
      //start of the game and objective
    cout<<" You R a WannaBe HecKer who breaches others PC "; cout<<endl;
    cout<<" You need to solve the following :"; cout<<endl;
    cout<<"Level "<<Difficulty; cout<<endl;
    cout<<endl;
}

bool PlayGame(int Difficulty)
{
    Introduction(Difficulty);

    //values to decypher
    int NumA=rand()%Difficulty+7;
    int NumB=rand()%Difficulty+7;
    int NumC=rand()%Difficulty+7;

    //combination to solve
    int NumSum=NumA+NumB+NumC;
    int NumProduct=NumA*NumB*NumC;

    cout<<" + there are 3 numbers to be found"<<endl;
    cout<<" + the addition of them is: "<<NumSum<<endl;
    cout<<" + the product of them is: "<<NumProduct<<endl;
    cout<<endl;

    //Players Guess
    int GuessA,GuessB,GuessC;
    cout<<" enter the numbers: "<<endl;
    cout<<" Number 1: "; cin>>GuessA; 
    cout<<" Number 2: "; cin>>GuessB; 
    cout<<" Number 3: "; cin>>GuessC; 
    cout<<" The numbers you entered is: "<<GuessA<<","<<GuessB<<","<<GuessC<<endl;

    int GuessSum=GuessA+GuessB+GuessC;
    int GuessProduct=GuessA*GuessB*GuessC;

    //final verdict
    if(NumSum==GuessSum && NumProduct==GuessProduct) {
        cout<<" ***keep going hecker!***\n";
        return true;
    }
    else {
        cout<<" ***woah thats a bonK , TRY again :(***\n";
        return false;
    }
}

int main()
{ 
    srand(time(NULL)); //generate rangom numbers from the time of day

    int LevelDifficulty=1;
    int const MaxDifficulty=10;

     while (LevelDifficulty <= MaxDifficulty) //loop game until all levels are complete
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear(); //clears error
        cin.ignore(); //ignores buffer
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
     cout<<"***You've became a master hecker***";
    return 0;
}