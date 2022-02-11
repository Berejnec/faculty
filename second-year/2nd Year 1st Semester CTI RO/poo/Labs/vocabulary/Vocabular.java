package com.vocabulary;

public class Vocabular {
    private String[] cuvinte = new String[1000];
    private int contor = 0;

    public Vocabular(String cuvant){
        this.cuvinte[this.contor] = cuvant;
        this.contor++;
    }

    public void adaugaCuvinte(String[] cuvinte){
        while(true){
            if(this.contor < 1000){
                for(int i=0;i< cuvinte.length;i++){
                    this.cuvinte[this.contor] = cuvinte[i];
                    this.contor++;
                }
                break;
            } else break;
        }
    }

    public int determinaDiferente(Vocabular voc){
        int count = 0;
        for(int i=0;i<voc.contor;i++){
            if(!this.cautaCuvant(voc.getCuvant(i)))
                count++;
        }
        return count;
    }

    public String toString(){
        String temp = "";
        for(int i=0;i < this.contor; i++){
            temp += this.cuvinte[i];
        }
        return temp;
    }

    private boolean cautaCuvant(String cuvant){
        for(int i = 0; i<this.contor;i++){
            if(this.cuvinte[i].equals(cuvant))
                return true;
        }
        return false;
    }

    private String getCuvant(int index){
        return this.cuvinte[index];
    }


}
