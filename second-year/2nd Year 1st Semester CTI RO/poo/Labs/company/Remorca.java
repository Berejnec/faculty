package com.company;

public class Remorca {
    private int numarCutii;
    private String numarInmatriculare;
    private static Remorca anterior = null;

    public Remorca(int numarCutii, String numarInmatriculare){
        this.numarCutii = numarCutii;
        this.numarInmatriculare = numarInmatriculare;
        anterior = this;
    }

    public Remorca(String numarInmatriculare){
        this.numarInmatriculare = numarInmatriculare;
        if (anterior == null){
            this.numarCutii = 10;
        }
        else {
            this.numarCutii = 1 + anterior.numarCutii;
        }
        anterior = this;
    }

    public int getNumarCutii(){
        return this.numarCutii;
    }

    public String getNumarInmatriculare(){
        return this.numarInmatriculare;
    }


}
