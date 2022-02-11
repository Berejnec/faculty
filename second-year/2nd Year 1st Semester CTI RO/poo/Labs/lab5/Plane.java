package com.lab5;

public class Plane {
    public String planeID;
    public int totalEnginePower;

    public Plane(String planeID, int totalEnginePower){
        this.planeID = planeID;
        this.totalEnginePower = totalEnginePower;
    }

    public String getPlaneID(){
        return this.planeID;
    }
    public int getTotalEnginePower(){
        return this.totalEnginePower;
    }

    public void takeOff(){
        System.out.println(this.planeID + " - Initiating takeo↵ procedure - Starting engines - Accelerating down the runway - Taking off - Retracting gear - Takeoff complete");
    }

    public void fly(){
        System.out.println(this.planeID + " - Flying");
    }

    public void land(){
        System.out.println(this.planeID + "- Initiating landing procedure - Enabling airbrakes - Lowering gear - Contacting runway - Decelerating - Stopping engines - Landing complete");
    }



}

