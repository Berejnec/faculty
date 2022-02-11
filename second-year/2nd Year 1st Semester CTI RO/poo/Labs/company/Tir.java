package com.company;

public class Tir {
    private Remorca[] remorca = new Remorca[ 5 ];
    private int position = 0;

    public boolean adaugaRemorca(int numarCutii, String numarInmatriculare){
        if (position < 5){
            remorca[position] = new Remorca(numarCutii,numarInmatriculare);
            position++;
            return true;
        }
        return false;
    }

    public boolean adaugaRemorca(Remorca remorca1){
        if (position >= 5)
            return false;
        remorca[position] = remorca1;
        position++;
        return true;
    }

    public Remorca stergeRemorca(String numarInmatriculare) {
        int temp = -1;
        for(int i=0; i < position; i++)
            if( remorca[i].getNumarInmatriculare().equals(numarInmatriculare))
            {	temp = i;
                break;
            }
        if(position != -1){
            Remorca remorca1 = remorca[ temp ];
            for(int i = temp; i < position - 1; i++)
                remorca[ i ] = remorca[i + 1];
            position--;
            return remorca1;
        }
        return null;
    }

    @Override
    public boolean equals(Object o){
        if (o instanceof Tir){
            int suma1 = 0;
            int suma2 = 0;
            for (int i = 0;i < position;i++){
                suma1 += remorca[i].getNumarCutii();
            }
            for (int i = 0; i < ((Tir)o).position;i++){
                suma2 += ((Tir)o).remorca[i].getNumarCutii();
            }
            if (suma1 == suma2)
                return true;
        }
        return false;
    }
    @Override
    public String toString(){
        String string = "T ";
        for(int i=0;i<position;i++){
            string += "->" + " R(" + remorca[i].getNumarInmatriculare() + "," + remorca[i].getNumarCutii() + ")" + " ";
        }
    return string;
    }

}
