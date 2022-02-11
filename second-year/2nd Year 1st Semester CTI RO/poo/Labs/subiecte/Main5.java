package com.subiecte;

class Pair3 {
    private int v;
    private int[] t;
    public Pair3(int x, int[] y) {
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
public class Main5 {
    public static Pair3 call(Pair3 p, Pair3 q) {
        q.setVT(100, p.getT());
        q = p;
        q.setVIT(53, 1 ,34);
        int[] tz = {88, 81};
        return new Pair3(20, tz);
    }
    public static void main(String[] args) {
        int[] ta = {71, 59};
        int[] tb = {11, 61};
        Pair3 a = new Pair3(19, ta);
        Pair3 b = new Pair3(83, tb);
        Pair3 c = b;
        b = call(a,b);
        System.out.println(c.getV());
    }
}

