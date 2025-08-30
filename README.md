# Sistema de Caixa Automático

Este é um projeto de um sistema de caixa automático desenvolvido para a disciplina de Algoritmos e Programação do curso de Análise e Desenvolvimento de Sistemas da Unicesumar. O sistema simula o processo de uma venda de produtos alimentícios, calculando o total da compra e aplicando descontos ou juros com base na forma de pagamento escolhida.

## Equipe de Desenvolvimento
* **Guilherme Augusto Gouvea**
* **Alan Rossini Paulino**

---

## Funcionalidades
O algoritmo oferece as seguintes funcionalidades principais:

1.  **Menu Inicial:** Permite ao usuário iniciar uma nova venda ou sair do sistema.
2.  **Lista de Produtos:** Apresenta um menu com produtos alimentícios, seus respectivos preços e o total acumulado da compra.
3.  **Adição de Produtos:** O usuário pode adicionar múltiplos produtos à compra.
4.  **Finalização da Compra:** Ao terminar de adicionar produtos, o usuário pode finalizar a venda e escolher a forma de pagamento.
5.  **Cálculo de Pagamento:** O sistema calcula o valor final da compra com base nas condições de pagamento, aplicando:
    * **15% de desconto** para pagamento à vista (dinheiro ou Pix).
    * **10% de desconto** para pagamento à vista no cartão de crédito.
    * Preço normal (sem juros) para pagamento parcelado em 2x.
    * **10% de juros** para pagamento parcelado em 3x ou mais.

---

## Como Compilar e Executar
Para rodar este programa, você precisará de um compilador de C. Você pode usar o GCC (GNU Compiler Collection), que é o padrão para a maioria dos sistemas operacionais.

1.  **Salve o Código:** Salve o código-fonte em um arquivo com a extensão `.c`, por exemplo: `caixa.c`.
2.  **Abra o Terminal/Prompt de Comando:** Navegue até a pasta onde você salvou o arquivo.
3.  **Compile o Código:** Use o seguinte comando para compilar o arquivo:
    ```sh
    gcc caixa.c -o caixa
    ```
    * O comando `-o caixa` cria um arquivo executável chamado `caixa` (ou `caixa.exe` no Windows).

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

## Licença

Este projeto está licenciado sob a **Licença MIT**.

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