export class Funcionario {
    constructor(nome, salario, cpf) {
        this._nome = nome;
        this._salario = salario;
        this._cpf = cpf;

        this._bonificacao = 1;
        this._senha;
    }

    get nome() {
        return this._nome;
    }

    set nome(n) {
        this._nome = nome;
    }

    get salario() {
        return this._salario;
    }

    set salario(valor) {
        if (valor < 500) {
            throw new Error("Salário Inválido!");
        }

        this._salario = this.salario;
    }

    get cpf() {
        return this._cpf;
    }

    get bonificacao() {
        return this._bonificacao;
    }

    autenticar(senha) {
        return senha == this._senha;
    }

    cadastrarSenha(senha) {
        this._senha = senha;
    }
}