package com.cabinete;

public class MainAvocat {
    public static void main(String[] args){
        CabinetAvocatura cab1 = new CabinetAvocatura("Berejnec");
        CabinetAvocatura cab2 = new CabinetAvocatura("Popescu");
        CabinetAvocatura cabinetAlianta;
        cab1.adaugaCaz("Florin","Mircea");
        cab1.adaugaCaz("Gheorghe","Mihai");

        cab2.adaugaCaz("Marinela","Daniela");
        cab2.adaugaCaz("Simina","Teodora");
        cab2.adaugaCaz("Teofila","Eleonora");

        cabinetAlianta = cab1.formeazaAlianta(cab2);
        System.out.println(cabinetAlianta);
    }
}
