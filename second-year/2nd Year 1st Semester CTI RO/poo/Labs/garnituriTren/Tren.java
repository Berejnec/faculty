package com.garnituriTren;

public class Tren {
    private Vagon[] vagon;

    public Tren(Vagon[] vagoane){
        this.vagon = new Vagon[15];
        for(int i = 0; i < vagoane.length; i++){
            this.vagon[i] = vagoane[i];
        }
    }

    private int getNrVagoane(){
        int contor = 0;
        for(int i = 0 ; i < 15; i++){
            if(vagon[i] != null)
                contor++;
        }
        return contor;
    }
    private int nrTotalColete(){
        int total = 0;
        for(int i = 0; i < this.getNrVagoane(); i++){
            total += vagon[i].getColete();
        }
        return total;
    }
    public boolean equals(Object o){
        if (o instanceof Tren){
            if(this.nrTotalColete() == ((Tren) o).nrTotalColete()){
                return true;
            }
        }
        return false;
    }

    public void afisareVagoane(){
        for(int i = 0; i < this.getNrVagoane(); i++){
            if(vagon[i] instanceof CalatoriA){
                System.out.println("CalatoriA");
            }
            if(vagon[i] instanceof CalatoriB){
                System.out.println("CalatoriB");
            }
            if(vagon[i] instanceof Marfa){
                System.out.println("Marfa");
            }
        }
    }

}
