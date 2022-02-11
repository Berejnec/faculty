package com.rafturi;

public class ClientRaft {
    public static void main(String[] args){
        Raft raft1 = new Raft(1,"Dulciuri");
        Raft raft2 = new Raft(2, "Carne");
        raft1.adaugaProdus("Skittles");
        raft1.adaugaProdus("Jeleuri");

        raft2.adaugaProdus("Pui");
        raft2.adaugaProdus("Cotlet");
        raft2.adaugaProdus("Ceafa");

        System.out.println(raft1);
        System.out.println(raft2);

        raft1.mutaProduse(raft2);

        System.out.println(raft1);
        System.out.println(raft2);

        raft2.mutaProduse(raft1);
        System.out.println(raft2);
        System.out.println(raft1);
    }
}
