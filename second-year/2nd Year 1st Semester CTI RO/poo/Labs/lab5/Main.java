package com.lab5;


public class Main {
    public static void main(String[] args){
        Plane[] planes = new Plane[6];
        planes[0] = new PassengerPlane("100",100,150);
        planes[1] = new Concorde("123",110,200);
        planes[2] = new Boeing("230",250,300);
        planes[3] = new MigPlane("420",500);
        planes[4] = new TomCatPlane("233",750);
        planes[5] = new FighterJet("500",600);

        for(Plane plane : planes){
            plane.getPlaneID();
            plane.getTotalEnginePower();
            plane.takeOff();
            plane.fly();

            if(plane instanceof PassengerPlane)
            {
                System.out.println( ((PassengerPlane) plane).getMaxPassengers() );
            }
            if(plane instanceof Concorde){
                ((Concorde) plane).goSuperSonic();
                ((Concorde) plane).goSubSonic();
            }
            if(plane instanceof Boeing){
                System.out.println( ((Boeing) plane).getPlaneID());
            }
            if(plane instanceof FighterJet){
                ((FighterJet) plane).launchMissile();
            }
            if(plane instanceof MigPlane){
                ((MigPlane) plane).highSpeedGeometry();
                ((MigPlane) plane).normalGeometry();
            }
            if(plane instanceof TomCatPlane){
                ((TomCatPlane) plane).refuel();
                ((TomCatPlane) plane).launchMissile();
            }
            plane.land();
            System.out.println();
        }
    }
}