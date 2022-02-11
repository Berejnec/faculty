package com.microbuze;

public class ClientMicrobuz {
    public static void main(String[] args){
        Microbuz buz1 = new Microbuz("Volkswagen","Gigel Frone");
        Microbuz buz2 = new Microbuz("Mercedes-Benz","Liviu Florinescu");

        buz1.urca("Adi");
        buz1.urca("Robi");
        buz1.urca("Denis");

        buz2.urca("Adelina");
        buz2.urca("Daniela");

        buz2.transferaPasageri(buz1);

        System.out.println(buz1);

        buz1.transferaPasageri(buz2);
        System.out.println(buz2);
    }
}
