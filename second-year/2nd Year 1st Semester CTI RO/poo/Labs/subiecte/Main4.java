package com.subiecte;

class Pair2 {
    private int v;
    private int[] t;
    public Pair2(int x, int[] y) {
        v = x;
        t = y;
    }
    public void setVT(int x, int[] y) {
        v = x;
        t = y;
    }
    public void setVIT(int x, int i, int y) {
        v = x;
        t[i] = y;
    }
    public int getV() {
        return v;
    }
    public int[] getT() {
        return t;
    }
}
public class Main4 {
    public static Pair3 call(Pair3 p, Pair3 q) {
        p.setVT(17, q.getT());
        p = q;
        p.setVIT(72, 1 ,21);
        int[] tz = {89, 41};
        return new Pair3(94, tz);
    }
    public static void main(String[] args) {
        int[] ta = {0, 13};
        int[] tb = {45, 99};
        Pair3 a = new Pair3(66, ta);
        Pair3 b = new Pair3(55, tb);
        Pair3 c = b;
        b = call(a,c);
        System.out.println(a.getT()[1]);
    }
}
