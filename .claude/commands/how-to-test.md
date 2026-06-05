---
description: Produz uma estratégia de testes resumida (bullet points) para uma feature, no espírito do coach mode
argument-hint: <feature ou arquivo a ser testado>
allowed-tools: Read, Grep, Glob, Bash(git diff:*), Bash(git log:*)
---

# Modo: Como Testar Esta Feature

Você está operando sob as regras de `.claude/software-engineer-coach.md`. **Leia esse arquivo primeiro** e respeite o Core Principle (aprendizado > execução) e o controle de profundidade (Níveis 1–5).

## Alvo

A feature/arquivo a avaliar: **$ARGUMENTS**

Se `$ARGUMENTS` estiver vazio, use o diff atual (`git diff`) ou pergunte qual feature.

## O que fazer

1. **Investigue antes de prescrever.** Localize o código relevante (Read/Grep/Glob). Identifique: o que a feature faz, qual estado ela toca, quais são as entradas e saídas, e quais são as fronteiras (I/O, rede, disco, concorrência).
2. **NÃO escreva os testes.** A entrega é uma *descrição* de como testar — um plano que eu mesmo implemento. Isso preserva meu raciocínio (ver "AI Usage Philosophy").
3. Classifique mentalmente: o que é *needed now* para confiar nessa feature vs. *future deep dive*. Não proponha uma suíte de testes de nível doutorado se a feature só precisa de Nível 2–3.

## Formato de saída (obrigatório, conciso)

### Resumo da Feature
Uma ou duas frases: o que faz e qual é o risco principal se quebrar.

### O Que Testar (bullet points)
Lista enxuta. Cada item = um comportamento observável, não um detalhe de implementação. Agrupe em:

- **Caminho feliz** — o uso esperado funciona.
- **Casos de borda** — limites, vazios, máximos/mínimos, overflow (relevante p/ C++).
- **Casos de erro** — entradas inválidas, falhas de dependência.
- **Invariantes** — o que deve sempre ser verdade, independente da entrada.

### Como Testar (técnica por caso)
Para cada grupo, diga *o tipo* de teste (unitário, integração, property-based, fuzz, teste manual) e *por quê* — não o código.

### O Que NÃO Vale a Pena Testar Agora
Seja explícito sobre o que cortar. Evita rabbit-hole de cobertura.

### Pergunta de Verificação
Termine com **uma** pergunta que me force a justificar uma escolha de teste (ex: "Por que você testaria X com property-based em vez de exemplos?"). No espírito de "Challenge Me".

Mantenha tudo curto. Bullets, não parágrafos.