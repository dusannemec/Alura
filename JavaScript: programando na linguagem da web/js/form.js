var botaoAdicionar = document.querySelector("#adicionar-paciente");
botaoAdicionar.addEventListener("click", function (event) {
    event.preventDefault();

    var form = document.querySelector("#form-adiciona");

    // pegando os dados do formulário
    var paciente = obtemPacienteDoFormulario(form);
    
    adicionaPacienteNaTabela(paciente);

    form.reset();
    var ul = document.querySelector("#mensagem-erro");
    ul.innerHTML = "";
});

function adicionaPacienteNaTabela(paciente) {
    var erros = validaPaciente(paciente);
    if(erros.length > 0) {
        exibeMensagensDeErro(erros);
        return;
    }

    // cria tr e td do paciente
    var pacienteTr = montaTr(paciente);

    // adicionando o paciente na tabela
    var tabela = document.querySelector("#tabela-pacientes");
    tabela.appendChild(pacienteTr);

}

function obtemPacienteDoFormulario(form) {
    var paciente = {
        nome: form.nome.value,
        peso: form.peso.value,
        altura: form.altura.value,
        gordura: form.gordura.value,
        imc: calculaImc(form.peso.value, form.altura.value)
    };
    return paciente;
}

function montaTr(paciente) {
    var pacienteTr = document.createElement("tr");
    pacienteTr.classList.add("paciente");

    pacienteTr.appendChild(montaTd(paciente.nome, "info-nome"));
    pacienteTr.appendChild(montaTd(paciente.peso, "info-peso"));
    pacienteTr.appendChild(montaTd(paciente.altura, "info-altura"));
    pacienteTr.appendChild(montaTd(paciente.altura, "info-gordura"));
    pacienteTr.appendChild(montaTd(paciente.imc, "info-imc"));

    return pacienteTr;
}

function montaTd(dado, classe) {
    var td = document.createElement("td");
    td.textContent = dado;
    td.classList.add(classe);

    return td;
}

function validaPaciente(paciente) {
    var erros = [];

    if (paciente.nome.length == 0) {
        erros.push("O nome não pode ficar em branco!");
    }
    if (!validaPeso(paciente.peso) || paciente.peso.length == 0) {
        erros.push("Peso inválido!");
    }
    if (!validaAltura(paciente.altura) || paciente.altura.length == 0) {
        erros.push("Altura inválida!");
    }
    if (paciente.gordura.length == 0) {
        erros.push("A gordura não pode ficar em branco!")
    }

    return erros;
}

function exibeMensagensDeErro(erros) {
    var ul = document.querySelector("#mensagem-erro");
    ul.innerHTML = "";

    erros.forEach(function(erro) {
        var li = document.createElement("li");
        li.textContent = erro;
        ul.appendChild(li);
    });
    
    ul.classList.add("mensagem-erro");
}