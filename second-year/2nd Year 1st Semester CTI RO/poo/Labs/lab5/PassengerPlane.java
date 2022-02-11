package com.lab5;

public class PassengerPlane extends Plane {
    private int maxPassengers;

    public PassengerPlane(String planeID, int totalEnginePower, int maxPassengers){
        super(planeID,totalEnginePower);
        this.maxPassengers = maxPassengers;
    }

    public int getMaxPassengers(){
        return this.maxPassengers;
    }

}
