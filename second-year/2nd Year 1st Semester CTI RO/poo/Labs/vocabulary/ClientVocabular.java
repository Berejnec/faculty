package com.vocabulary;

public class ClientVocabular {
    public static void main(String[] args){
        Vocabular voc1 = new Vocabular("masina");
        Vocabular voc2 = new Vocabular("poarta");
        String[] cuvinte = {"regina","varza","bani"};
        String[] cuvinte2 = {"lopata","faima"};
        voc1.adaugaCuvinte(cuvinte);
        voc2.adaugaCuvinte(cuvinte);
        voc2.adaugaCuvinte(cuvinte2);
        System.out.println(voc1);
        System.out.println(voc2);
        System.out.println(voc2.determinaDiferente(voc1));

    }
}
