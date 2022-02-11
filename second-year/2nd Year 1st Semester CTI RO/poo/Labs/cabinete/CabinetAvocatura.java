package com.cabinete;

public class CabinetAvocatura {
    private String numeAvocat;
    private int numarCazuri = 0;
    private String[] cazuri = new String[40];

    public CabinetAvocatura(String numeAvocat){
        this.numeAvocat = numeAvocat;
    }
    public void adaugaCaz(String reclamant, String acuzat){
        if(numarCazuri < 40){
            this.cazuri[numarCazuri] = reclamant + " vs. " + acuzat;
            numarCazuri++;
        }
    }

    public CabinetAvocatura formeazaAlianta(CabinetAvocatura cabinet){

        if(this.numarCazuri + cabinet.numarCazuri >= 40)
            return null;
        else{
            CabinetAvocatura cabinetNou = new CabinetAvocatura(this.numeAvocat + " - " + cabinet.numeAvocat);
            for(int i=0;i<this.numarCazuri;i++){
                cabinetNou.cazuri[i] = this.cazuri[i];
                cabinetNou.numarCazuri++;
            }
            for(int i=0;i<cabinet.numarCazuri;i++){
                cabinetNou.cazuri[cabinetNou.numarCazuri] = cabinet.cazuri[i];
                cabinetNou.numarCazuri++;
            }
            return cabinetNou;
        }
    }

    public String toString(){
        String nume = this.numeAvocat;
        String caz = "";
        for(int i = 0; i < this.numarCazuri; i++){
            caz += this.cazuri[i] + " ";
        }
        return nume + "\n" + caz;
    }

}
