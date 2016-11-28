// writing on a text file
#include <iostream>
#include <fstream>
#include <math.h>
#include <cstdlib>

using namespace std;
//starting positions should be spread evenly from 160 till 4960 pixels
int main ()
{
    int numberofagents = 500;
    int max = 4960;
    int min = 160;
    ofstream myfile ("even.txt");
    if (myfile.is_open())
    {
        myfile << "The number of agent starting positions can be adjusted in main.cpp\n";
        for (int i=0;i<numberofagents ;i++)
        {
            myfile << "agent[";
            myfile << i;
            myfile << "].x = ";
            //myfile << (int)(((double) rand() / (RAND_MAX+1)) * (max-min+1) + min);
            myfile << min + (i /(int)sqrt(numberofagents)) * ((max-min)/(int)sqrt(numberofagents));
            myfile << "\n";

            myfile << "agent[";
            myfile << i;
            myfile << "].y = ";
            //myfile << (int)(((double) rand() / (RAND_MAX+1)) * (max-min+1) + min);
            myfile << min + ((i)  * ((max-min)/(int)sqrt(numberofagents))) - ((i/(int)sqrt(numberofagents)) * (max-min));
            myfile << "\n";

             myfile << "agent[";
            myfile << i;
            myfile << "].orientation = 90 \n";
            myfile << "\n";
        }

        myfile << "End\n";
        myfile.close();
    }
    else cout << "Unable to open file";
    return 0;
}
