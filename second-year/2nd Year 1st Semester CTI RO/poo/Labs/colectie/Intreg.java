package com.colectie;

public class Intreg extends Tip {
    private int atributInt;

    public Intreg(int atributInt) {
        this.atributInt = atributInt;
    }
    public String getTip() {
        String tmp = "Tip: ";
        return tmp + "Intreg";
    }

    public String toString() {
        return this.atributInt + "";
    }

}
