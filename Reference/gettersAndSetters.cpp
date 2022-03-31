#include <iostream>
using namespace std;

//getters and setters to prevent input outside correct format
//here someone could input rating "dog" - how to limit to {G, PG, PG-13, R}
//public means other code can access it

class Movie {
    private:
        string rating;

    public:
        string title;
        string director;
        
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating) {
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
                rating = aRating;
            } else {
                rating = "NR";
            }
        }

        string getRating() {
            return rating;
        }
};


int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    //avengers.setRating("Dog");

    cout << avengers.getRating();

    return 0;
}

//Set variable as private and push use thru void function in class - set and get to control access to individual elements 