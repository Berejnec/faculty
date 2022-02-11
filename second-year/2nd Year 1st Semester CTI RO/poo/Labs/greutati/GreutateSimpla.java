package com.greutati;

public class GreutateSimpla extends Greutate{

    private int greutate;

    public GreutateSimpla(int greutate){
        this.greutate = greutate;
    }

    public int capacitate(){
        return this.greutate;
    }
}
