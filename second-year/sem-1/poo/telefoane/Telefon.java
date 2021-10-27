package com.telefoane;

public class Telefon {
    private String numeProprietar;
    private String[] nume = new String[100];
    private int count = 0;
    private int countApeluri = 0;

    public Telefon(String numeProprietar){

        this.numeProprietar = numeProprietar;
    }

    public boolean apeleaza(Telefon telefon){
        if (telefon.count > 100){
            return false;
        }
        telefon.nume[telefon.count] = this.numeProprietar;
        telefon.count++;
        this.countApeluri++;
        return true;
    }

    public Integer numarDeApeluri(String nume){
        Integer nrApeluri = 0;
        for (int i = 0;i < count;i++){
            if(this.nume[i].equals(nume)){
                nrApeluri = countApeluri;
            }
            break;
        }
        return nrApeluri;
    }



    public String toString(){
        String str = "Nume proprietar: " + this.numeProprietar + " Nume apelatori:";
        for(int i = 0;i<count;i++){
            str += " " + this.nume[i];
        }
        return str;
    }


}
