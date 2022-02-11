package com.garnituriTren;

public abstract class Calatori extends Vagon{
    public abstract int getPasageri();
    public void deschidereUsi(){
        System.out.println("Usile au fost deschise!");
    }
    public void inchidereUsi(){
        System.out.println("Usile au fost inchise!");
    }
}
