import { Cliente } from "./Cliente.js";

export class ContaCorrente {
    static quantidadeDeContas = 0;

    agencia;
    _cliente;
    // #saldo = 0 https://github.com/tc39/proposal-class-fields#private-fields
    _saldo = 0;

    constructor (agencia, cliente) {
        this.agencia = agencia;
        this.cliente = cliente;
        
        ContaCorrente.quantidadeDeContas++;
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
        if (this._saldo < valor) return;

        this._saldo -= valor;
        return valor;
    }

    depositar(valor) {
        if (valor <= 0 || valor == undefined) return;

        this._saldo += valor;
    }

    transferir(valor, conta) {
        const valorSacado = this.sacar(valor);
        conta.depositar(valorSacado);
    }
}
