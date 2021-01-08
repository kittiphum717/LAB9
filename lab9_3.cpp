#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    ifstream source("score.txt");
    int count = 0;
    float sum,sum2,avg,SD;
    string textline;
    cout << setprecision(3);
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()),2);
        count++;
    }
    avg = sum/count;
    SD = sqrt((sum2/count)-pow(avg,2));
    cout << "Number of data = " << count << endl;
    cout << "Mean = " << avg << endl;
    cout << "Standard deviation = " << SD << endl;
    source.close();

    return 0;
}