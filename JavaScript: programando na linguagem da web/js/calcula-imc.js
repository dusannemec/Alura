var titulo = document.querySelector(".titulo");
titulo.textContent = "Aparecida Nutricionista";

var pacientes = document.querySelectorAll(".paciente");

for (var i = 0; i < pacientes.length; i++) {
    var paciente = pacientes[i];

    var tdPeso = paciente.querySelector(".info-peso");
    var peso = tdPeso.textContent;

    var tdAltura = paciente.querySelector(".info-altura");
    var altura = tdAltura.textContent;

    var tdImc = paciente.querySelector(".info-imc");
    
    if (!validaPeso(peso)) {
        console.log("Peso inválido!");
        tdImc.textContent = "Peso inválido!";
        paciente.classList.add("paciente-invalido");
    } else if (!validaAltura(altura)) {
        console.log("Altura inválida!");
        tdImc.textContent = "Altura inválida!";
        paciente.classList.add("paciente-invalido");
    } else {;
        tdImc.textContent = calculaImc(peso, altura);
    }
}

function validaPeso(peso) {
    return peso >= 0 && peso < 1000;
}

function validaAltura(altura) {
    return altura > 0 && altura < 3;
}

function calculaImc(peso, altura) {
    var imc = peso / (altura * altura);
    return imc.toFixed(2);
}