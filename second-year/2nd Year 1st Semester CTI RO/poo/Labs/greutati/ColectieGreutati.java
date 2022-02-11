package com.greutati;

public class ColectieGreutati {
    private Greutate[] greutati;
    private int contor;

    public ColectieGreutati(int nrMaxGreutati){
        this.contor = nrMaxGreutati;
        greutati = new Greutate[nrMaxGreutati];
    }

    public void adauga(Greutate g){
        for(int i = 0; i < this.contor; i++){
            if(greutati[i] == null){
                this.greutati[i] = g;
                break;
            }
        }
    }

    private int getContor(){
        return this.contor;
    }

    public double medie(){
        int capacitateTotala = 0;
        for(int i = 0; i< this.contor; i++){
            capacitateTotala += this.greutati[i].capacitate();
        }

        return capacitateTotala/this.getContor();
    }

    public static void main(String[] args){

        ColectieGreutati colectie = new ColectieGreutati(5);

        Greutate[] greutati = new Greutate[5];

        GreutateSimpla greutateSimpla1 = new GreutateSimpla(50);
        GreutateSimpla greutateSimpla2 = new GreutateSimpla(65);
        GreutateSimpla greutateSimpla3 = new GreutateSimpla(99);

        GreutateDubla greutateDubla1 = new GreutateDubla(greutateSimpla1, greutateSimpla2);
        GreutateDubla greutateDubla2 = new GreutateDubla(greutateSimpla2, greutateSimpla3);

        greutati[0] = greutateSimpla1;
        greutati[1] = greutateSimpla2;
        greutati[2] = greutateSimpla3;
        greutati[3] = greutateDubla1;
        greutati[4] = greutateDubla2;

        GreutateMultipla greutateMultipla = new GreutateMultipla(greutati);

        colectie.adauga(greutateSimpla1);
        colectie.adauga(greutateSimpla2);
        colectie.adauga(greutateSimpla3);
        colectie.adauga(greutateDubla1);
        colectie.adauga(greutateMultipla);

        System.out.println("Greutatea medie a colectiei este : " + colectie.medie());
    }

}
