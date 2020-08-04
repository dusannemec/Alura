import { Cliente } from "./Cliente.js";
import { Gerente } from "./Funcionario/Gerente.js"
import { Diretor } from "./Funcionario/Diretor.js"
import { SistemaAutenticacao } from "./SistemaAutenticacao.js";

const diretor = new Diretor("Rodrigo", 10000, 12345678900);
diretor.cadastrarSenha(123456789);

const gerente = new Gerente("Ricardo", 5000, 123456789001);
gerente.cadastrarSenha(123);

const cliente = new Cliente("Carol", 40855472312, 12345);

const estaLogadoDiretor = SistemaAutenticacao.login(diretor, "123456789");
const estaLogadoGerente = SistemaAutenticacao.login(gerente, "123");

console.log(estaLogadoDiretor);
console.log(estaLogadoGerente);

const estaLogadoCliente = SistemaAutenticacao.login(cliente, "12345");
console.log(estaLogadoCliente);