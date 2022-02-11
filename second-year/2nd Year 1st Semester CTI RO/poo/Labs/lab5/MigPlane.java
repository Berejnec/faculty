package com.lab5;

public class MigPlane extends FighterJet{

    public MigPlane(String planeID, int totalEnginePower){
        super(planeID,totalEnginePower);
    }
    public void highSpeedGeometry(){
        System.out.println(this.planeID + " - High speed geometry selected");
    }
    public void normalGeometry(){
        System.out.println(this.planeID + " - Normal geometry selected");
    }

}
