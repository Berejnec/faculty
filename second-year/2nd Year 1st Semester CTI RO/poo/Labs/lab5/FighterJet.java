package com.lab5;

public class FighterJet extends Plane{

    public FighterJet(String planeID,int totalEnginePower){
        super(planeID, totalEnginePower);
    }
    public void launchMissile(){
        System.out.println(this.planeID + " - Initiating missile launch procedure - Acquiring target - Launching missile - Breaking away - Missile launch complete");
    }

}
