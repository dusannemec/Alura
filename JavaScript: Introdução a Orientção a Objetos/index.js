import {Cliente} from "./Cliente.js";
import {ContaCorrente} from "./ContaCorrente.js";

const cliente1 = new Cliente("Ricardo", 11122233309);
const cliente2 = new Cliente("Alice", 33322211101);

const contaCorrente1 = new ContaCorrente(1001, cliente1);
contaCorrente1.depositar(500);

const contaCorrente2 = new ContaCorrente(1001, cliente2);
contaCorrente1.transferir(200, contaCorrente2);

console.log(contaCorrente1);
console.log(contaCorrente2);

console.log(ContaCorrente.quantidadeDeContas);
