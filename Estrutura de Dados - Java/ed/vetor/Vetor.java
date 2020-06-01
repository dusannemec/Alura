package ed.vetor;

import java.util.Arrays;

public class Vetor {
    
    private Aluno[] alunos = new Aluno[100];
    private int totalDeAlunos = 0;

    private boolean posicaoOcupada(int posicao) {
        return posicao >= 0 && posicao < totalDeAlunos;
    }

    private void garanteEspaco() {
        if (totalDeAlunos == alunos.length) {
            Aluno[] novoArray = new Aluno[alunos.length*2];
            for (int i = 0; i < alunos.length; i++)
                novoArray[i] = alunos[i];
            this.alunos = novoArray;
        }
    }

    public void adiciona(Aluno aluno) {
        this.garanteEspaco();

        this.alunos[totalDeAlunos] = aluno;
        totalDeAlunos++;
    }

    public void adiciona(int posicao, Aluno aluno) {
        this.garanteEspaco();

        if (!posicaoOcupada(posicao)) {
            throw new IllegalArgumentException("Posição inválida!");
        }

        for (int i = totalDeAlunos - 1; i >= posicao; i--) {
            alunos[i+1] = alunos[i];
        }
        alunos[posicao] = aluno;
        totalDeAlunos++;
    }

    public Aluno pega(int posicao) {
        // recebe uma posição e devolve o aluno
        if (!posicaoOcupada(posicao)) {
            throw new IllegalArgumentException("Posição inválida!");
        }

        return alunos[posicao];
    }

    public void remove(int posicao) {
        // remove pela posição
        for(int i = posicao; i < this.totalDeAlunos; i++) {
            this.alunos[i] = this.alunos[i+1];
        }
        totalDeAlunos--;
    }

    public boolean contem(Aluno aluno) {
        for (int i = 0; i < totalDeAlunos; i++) {
            if(aluno.equals(alunos[i])) {
                return true;
            }
        }
        return false;
    }

    public int tamanho() {
        // devolve a quantidade de alunos
        return totalDeAlunos;
    }

    @Override
    public String toString() {
        return Arrays.toString(alunos);
    }

}