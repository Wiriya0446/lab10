#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    ifstream source;
    string score;
    int i=0;
    double Mean,deviation,sum;
    source.open("score.txt");
    while(getline(source,score)){
        sum = sum +stod(score);
        i++;
    }
    Mean=sum/i;
    sum=0;
    source.close();
    source.open("score.txt");
    while(getline(source,score)){
        sum = sum + pow(stod(score),2);
    }
    deviation=pow((sum/i)-pow(Mean,2),0.5);
    cout << "Number of data = "<<i<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<Mean<<"\n";
    cout << "Standard deviation = "<<deviation<<"\n";
}