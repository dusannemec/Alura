console.log(`Trabalhando com condicionais`);

const listaDeDestinos = new Array(
    `Salvador`,
    `São Paulo`,
    `Rio de Janeiro`,
);

let passagemComprada;

const idadeComprador = 18;
const estaAcompanhada = true;
const destino = "Rio de Janeiro";

console.log("Destinos possíveis: ");
console.log(listaDeDestinos);

const podeComprar = idadeComprador >= 18  || estaAcompanhada;

let contador = 0;
let destinoExiste = false;

// while (contador < 3) {
//     if (listaDeDestinos[contador] == destino) {
//         destinoExiste = true;
//         break;
//     }
//     contador++;
// }

for (let cont = 0; cont < 3; cont++) {
    if (listaDeDestinos[cont] == destino) {
        destinoExiste = true;
        break;
    }
}

console.log("Destino existe: ", destinoExiste);

if (podeComprar && destinoExiste) {
    console.log("Boa Viagem!!!");
} else {
    console.log("Desculpe tivemos um erro!");
}
