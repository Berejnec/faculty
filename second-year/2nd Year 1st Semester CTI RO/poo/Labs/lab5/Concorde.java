package com.lab5;

public class Concorde extends PassengerPlane{

    public Concorde(String planeID, int totalEnginePower, int maxPassengers){
        super(planeID,totalEnginePower,maxPassengers);
    }
    public void goSuperSonic(){
        System.out.println(this.planeID + " - Supersonic mode activated");
    }
    public void goSubSonic(){
        System.out.println(this.planeID + " - Supersonic mode deactivated");
    }

}
