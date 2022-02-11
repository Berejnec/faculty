package com.subiecte;

class ExA extends Exception {};
class ExB extends ExA {};

public class Main9 {
    public static int make(int a) throws ExA {
        for(int k = 0; k < 3; k++) {
            a = a + 2;
            if(a == 3) throw new ExB();
        }
        return a;
    }

    public static void main(String[] args) throws ExA {
        int x = 0;
        for(int i = 0; i < 2; i++) {
            try {
                x++;
                x = make(x);
                x++;
            } catch (ExB e) {
                System.out.println(e);
            } finally {
                x++;
            }
        }
        System.out.println(x);
    }
}
