package com.problema;

public class Main {
    public static void main(String[] args) {
        FishService fishService = new FishService();
        Pescar Dorel = new Pescar();
        Dorel.adaugaPeste(
                fishService.descoperaPeste(
                        Dorel.aruncaUndita()
                )
        );
        Dorel.adaugaPeste(
                fishService.descoperaPeste(
                        Dorel.aruncaUndita()
                )
        );
        Dorel.adaugaPeste(
                fishService.descoperaPeste(
                        Dorel.aruncaUndita()
                )
        );
        Dorel.adaugaPeste(
                fishService.descoperaPeste(
                        Dorel.aruncaUndita()
                )
        );
        System.out.println(Dorel.uitateInGaleata());
    }
}

class Pescar {
    private String galeate;
    public Pescar() {
        galeate = "";
    }
    public void adaugaPeste(String x) {
        galeate = galeate + x + ", ";
    }

    public String uitateInGaleata() {
        return galeate;
    }

    public Peste aruncaUndita() {
        return new Peste((int) (Math.random() * 5));
    }
}

class Peste {
    int type;
    public Peste(int type) {
        this.type = type;
    }
}

class FishService {
    public String descoperaPeste(Peste x) {
        return  (x.type == 0) ? "ai pierdut pestele"
                : (x.type == 1) ? "Pastrav"
                : (x.type == 2) ? "Caras"
                : (x.type == 3) ? "Biban"
                : (x.type == 4) ? "Somn"
                : "Stiuca";
    }
}


