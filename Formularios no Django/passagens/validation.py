def origem_destino_iguais(origem, destino, lista_erros):
    if origem == destino:
        lista_erros['destino'] = 'Origem e destino não podem ser iguais'

def tem_numero(valor_campo, nome_campo, lista_erros):
    if(any(char.isdigit() for char in valor_campo)):
        lista_erros[nome_campo] = f'{nome_campo.capitalize()} inválido(a)! Não coloque números.'

def data_ida_maior_que_data_volta(data_ida, data_volta, lista_erros):
    if data_ida > data_volta:
        lista_erros['data_volta'] = 'Data de volta não pode ser menor que a data de ida'

def data_ida_menor_data_hoje(data_ida, data_pesquisa, lista_erros):
    if data_ida < data_pesquisa:
        lista_erros['data_ida'] = 'Data de ida menor que a data de hoje'