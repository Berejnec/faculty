package com.company;

public class Main {

    public static void main(String[] args) {

        Tir tir1 = new Tir();
        Tir tir2 = new Tir();

        Remorca remorca4 = new Remorca("TM56PRY");
        System.out.println(remorca4.getNumarCutii());

        Remorca remorca1 = new Remorca(12,"B123CNV");
        Remorca remorca2 = new Remorca(20,"B154ABM");
        Remorca remorca3 = new Remorca("CS23TRE");

        tir1.adaugaRemorca(remorca1);
        tir1.adaugaRemorca(remorca2);
        tir1.adaugaRemorca(50,"sdasda");

        System.out.println(tir1.toString());

        tir2.adaugaRemorca( remorca1 );
        tir2.adaugaRemorca( remorca2 );
        tir2.adaugaRemorca(49,"asdasd");

        System.out.println(tir1.equals(tir2));

        tir1.adaugaRemorca(23,"TM29ASD");
        System.out.println(tir1.toString());


    }
}
