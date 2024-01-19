#include <iostream>

using namespace std;

int main(){
    int availableTime, numberOfChores;
    cin >> availableTime;
    cin >> numberOfChores;
    int timeForEachChore [numberOfChores];
    for (int &choreTime: timeForEachChore) cin >> choreTime;
    for(int k=0; k<numberOfChores; k++)   {  
        int temp = timeForEachChore[k];  
        int j= k-1;  
        while(j>=0 && temp <= timeForEachChore[j]){  
            timeForEachChore[j+1] = timeForEachChore[j];   
            j = j-1;  
        }  
        timeForEachChore[j+1] = temp;  
    }
    int time = 0, canDoChores =0; 
    for (const int &choreTime : timeForEachChore){
        if (choreTime + time <= availableTime){
            time += choreTime;
            canDoChores++;
        }
        else break;
    }
    cout << canDoChores << endl;
}
