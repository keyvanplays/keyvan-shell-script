/* 
name: keyvan shellscript
version:0.1
you can use this script in linux and windows but defult in windows
*/


//this is library to use
#include <iostream>
#include <string>
#include <vector>
#include <thread>


//this is name space to use
using namespace std;



//this is test metohd
void sum(int x, int y){
    cout << x + y << endl;
}


//this is method to run app
void run(string cmd){
    //for convert string to char
    const char* com = cmd.c_str();
    system(com);
}

//this is main method
int main(){
    //this is test to app work
    vector<int> temps;
    int temp;
    for(int i = 0; i < 5; ++i){
        temp = i;
        temps.push_back(temp);
    }
    cout << temps[2] << endl;
    cout << temps[3] << endl;
    cout << temps.front() << endl;
    sum(temps[2],temps[3]);
    
    string filename;
    cout << "enter the file name:" << endl;
    cin >> filename;
    string cmd = "./" + filename; 
    
    
    
    
    
    
    //run thread to speed and run is function and names and formats is parametr
    thread t1(run,cmd);
    
    t1.join();
    
    
    //I use return 0 for version 0.1
    return 0;
}
