package com.subiecte;
class X {
    protected int v = 0;
    public X() {
        v+= 10;
    }
    public void proc(X p) {
        System.out.println(91);
    }
}
class Y extends X {
    public Y() {
        v += 1;
    }
    public void proc(X p) {
        System.out.println(37);
    }
    public int getV() {
        return v;
    }
}
class Z extends Y {
    public Z() {
        v -= 5;
    }
    public void proc(Z p) {
        System.out.println(14);
    }
}

public class Main2{

    public static void main(String []args){
        X x = new Z();
        Y y = new Z();
        Z z = new Z();
        y.proc(z);
    }
}
