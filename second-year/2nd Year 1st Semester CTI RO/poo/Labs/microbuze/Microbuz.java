package com.microbuze;

public class Microbuz {
    private String marca;
    private String numeProprietar;
    private String[] numePasager = new String[14];
    private int contor = 0;

    public Microbuz(String marca,String numeProprietar){
        this.marca = marca;
        this.numeProprietar = numeProprietar;
    }

    public boolean urca(String pasager){
        if(this.contor >= 14){
            return false;
        }
        this.numePasager[this.contor] = pasager;
        this.contor++;
        return true;
    }

    public boolean transferaPasageri(Microbuz microbuz){
        if(this.contor > 14 - microbuz.contor){
            return false;
        }
        for(int i=0; i<this.contor;i++){
            microbuz.numePasager[microbuz.contor] = this.numePasager[i];
            microbuz.contor++;
        }
        for(int i=this.contor-1;i >= 0;i--){
            this.contor--;
        }
        return true;
    }

    public String toString(){
        String temp = this.marca + " " + this.numeProprietar + " :";
        for(int i = 0; i < this.contor;i++){
            temp += " " + this.numePasager[i];
        }
        return temp;
    }

}
