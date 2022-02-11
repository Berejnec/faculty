package com.coordonate;

public class Punct {
    private int X;
    private int Y;

    public Punct(int X,int Y){
        this.X = X;
        this.Y = Y;
    }
    public double distanta(Punct punct){
        return (Math.sqrt( (punct.X - this.X)*(punct.X - this.X) + (punct.Y - this.Y)*(punct.Y - this.Y)));
    }
    public int getX(){
        return this.X;
    }

    public int getY(){
        return this.Y;
    }
}
