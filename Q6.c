#include <stdio.h>

#define TOLL_RATE 550 

void processVehicle(char vehicleType[]) {
    
    static int totalVehicles = 0;
    static int totalCollection = 0;

    totalVehicles++;
    totalCollection = totalCollection + TOLL_RATE;

    printf("Vehicle: %s | Toll: %d PKR | Total Vehicles: %d | Total Collection: %d PKR\n",
           vehicleType, TOLL_RATE, totalVehicles, totalCollection);
}

int main() {
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    
    return 0;
}