package com.telefoane;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Introdu numarul de telefoane: ");
        String linie;
        linie = in.readLine();
        int nrTelefoane;
        nrTelefoane = Integer.parseInt(linie);
        String nume;
        System.out.println("Introdu cele " + nrTelefoane + " telefoane: ");

        Telefon[] telefoane = new Telefon[nrTelefoane];
        for(int i = 0; i<nrTelefoane;i++){
            linie = in.readLine();
            telefoane[i] = new Telefon(linie);
        }
        telefoane[0].apeleaza(telefoane[2]);
        System.out.println(telefoane[2].toString());


    }
}
