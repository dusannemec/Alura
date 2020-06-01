package ed.pilhas;

import java.util.Stack;

public class TestePilha {
    public static void main(String [] args) {
        /*
        Pilha pilha = new Pilha();

        pilha.push("Mauricio");
        System.out.println(pilha);

        pilha.push("Guilherme");
        System.out.println(pilha);

        System.out.println(pilha.pop());
        System.out.println(pilha.pop());
        System.out.println(pilha);

        System.out.println(pilha.vazia());
        */

        Stack<String> stack = new Stack<String>();

        stack.push("Mauricio");
        stack.push("Marcelo");
        System.out.println(stack);

        stack.pop();
        System.out.println(stack);

        String nome = stack.peek();
        System.out.println(nome);
        System.out.println(stack);
    }
}