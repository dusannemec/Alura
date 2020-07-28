console.log(`Trabalhando com condicionais`);

const listaDeDestinos = new Array(
    `Salvador`,
    `São Paulo`,
    `Rio de Janeiro`,
);

listaDeDestinos.push(`Curitiba`); // adicionando um item na lista

const idadeComprador = 18;
const estaAcompanhada = true;
const passagemComprada = true;

console.log("Destinos possíveis: ");
console.log(listaDeDestinos);

// if(idadeComprador >= 18) {
//     console.log("Comprador maior de idade");
//     listaDeDestinos.splice(1,1); // removendo item  
// } else if (estaAcompanhada) {
//     console.log("Comprador está acompanhado");
//     listaDeDestinos.splice(1,1); 
// } else {
//     console.log("Não é maior de idade e não posso vender");
// }

if(idadeComprador >= 18 || estaAcompanhada) {
    console.log("Comprador maior de idade");
    listaDeDestinos.splice(2,1); // removendo item  
} else {
    console.log("Não é maior de idade e não posso vender");
}

console.log("Embarque: \n\n");
if (idadeComprador >= 18 && passagemComprada) {
    console.log("Pode embarcar");
} else {
    console.log("Não pode embarcar");
}

console.log(listaDeDestinos);
