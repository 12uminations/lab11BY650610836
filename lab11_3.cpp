#include <iostream>
#include<fstream>
#include <iomanip>
#include<string>
#include<cstdlib>
#include <cmath>

using namespace std;

int main(){
    ifstream source;
	source.open("score.txt");
	string textline;
    float i=0;
    float sum=0;
    float sig=0;
    float x;
    float sd;
    float mean;
	while(getline(source,textline)){
		sum += atof(textline.c_str());
        i++;
	}
    mean = sum/i;
     source.close();
    source.open("score.txt");
    string textline2;
    while(getline(source,textline2)){
        x = mean - atof(textline2.c_str());
		sig =sig +pow(x,2);
	}
	sd= sqrt(sig/i);
    source.close();

    cout << "Number of data = "<<i<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<sd;
    return 0;
}