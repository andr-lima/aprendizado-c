# 📚 Aprendizado em C

Repositório com meu aprendizado na linguagem C durante o **2º semestre** da faculdade.

## 🎓 Matérias

### Lógica de Programação e Algoritmos
Matéria teórica onde aprendemos os fundamentos da programação em C.

| Pasta | Conteúdo |
|-------|----------|
| `condicionais/` | Estruturas `if`, `else if`, `else` — calculadora, faixa etária, maior número, verificação de voto/habilitação |
| `condicionais-e-calculos/` | Condicionais aplicados com cálculos — descontos progressivos, classificação de notas, IMC |

### Prática Profissional II
Matéria prática onde exercitamos os conceitos em exercícios hands-on.

| Pasta | Conteúdo |
|-------|----------|
| `variaveis-e-operacoes/` | Variáveis, entrada/saída e operações — conta de restaurante com taxa, sistema de aprovação por média |
| `menus-e-interacao/` | Menus interativos e fluxo de telas — sistema de compra de carros com cadastro |

### Estudos Avulsos
Testes e experimentos que fiz por conta própria para praticar conceitos.

| Arquivo | Conteúdo |
|---------|----------|
| `bool.c` | Verificação de par/ímpar com `stdbool.h` |
| `for.c` | Loop `for` de 1 a 10 |
| `testeFor.c` | Laços aninhados — padrão triangular de asteriscos |
| `testefor2.c` | Soma acumulativa de 1 a 10 |
| `tiposDeDados.c` | Entrada e exibição de dados (int, float, char) |

## 🛠️ Como compilar

```bash
gcc arquivo.c -o arquivo -lm
./arquivo
```

> O flag `-lm` é necessário para programas que usam `math.h` (como o calculadora de IMC).
