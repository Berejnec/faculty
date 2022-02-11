package com.subiecte;
class Xx {
    protected int v = 0;
    public Xx() {
        v+= 87;
    }
}
class Yy extends Xx {
    public Yy() {
        v += 94;
    }
    public int getV() {
        return v;
    }
}
class Zz extends Yy {
    public Zz() {
        v += 46;
    }
}
public class Main3 {
    public static void main(String[] args) {
        Xx x = new Zz();
        Yy y = new Yy();
        Zz z = new Zz();
        System.out.println(y.getV());
        System.out.println(z.getV());
        System.out.println(x.v);
    }
}
