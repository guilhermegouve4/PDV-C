# Sistema de Caixa Autom�tico

Este � um projeto de um sistema de caixa autom�tico desenvolvido para a disciplina de Algoritmos e Programa��o do curso de An�lise e Desenvolvimento de Sistemas da Unicesumar. O sistema simula o processo de uma venda de produtos aliment�cios, calculando o total da compra e aplicando descontos ou juros com base na forma de pagamento escolhida.

## Equipe de Desenvolvimento
* **Guilherme Augusto Gouvea**
* **Alan Rossini Paulino**

---

## Funcionalidades
O algoritmo oferece as seguintes funcionalidades principais:

1.  **Menu Inicial:** Permite ao usu�rio iniciar uma nova venda ou sair do sistema.
2.  **Lista de Produtos:** Apresenta um menu com produtos aliment�cios, seus respectivos pre�os e o total acumulado da compra.
3.  **Adi��o de Produtos:** O usu�rio pode adicionar m�ltiplos produtos � compra.
4.  **Finaliza��o da Compra:** Ao terminar de adicionar produtos, o usu�rio pode finalizar a venda e escolher a forma de pagamento.
5.  **C�lculo de Pagamento:** O sistema calcula o valor final da compra com base nas condi��es de pagamento, aplicando:
    * **15% de desconto** para pagamento � vista (dinheiro ou Pix).
    * **10% de desconto** para pagamento � vista no cart�o de cr�dito.
    * Pre�o normal (sem juros) para pagamento parcelado em 2x.
    * **10% de juros** para pagamento parcelado em 3x ou mais.

---

## Como Compilar e Executar
Para rodar este programa, voc� precisar� de um compilador de C. Voc� pode usar o GCC (GNU Compiler Collection), que � o padr�o para a maioria dos sistemas operacionais.

1.  **Salve o C�digo:** Salve o c�digo-fonte em um arquivo com a extens�o `.c`, por exemplo: `caixa.c`.
2.  **Abra o Terminal/Prompt de Comando:** Navegue at� a pasta onde voc� salvou o arquivo.
3.  **Compile o C�digo:** Use o seguinte comando para compilar o arquivo:
    ```sh
    gcc caixa.c -o caixa
    ```
    * O comando `-o caixa` cria um arquivo execut�vel chamado `caixa` (ou `caixa.exe` no Windows).

4.  **Execute o Programa:**
    * **Windows:**
        ```sh
        caixa.exe
        ```
    * **Linux/macOS:**
        ```sh
        ./caixa
        ```

---

## Licen�a

Este projeto est� licenciado sob a **Licen�a MIT**.

MIT License

Copyright (c) 2025 Guilherme Augusto Gouvea e Alan Rossini Paulino

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.