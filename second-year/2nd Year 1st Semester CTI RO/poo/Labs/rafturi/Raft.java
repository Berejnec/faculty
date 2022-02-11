package com.rafturi;

public class Raft {
    private int raion;
    private String nume;
    private String[] produse = new String[20];
    private int contor = 0;

    public Raft(int raion, String nume){
        this.raion = raion;
        this.nume = nume;
    }

    public void adaugaProdus(String numeProdus){
        if (contor >= 20)
            System.out.println("Nu mai este loc pe raft");
        else {
            this.produse[contor] = numeProdus;
            contor++;
        }
    }
    public boolean mutaProduse(Raft raft){
        int nrProduseLibere = 20 - this.contor;
        if(raft.contor > nrProduseLibere){
            return false;
        }

        for(int j = 0; j < raft.contor; j++){
            this.produse[this.contor] = raft.produse[j];
            this.contor++;
        }
        for(int k = raft.contor-1; k >= 0; k--){
            raft.contor--;
        }
        return true;
    }
    public String toString(){
        int temp = this.raion;
        String temp2 = " " + this.nume;
        for(int i=0;i<this.contor;i++){
            temp2 += " " + this.produse[i];
        }
        return temp + temp2;
    }

}
