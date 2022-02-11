package com.echipe;

public class Echipa {
    private String[] membru = new String[10];
    private int contor = 0;

    public Echipa(String membru){
        this.membru[contor] = membru;
        this.contor++;
    }
    public void adaugaProgramator(String membru){
        int ok = 1;
        for(int i=0; i<this.contor; i++){
            if(this.membru[i].equals(membru))
                ok = 0;
        }
        if(this.contor >= 10)
            ok = 0;
        if(ok == 1){
            this.membru[this.contor] = membru;
            this.contor++;
        }
    }
    public void mutaProgramatori(Echipa echipa, int nrMutat){
        if((echipa.contor <= 10 - this.contor) && (nrMutat <= echipa.contor)){
            for(int i = 0; i < nrMutat; i++){
                this.membru[this.contor] = echipa.membru[i];
                this.contor++;
            }
        }
    }
    public double calculeazaDurata(double nrOre){
        return (nrOre/(this.contor-1));
    }
}
