package com.coordonate;

public class CoordonateCarteziene {
    private Punct[] puncte = new Punct[128];
    private int contor = 0;

    public void adaugaPunct(int X, int Y){
        int ok = 1;
        for(int i=0; i< this.contor && ok == 1; i++){
            if( (this.puncte[i].getX() == X && this.puncte[i].getY() == Y) || this.contor >= 128 ){
                System.out.println("Adaugare punct esuata");
                ok = 0;
            }
        }
        if(ok == 1){
            this.puncte[this.contor] = new Punct(X, Y);
            this.contor++;
        }

    }

    public String toString(){
        String temp = "";
        for(int i=0;i<this.contor;i++){
            temp += "(" + this.puncte[i].getX() + "," + this.puncte[i].getY() + ")" + " ";
        }
        return temp;
    }
}
