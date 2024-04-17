function leDados () {
    let strDados = localStorage.getItem('db');
    let objDados = {};

    if (strDados) {
        objDados = JSON.parse (strDados);
    }
    else {
        objDados = { contatos: [ 
                        {nome: "João Lucas", telefone: "31-9123-8769", email: "joao05@gmail.com", idade: "62", Cidade: "Belo Horizonte"}, 
                        {nome: "Ailton Marques", telefone: "31-9234-9056", email: "ailtonm34@gmail.com", idade: "70", Cidade: "Belo Horizonte"}, 
                        {nome: "Marcia da Silva", telefone: "31-9834-9023", email: "marciasilva09@gmail.com", idade: "67", Cidade: "Belo Horizonte"} 
                    ]}
    }

    return objDados;
}

function salvaDados (dados) {
    localStorage.setItem ('db', JSON.stringify (dados));
}

function incluirContato() {
    
    let objDados = leDados();


    let strNome = document.getElementById('campoNome').value;
    let strTelefone = document.getElementById('campoTelefone').value;
    let strEmail = document.getElementById('campoEmail').value;
    let strIdade = document.getElementById('campoIdade').value;
    let strCidade = document.getElementById('campoCidade').value;
    let novoContato = {
        nome: strNome,
        telefone: strTelefone,
        email: strEmail,
        idade: strIdade,
        cidade: strCidade
    };
    objDados.contatos.push(novoContato);
    
    salvaDados(objDados);

    imprimeDados();
}

function excluirContato(index) {

    let objDados = leDados();

    objDados.contatos.splice(index, 1);

    salvaDados(objDados);

    imprimeDados();
}

function imprimeDados() {
    let tela = document.getElementById('tela');
    let strHtml = '';
    let objDados = leDados();
  
    strHtml += '<table>';
    strHtml += '<tr><th>Nome</th><th>Telefone</th><th>Email</th><th>Idade</th><th>Cidade</th><th>Ações</th></tr>';
  
    for (let i = 0; i < objDados.contatos.length; i++) {
      strHtml += '<tr>';
      strHtml += `<td>${objDados.contatos[i].nome}</td>`;
      strHtml += `<td>${objDados.contatos[i].telefone}</td>`;
      strHtml += `<td>${objDados.contatos[i].email}</td>`;
      strHtml += `<td>${objDados.contatos[i].idade}</td>`;
      strHtml += `<td>${objDados.contatos[i].cidade}</td>`;
      strHtml += `<td><button onclick="excluirContato(${i})">Excluir</button></td>`;
      strHtml += '</tr>';
    }
  
    strHtml += '</table>';
  
    tela.innerHTML = strHtml;
  }
  

document.getElementById ('btnCarregaDados').addEventListener ('click', imprimeDados);
document.getElementById ('btnIncluirContato').addEventListener ('click', incluirContato);

