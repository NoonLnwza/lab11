//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;
int count=0;
double sum=0;
double sigma=0;
string score;
int main(){
    ifstream source("score.txt");
    while (getline(source,score)){
        sum += atof(score.c_str());
        count++;
        sigma+=pow(atof(score.c_str()),2);
    }
    cout << setprecision(3);
    cout << "Number of data = " << count << endl;
    double mean;
    mean=sum/count;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt((sigma/count)-pow(mean,2));


    return 0;
}