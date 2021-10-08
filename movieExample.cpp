#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Movie{
private:
    string name, releaseDate, company;
    int duration;
public:
    Movie();
    Movie(string n, string rD, string c, int d);
    void setMovie(string n, string rD, string c, int d);
    void setReleaseDate(string date);
    void setName(string n);
    void setCompany(string c);
    void setDuration(int d);
    string getName();
    string getReleaseDate();
    string getCompany();
    int getDuration();
    string display();
    ~Movie();
};

Movie::Movie(){
    name = "";
    releaseDate = "";
    company = "";
    duration = 0;
}
Movie::Movie(string n, string rD, string c, int d){
    name = n;
    releaseDate = rD;
    company = c;
    duration = d;
}
void Movie::setMovie(string n, string rD, string c, int d){
    name = n;
    releaseDate = rD;
    company = c;
    duration = d;
}
void Movie::setReleaseDate(string rD){
    releaseDate = rD;
}
void Movie::setName(string n){
    name = n;
}
void Movie::setCompany(string c){
     company = c;
}
void Movie::setDuration(int d){
     duration = d;
}
string Movie::getName(){
    return name;
}
string Movie::getReleaseDate(){
    return releaseDate;
}
string Movie::getCompany(){
    return company;
}
int Movie::getDuration(){
    return duration;
}

Movie::~Movie(){
    cout<<"\nMovie Class "<<name<<" destroyed";
}
string Movie::display(){
    stringstream outMovie;
    outMovie<<"Title: "<<name<<"\n"
            <<"Release Date: "<<releaseDate<<"\n"
            <<"Duration: "<<duration<<"\n"
            <<"Production Company: "<<company<<"\n"
            <<"/----------------------------------------------------------------/\n\n";

    return outMovie.str();
}
int main()
{
    Movie movie1;
    movie1.setMovie("Avengers Endgame", "April 22, 2019", "Marvel Studios",181);
    Movie movie2;
    Movie movie3;
    movie2.setMovie("Darkest Minds", "August 3, 2018", "TSG Entertainment",105);
    movie3.setMovie("Black Widow", "July 9, 2021", "Marvel Studios",134);

    cout<<"/****************************************************************/\n"
        <<"/********************JayLancer PGG2 Tutorial*********************/\n"
        <<"/****************************************************************/\n";

    cout<<"--------------------\n"
        <<"First Movie details\n"
        <<"--------------------\n"
        <<"Title: "<<movie1.getName()<<"\n"
        <<"Release Date: "<<movie1.getReleaseDate()<<"\n"
        <<"Duration: "<<movie1.getDuration()<<"\n"
        <<"Production Company: "<<movie1.getCompany()<<"\n"
        <<"/----------------------------------------------------------------/\n\n";

    cout<<"--------------------\n"
        <<"Second Movie details\n"
        <<"--------------------\n"
        <<movie2.display();

    cout<<"--------------------\n"
        <<"Third Movie details\n"
        <<"--------------------\n"
        <<movie3.display();


    return 0;
}
