package com.lab5;

public class TomCatPlane extends FighterJet{

    public TomCatPlane(String planeID, int totalEnginePower){
        super(planeID,totalEnginePower);
    }
    public void refuel(){
        System.out.println(this.planeID + " - Initiating refueling procedure - Locating refueller - Catching up - Refueling - Refueling complete");
    }
}
