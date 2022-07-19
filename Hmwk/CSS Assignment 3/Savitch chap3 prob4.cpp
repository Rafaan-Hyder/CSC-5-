#include <iostream>
#include <string>
using namespace std;
int main()
{
    string horo1;
    string horo2;
    
    cout<<"Horoscope Program which examines compatible signs"<<endl;
    cout<<"Input 2 signs"<<endl;
    cin>>horo1;
    cin>>horo2;
    
    if(horo1 == "Cancer" || "Scorpio" || "Pisces" && horo2 == "Cancer" || "Scorpio" || "Pisces"){
        cout<<horo1<<" and "<<horo2<<" are compatible water signs.";
    }
        if(horo1 == "Aries" || "Leo" || "Sagittarius" && horo2 == "Aries" || "Leo" || "Sagittarius"){
        cout<<horo1<<" and "<<horo2<<" are compatible fire signs.";
    }
            if(horo1 == "Taurus" || "Virgo" || "Capricorn" && horo2 == "Taurus" || "Virgo" || "Capricorn"){
        cout<<horo1<<" and "<<horo2<<" are compatible earth signs.";
    }
                if(horo1 == "Gemini" || "Libra" || "Aquaius" && horo2 == "Gemini" || "Libra" || "Aquaius"){
        cout<<horo1<<" and "<<horo2<<" are compatible air signs.";
    }
    else{
        cout<<horo1<<" and "<<horo2<<" are not compatible signs";
    }
    
}