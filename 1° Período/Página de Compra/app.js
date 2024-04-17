window.onload = function () {
    document
        .querySelector(".menu_mobile")
        .addEventListener("click", function () {
            if (
                document.querySelector(".menu nav ul").style.display == "flex"
            ) {
                document.querySelector(".menu nav ul").style.display = "none";
            } 
            
            else {
                document.querySelector(".menu nav ul").style.display = "flex";
            }
        });
};

function redirecionarParaCompra() {
    window.location.href = "index2.html";
  }

  function finalizarCompra() {
    var opcaoPagamento = document.querySelector('input[name="pagamento"]:checked').value;
    
    var endereco = document.getElementById("endereco").value;
    
    if (opcaoPagamento === "pix") {
      window.location.href = "pix.html";
    } else if (opcaoPagamento === "boleto") {
      window.location.href = "boleto.html";
    } else if (opcaoPagamento === "cartao") {
      window.location.href = "cartao.html";
    }
  }