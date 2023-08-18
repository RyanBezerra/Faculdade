agenda = []

def adicionar_contato():
    nome = input("Digite o nome do contato: ")
    telefone = input("Digite o telefone do contato: ")
    contato = {"nome": nome, "telefone": telefone}
    agenda.append(contato)

def listar_contatos():
    if not agenda:
        print("A agenda está vazia.")
        return

    agenda_ordenada = sorted(agenda, key=lambda contato: contato['nome'])

    print("\nLista de Contatos:")
    for contato in agenda_ordenada:
        print(f"Nome: {contato['nome']}, Telefone: {contato['telefone']}")

def salvar_agenda():
    with open("agenda.txt", 'w') as arquivo:
        for contato in agenda:
            arquivo.write(f"{contato['nome']},{contato['telefone']}\n")
    print("Agenda salva.")

def carregar_agenda():
    try:
        with open("agenda.txt", 'r') as arquivo:
            for linha in arquivo:
                nome, telefone = linha.strip().split(',')
                contato = {"nome": nome, "telefone": telefone}
                agenda.append(contato)
        print("Agenda carregada.")
    except FileNotFoundError:
        print("Arquivo da agenda não encontrado. Será criado um novo.")

carregar_agenda()

while True:
    print("\nOpções:")
    print("1 - Adicionar contato")
    print("2 - Listar contatos")
    print("3 - Salvar e sair")

    opcao = input("Escolha uma opção: ")

    if opcao == '1':
        adicionar_contato()
    elif opcao == '2':
        listar_contatos()
    elif opcao == '3':
        salvar_agenda()
        print("Saindo.")
        break
    else:
        print("Opção inválida. Digite novamente.")
