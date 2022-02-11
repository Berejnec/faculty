package com.greutati;

public class GreutateDubla extends Greutate{

    private Greutate greutate1;
    private Greutate greutate2;

    public GreutateDubla(Greutate greutate1,Greutate greutate2){
        this.greutate1 = greutate1;
        this.greutate2 = greutate2;
    }
    public int capacitate(){
        return this.greutate1.capacitate() + this.greutate2.capacitate();
    }

    public void setGreutate1(Greutate greutate1) {
        this.greutate1 = greutate1;
    }

    public void setGreutate2(Greutate greutate2) {
        this.greutate2 = greutate2;
    }
}
