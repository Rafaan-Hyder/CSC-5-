#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    
    float gasGage;
    float tankSize;
    float mpg;
    float x;
    float gallonsReq;
    float gasPrice1;
    float stationDistance1;
    float totalDistance1;
    float totalGasPrice1;
    float driveCost1;
    float totalCost1;
    float finalGasPrice1;
    float gasPrice2;
    float stationDistance2;
    float totalDistance2;
    float totalGasPrice2;
    float driveCost2;
    float totalCost2;
    float finalGasPrice2;
    float y;
    float z;
    
    y = totalDistance1 - mpg;
    z = totalDistance2 - mpg;
    x = (gasGage / 100) * tankSize;
    gallonsReq = tankSize - x;
    totalGasPrice1 = gasPrice1 * gallonsReq;
    totalDistance1 = stationDistance1 * 2;
    driveCost1 = gasPrice1 + (y * gasPrice1);
    totalCost1 = totalGasPrice1 + driveCost1;
    finalGasPrice1 = totalCost1 / gallonsReq;
    totalGasPrice2 = gasPrice2 * gallonsReq;
    totalDistance2 = stationDistance2 * 2;
    driveCost2 = gasPrice2 + (z * gasPrice2);
    totalCost2 = totalGasPrice2 + driveCost2;
    finalGasPrice2 = totalCost2 / gallonsReq;
    cout<<setprecision(4);
    
    
    cout<<"Knowns for your particular Vehicle"<<endl;
    cout<<"Gas Gage '%' full = "<<endl;
    cin>>gasGage;
    cout<<"Size of tank in Gallons = "<<endl;
    cin>>tankSize;
    cout<<"Gas mileage mpg = "<<endl;
    cin>>mpg;
    cout<<"gallons required to fill up = "<<gallonsReq<<endl;
    cout<<endl;
    cout<<"costs for gas station 1:"<<endl;
    cout<<"gas per gallon price = "<<endl;
    cin>>gasPrice1;
    cout<<"Miles to gas station"<<endl;
    cin>>stationDistance1;
    cout<<"cost to fill up = "<<totalGasPrice1<<endl;
    cout<<"Total distance driven for station = "<<totalDistance1<<endl;
    cout<<"cost to drive to and back from station = "<<driveCost1<<endl;
    cout<<"total cost with mileage to gas station = "<<totalCost1<<endl;
    cout<<"Price per gallon after adding mileage and drive to station = "<<finalGasPrice1<<endl;
    cout<<endl;
    cout<<"costs for gas station 2:"<<endl;
    cout<<"gas per gallon price = "<<endl;
    cin>>gasPrice2;
    cout<<"Miles to gas station"<<endl;
    cin>>stationDistance2;
    cout<<"cost to fill up = "<<totalGasPrice2<<endl;
    cout<<"Total distance driven for station = "<<totalDistance2<<endl;
    cout<<"cost to drive to and back from station = "<<driveCost2<<endl;
    cout<<"total cost with mileage to gas station = "<<totalCost2<<endl;
    cout<<"Price per gallon after adding mileage and drive to station = "<<finalGasPrice2<<endl;

    return 0;
}