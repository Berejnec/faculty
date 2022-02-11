package com.garnituriTren;

public class MainTren {
    public static void main(String[] args){
        Vagon[] vagon1 = new Vagon[3];
        vagon1[0] = new CalatoriA();
        vagon1[1] = new CalatoriB();
        vagon1[2] = new Marfa();

        Vagon[] vagon2 = new Vagon[4];
        vagon2[0] = new CalatoriA();
        vagon2[1] = new CalatoriB();
        vagon2[2] = new Marfa();
        //vagon2[3] = new Marfa();

        Tren tren1 = new Tren(vagon1);
        Tren tren2 = new Tren(vagon2);

        System.out.println(tren1.equals(tren2));
        tren1.afisareVagoane();
        tren2.afisareVagoane();
    }
}
