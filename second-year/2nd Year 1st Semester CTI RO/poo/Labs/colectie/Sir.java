package com.colectie;

public class Sir extends Tip {
    private String atributString;

    public Sir(String atributString) {
        this.atributString = atributString;
    }

    public String getTip() {
        return "Tip: Sir";
    }

    public String toString() {
        return this.atributString;
    }
}
