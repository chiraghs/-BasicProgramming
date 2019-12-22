#include<iostream>
using namespace std;
int main(){
    int x,y;
    while(true)
        try{
            if(cin.eof()){
                break;
            }
            cin >> x;
            cin >> y;

            cout<< x+y << endl ;
        }catch(...){
            break;
        }



}