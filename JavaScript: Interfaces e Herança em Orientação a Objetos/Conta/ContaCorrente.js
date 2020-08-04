import { Conta } from "./Conta.js";

export class ContaCorrente extends Conta {
    static quantidadeDeContas = 0;

    constructor (agencia, cliente) {
        super(0, agencia, cliente);
        
        ContaCorrente.quantidadeDeContas++;
    }

    // sobrescrevendo o comportamento de sacar
    sacar(valor) {
        const taxa = 1.1;
        return this._sacar(valor, taxa);
    }

}
