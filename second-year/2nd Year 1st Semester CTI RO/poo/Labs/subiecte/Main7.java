package com.subiecte;

class SuperClass {
    public SuperClass() {
        System.out.println("Constructor from SuperClass");
        methodCall();
    }
    public void methodCall() {
        System.out.println("Method from SuperClass");
    }
}
class SubClass extends SuperClass {
    public SubClass() {
        System.out.println("Constructor from SubClass");
    }
    public void methodCall() {
        System.out.println("Method from SubClass");
    }
}
public class Main7 {
    public static void main(String[] args) {
        SubClass s = new SubClass();
    }
}