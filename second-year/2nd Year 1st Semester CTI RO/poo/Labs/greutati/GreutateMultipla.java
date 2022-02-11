package com.greutati;

public class GreutateMultipla extends Greutate{

    private Greutate[] greutati = new Greutate[10];
    private int contor = 0;

    public GreutateMultipla(Greutate[] g){
        for(int i = 0; i < g.length; i++){
            this.greutati[this.contor] = g[i];
            this.contor++;
        }
    }

    public int capacitate(){

        int suma = 0;
        for(int i = 0; i < this.contor; i++){
            suma += this.greutati[i].capacitate();
        }

        return suma;
    }


}
