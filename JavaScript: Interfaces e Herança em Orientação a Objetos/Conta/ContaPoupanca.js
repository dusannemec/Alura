import { Conta } from "./Conta.js";

export class ContaPoupanca extends Conta {
    static quantidadeDeContas = 0;

    constructor(saldoInicial, cliente, agencia) {
        super(saldoInicial, agencia, cliente);

        ContaPoupanca.quantidadeDeContas++;
    }

    sacar(valor) {
        const taxa = 1.02;
        return this._sacar(valor, taxa);
    }
}