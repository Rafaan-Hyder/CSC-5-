#include <iostream>

using namespace std;
int main(){
    
    int x;
    int y;
    int z;
    
    cout<<"Enter 3 numbers:"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    
    if(x > y && y > z){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    
    if(y > x && x > z){
        cout<<y<<" "<<x<<" "<<z<<endl;
    }
    
    if(z > x && x > y){
        cout<<z<<" "<<x<<" "<<y<<endl;
    }
    
    if(x > z && z > y){
        cout<<x<<" "<<z<<" "<<y<<endl;
    }
    
    if(y > z && z > x){
        cout<<y<<" "<<z<<" "<<x<<endl;
    }
    
    if(z > y && y > x){
        cout<<z<<" "<<y<<" "<<x<<endl;
    }
    return 0;
}