package ed.filas;

import java.util.LinkedList;
import java.util.Queue;

public class TesteFila {
    public static void main(String[] args) {
        /*
        Fila fila = new Fila();

        fila.adiciona("Mauricio");
        System.out.println(fila);

        fila.adiciona("Guilherme");
        System.out.println(fila);

        String x1 = fila.remove();
        System.out.println(x1);
        System.out.println(fila);
        
        System.out.println(fila.vazia());
        */        

        Queue<String> filaDoJava = new LinkedList<String>();

        filaDoJava.add("Mauricio");
        System.out.println(filaDoJava);

        filaDoJava.add("Guilherme");
        System.out.println(filaDoJava);
        
        String x2 = filaDoJava.poll();
        System.out.println(x2);

        System.out.println(filaDoJava);
    }
}