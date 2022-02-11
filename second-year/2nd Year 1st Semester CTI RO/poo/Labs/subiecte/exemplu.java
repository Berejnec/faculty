package com.subiecte;

abstract class A {
    public int proc(A p) {
        return 74;
    }
}
class B extends A {
    public int proc(A p) {
        return 33;
    }
}
class C extends A {
    public int proc(C p) {
        return 71;
    }
}
public class exemplu {
    public static void main(String[] args) {
        C x = new C();
        A y = new B();
        C z = new C();
        System.out.println(y.proc(x) + z.proc(x));
    }
}
