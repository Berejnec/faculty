package com.coordonate;

public class Source {
    public static void main(String[] args){
        CoordonateCarteziene coordonate = new CoordonateCarteziene();
        coordonate.adaugaPunct(1,2);
        coordonate.adaugaPunct(2,3);
        coordonate.adaugaPunct(5,6);
        coordonate.adaugaPunct(1,2);
        coordonate.adaugaPunct(6,9);
        coordonate.adaugaPunct(2,3);
        System.out.println(coordonate);
    }
}
