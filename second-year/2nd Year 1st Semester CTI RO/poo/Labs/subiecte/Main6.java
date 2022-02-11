package com.subiecte;
class Ex extends Exception {};

public class Main6 {
    public static void main(String[] args) throws Ex{
        int $i = 0;
        int z$ = 0;
        while($i < 2) {
            try {
                int k = 0;
                while(k < 3) {
                    k++;
                    z$ = z$ + 2;
                    if($i == 0) throw new Ex();
                }
                z$ = z$ + 2;
            } catch(Ex e){
                System.out.println(e);
            } finally {
                z$ = z$ + 1;
            }
            $i++;
        }
        System.out.println(z$);
    }
}
