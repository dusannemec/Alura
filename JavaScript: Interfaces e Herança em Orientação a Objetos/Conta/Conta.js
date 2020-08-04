import { Cliente } from "./Cliente.js";

// classe abstrata
export class Conta {
    static quantidadeDeContas = 0;

    constructor (saldoInicial, agencia, cliente) {
        if (this.constructor == Conta) {
            throw new Error("Você não deveria instanciar um objeto do tipo conta.");
        }

        this._saldo = saldoInicial;
        this.agencia = agencia;
        this.cliente = cliente;
        
        Conta.quantidadeDeContas++;
    }

    set cliente(novoValor) {
        if (!(novoValor instanceof Cliente)) return;

        this._cliente = novoValor;
    }

    get cliente() {
        return this._cliente;
    }


    get saldo() {
        return this._saldo;
    }

    sacar(valor) {
        throw new Error("METODO ABSTRATO!");
    }

    _sacar(valor, taxa) {
        const valorSacado = valor * taxa;

        if (this._saldo < valorSacado) return 0;

        this._saldo -= valorSacado;
        return valor;
    }

    depositar(valor) {
        if (valor <= 0) return;

        this._saldo += valor;
    }

    transferir(valor, conta) {
        const valorSacado = this.sacar(valor);
        conta.depositar(valorSacado);
    }
}