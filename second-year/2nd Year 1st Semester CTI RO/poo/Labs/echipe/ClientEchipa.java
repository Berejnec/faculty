package com.echipe;

public class ClientEchipa {
    public static void main(String[] args){
        Echipa echipa1 = new Echipa("Berejnec");
        Echipa echipa2 = new Echipa("Popescu");

        echipa1.adaugaProgramator("John");
        echipa1.adaugaProgramator("Max");

        echipa2.adaugaProgramator("Florin");
        echipa2.adaugaProgramator("Vasile");
        echipa2.adaugaProgramator("Gigel");

        System.out.println(echipa1.calculeazaDurata(100.5));
        System.out.println(echipa2.calculeazaDurata(100.5));

        echipa1.mutaProgramatori(echipa2,2);

        System.out.println(echipa1.calculeazaDurata(100.5));
    }
}
