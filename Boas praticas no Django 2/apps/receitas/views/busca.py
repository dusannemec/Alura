from django.shortcuts import render

from receitas.models import Receita

def busca(request):
    """
        Busca as receitas no banco e caso o campo de busca
        tenha sido deixado vazio, é mostrado todas as receitas
    """
    lista_receitas = Receita.objects.order_by('-date_receita').filter(publicada=True)
    if 'buscar' in request.GET:
        nome_a_buscar = request.GET['buscar']
        lista_receitas = lista_receitas.filter(nome_receita__icontains=nome_a_buscar)
    
    dados = {
        'receitas' : lista_receitas
    }

    return render(request, 'receitas/buscar.html', dados)
