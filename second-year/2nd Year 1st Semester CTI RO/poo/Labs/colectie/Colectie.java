package com.colectie;
import java.util.Iterator;
import java.util.LinkedList;

public class Colectie extends Tip {

    private LinkedList<Tip> lista = new LinkedList<Tip>();

    public String getTip() {
        return "Tip : Colectie";
    }

    public String toString() {
        String tmp = "";
        Iterator<Tip> iterator = lista.iterator();

        while(iterator.hasNext()) {
            tmp += iterator.next().toString() + " ";
        }
        return tmp;
    }

    public void adaugaElement(Tip element) {
        this.lista.add(element);
    }
}
