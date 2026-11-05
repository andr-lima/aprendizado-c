# Aprendizado em C

Registro dos meus estudos em C no **2º semestre da faculdade**, reunindo exercícios de Lógica de Programação, Prática Profissional e experimentos feitos por conta própria.

O objetivo é acompanhar minha evolução: entrada e saída, variáveis, operadores, decisões, repetições, vetores, menus e modularização com funções.

## Roteiro de estudos

| Etapa | Pasta | Conceitos praticados |
| --- | --- | --- |
| 1 | [Entrada e saída](logica-de-programacao/entrada-e-saida) | Impressão de sequências com `printf` e leitura básica |
| 2 | [Condicionais](logica-de-programacao/condicionais) | `if`, `else if`, `else`, comparações e operadores lógicos |
| 3 | [Condicionais e cálculos](logica-de-programacao/condicionais-e-calculos) | Descontos, classificação de notas e cálculo de IMC (`-lm`) |
| 4 | [Repetição](logica-de-programacao/repeticao) | Laços `while`, `do while`, `for`, contadores e acumuladores |
| 5 | [Vetores](logica-de-programacao/vetores) | Arrays unidimensionais, manipulação de índices, cálculo de média e maior valor |
| 6 | [Variáveis e operações](pratica-profissional-II/variaveis-e-operacoes) | Conta de restaurante com taxas e sistema de aprovação por média |
| 7 | [Menus e interação](pratica-profissional-II/menus-e-interacao) | Escolha de veículos, fluxo de telas e leitura segura de texto com `fgets` |
| 8 | [Menus com switch](pratica-profissional-II/menus-com-switch) | Menus de seleção múltipla (pizzaria, sorveteria, calculadora modular) |
| 9 | [Sistemas e cadastros](pratica-profissional-II/sistemas-e-cadastros) | Cadastros de alunos, profissionais, validação de login e modularização de funções |
| 10 | [Estudos avulsos](estudos-avulsos) | Experimentos pessoais com tipos, booleanos (`stdbool.h`) e laços aninhados |

Cada arquivo `.c` é independente e contém seu próprio `main`, devendo ser compilado separadamente.

---

## Como compilar e executar

É necessário ter um compilador C (como o GCC). Abra o terminal na raiz do repositório:

### No Linux:
```bash
# Cria o diretório de compilação ignorado pelo Git
mkdir -p build

# Compila o exercício desejado
gcc -std=c11 -Wall -Wextra logica-de-programacao/repeticao/for/soma-1-a-n.c -o build/soma-1-a-n

# Executa
./build/soma-1-a-n
```

> **Nota:** Para programas que utilizam a biblioteca matemática `<math.h>` (como a calculadora de IMC), inclua a flag `-lm` no final do comando de compilação:
> ```bash
> gcc logica-de-programacao/condicionais-e-calculos/calculadoraIMC.c -o build/calculadoraIMC -lm
> ```

### No Windows (PowerShell):
```powershell
New-Item -ItemType Directory -Force build
gcc -std=c11 -Wall -Wextra logica-de-programacao/repeticao/for/soma-1-a-n.c -o build/soma-1-a-n.exe
.\build\soma-1-a-n.exe
```

---

## Padronização e Versionamento

O histórico de commits deste projeto segue o padrão do [Conventional Commits](https://www.conventionalcommits.org/):
* `feat`: novos exercícios ou módulos
* `fix`: correções de bugs ou lógica
* `docs`: atualizações de documentação e anotações
* `refactor`: refatoração de código sem alteração do comportamento
* `chore`: configurações, organização de diretórios e `.gitignore`

Artefatos de compilação, executáveis binários (`.exe`, binários Linux sem extensão, `output/`, `build/`) e arquivos temporários são mantidos estritamente fora do controle de versão via `.gitignore`.
