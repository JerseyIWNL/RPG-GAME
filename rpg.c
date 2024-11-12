#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


struct Personagem {
  char nome[21];
  int raca;
  int alinhamento;
  int profissao;
  int meta;
  int meio;
  int porte;
};


void criarPersonagem(struct Personagem *personagem) {
  printf("\n=== Criação de Personagem ===\n");
  printf("Qual o seu nome: ");
    scanf("%s", personagem->nome);

  loop1:
  printf("\nDigite a Raça do personagem:\n");
  printf("1 - Humano\n");
  printf("2 - Anão\n");
  printf("3 - Elfo\n");
    scanf("%d", &personagem->raca);
  if(personagem->raca < 1 || personagem->raca > 3){
    printf("\n!!! Opção inválida !!!\n");
    printf("Escolha entre 1, 2 e 3.\n");
    goto loop1;
  }

  loop2:
  printf("\nDigite o Alinhamento do\n");
  printf("personagem:\n");
  printf("1 - Mal\n");
  printf("2 - Neutro\n");
  printf("3 - Bom\n");
    scanf("%d", &personagem->alinhamento);
  if(personagem->alinhamento < 1 || personagem->alinhamento > 3){
    printf("\n!!! Opção inválida !!!\n");
    printf("Escolha entre 1, 2 e 3.\n");
    goto loop2;
  }

  loop3:
  if(personagem->alinhamento == 3){
    printf("\nDigite a Profissão:\n");
    printf("1 - Guerreiro\n");
    printf("2 - Mago\n");
      scanf("%d", &personagem->profissao);
    if(personagem->profissao > 2 || personagem->profissao < 1){
      printf("\n!!! Opção inválida !!!\n");
    printf("Escolha entre 1 e 2.\n");
      goto loop3;
    }
  } else {
    printf("\nDigite o Profissão:\n");
    printf("1 - Guerreiro\n");
    printf("2 - Mago\n");
    printf("3 - Ladino\n");
      scanf("%d", &personagem->profissao);
    if(personagem->profissao < 1  || personagem->profissao > 3){
      printf("\n!!! Opção inválida !!!\n");
      printf("Escolha entre 1, 2 e 3.\n");
      goto loop3;
    }
  }

  loop4:
  if(personagem->alinhamento == 1){
    printf("\nDigite a Meta:\n");
    printf("1 - Governar o reino\n");
    printf("2 - Ficar rico\n");
      scanf("%d", &personagem->meta);
    if(personagem->meta < 1 || personagem->meta > 2){
      printf("\n!!! Opção inválida !!!\n");
      printf("Escolha entre 1 e 2.\n");
      goto loop4;
    }
  } else {
    printf("\nDigite a Meta:\n");
    printf("1 - Governar o reino\n");
    printf("2 - Ficar rico\n");
    printf("3 - Destruir o mal\n");
      scanf("%d", &personagem->meta);
    if(personagem->meta < 1 || personagem->meta > 3){
      printf("\n!!! Opção inválida !!!\n");
      printf("Escolha entre 1, 2 e 3.\n");
      goto loop4;
    }
  }
  
  loop5:
  if(personagem->profissao == 3){
    printf("\nDigite o Meio em que vive:\n");
    printf("1 - Urbano\n");
    printf("2 - Rural\n");
      scanf("%d", &personagem->meio);
    if(personagem->meio < 1 || personagem->meio > 2){
      printf("\n!!! Opção inválida !!!\n");
      printf("Escolha entre 1 e 2.\n");
      goto loop5;
    }
  } else {
    printf("\nDigite o Meio em que vive:\n");
    printf("1 - Urbano\n");
    printf("2 - Rural\n");
    printf("3 - Tribal\n");
      scanf("%d", &personagem->meio);
    if(personagem->meio < 1 || personagem->meio > 3){
      printf("\n!!! Opção inválida !!!\n");
      printf("Escolha entre 1, 2 e 3.\n");
      goto loop5;
    }
  }

  loop6:
  if(personagem->raca == 2){
    printf("\nDigite o Porte:\n");
    printf("2 - Medio\n");
    printf("3 - Pequeno\n");
      scanf("%d", &personagem->porte);
    if(personagem->porte < 2 || personagem->porte > 3){
      printf("\n!!! Opção inválida !!!\n");
      printf("Escolha entre 2 e 3.\n");
      goto loop6;
    }
  } else {
    printf("\nDigite o Porte:\n");
    printf("1 - Grande\n");
    printf("2 - Medio\n");
    printf("3 - Pequeno\n");
      scanf("%d", &personagem->porte);
    if(personagem->porte < 1 || personagem->porte > 3){
      printf("\n!!! Opção inválida !!!\n");
      printf("Escolha entre 1, 2 e 3.\n");
      goto loop6;
    }
  }

  printf("\n=== * Personagem  criado * ===\n");
  printf("====== * com sucesso! * ======\n");

}

void iniciarJogo(struct Personagem personagem) {
  int x;

    printf("\n=== Início do Jogo ===\n");
    printf("Bem-vindo(a), %s!\n", personagem.nome);
    printf("Raça: %d\n", personagem.raca);
    printf("Alinhamento: %d\n", personagem.alinhamento);
    printf("Profissão: %d\n", personagem.profissao);
    printf("Meta: %d\n", personagem.meta);
    printf("Meio em que Vive: %d\n", personagem.meio);
    printf("Porte: %d\n", personagem.porte);
    printf("Jogo iniciado. Boa sorte!\n\n");

    printf("<^><^><^><^><^><^><^><^><^><^>\n\n");

    printf("Olá, %s! Seja bem vindo\n", personagem.nome);
    printf("a incrível terra de 'ICE FIORD'.\n");
    printf("Esta é uma terra cheia de mon\n");
    printf("stros e pessoas que não da para\n");
    printf("confiar tanto. Aqui você vai\n");
    printf("poder ter uma experiêcia como\n");
    printf("nenhuma antes vivida por você.\n");
    printf("Se prepare, para muito sangue\n");
    printf("e glória. Te epero do outro\n");
    printf("lado das terras, até lá jogador.\n\n");

    printf("<><><><><><><><><><>\n\n");

    printf("Bom, considerando que você\n");
    printf("nasceu tem uns 2 minutos no\n");
    printf("máximo vou te situar onde você\n");
    printf("está. Dentro de uma taverna,\n");
    printf("está chovendo lá fora e está\n");
    printf("de noite. Você está no balcão,\n");
    printf("bebendo um grande copo de cer-\n");
    printf("veja. Chegando de noite a es-\n");
    printf("tas terras você está relaxando\n");
    printf("um pouco depois da viagem...\n");
    printf("Até que um senhor se aproxima\n");
    printf("e pergunta:\n\n");

    printf("'O que um esse rosto novo veio\n");
    printf("fazer deste lado do FIORD?'\n\n");

    printf("Escolha uma opção:\n");
    printf("1 - Estou a negócios.\n");
    printf("2 - Não é da sua conta\n");
    printf("3 - Beber mais em silêncio\n");

    scanf("%d", &x);
    
      if(x == 1){
        printf("\n'Que tipo de negócios você tem\n");
        printf("em um lugar como o FIORD?'\n\n");
        printf("'HA HA HA! Boa sorte com os\n");
        printf("''negócios'' colega, HA HA!'\n");
      }
      else if (x == 2){
        printf("\n'Rum, desculpa ai,\n");
        printf("miss simpatia'\n");
      }
      else if(x == 3){
        printf("\n'Ok então...'\n\n");
      }
      else if(x < 1 || x > 3){
        printf("\n!!! Opção inválida !!!\n");
        printf("Escolha entre 1, 2 e 3.\n");
      }
    
    printf("Depois de beber um pouco de\n");
    printf("álcool, você decide que é hora\n");
    printf("de começar a resolver os\n");
    printf("''negócios''.\n\n");
    printf(" - Enquanto você bebia, - \n");
    printf(" -    a chuva parou.    - \n\n");
    printf("Enquanto você está andando pe-\n");
    printf("las ruas, ainda molhadas da\n");
    printf("chuva, você procura alguém que\n");
    printf("possa ter qualquer informação\n");
    printf("sobre sobre o 'DEUS DA FORJA'.\n");
    printf("Esses são os ''negócios'' que\n");
    printf("você veio resolver\n");
    printf("em Ice Fiord.\n\n");
    printf("------------------------------\n\n");
    printf("O 'Deus da Forja', mais conhe-\n");
    printf("cido como 'FIRE HORN', é um\n");
    printf(" ser que habita  em\n");
    printf("Ice Fiord a séculos.\n");
    printf("Você veio procurar e destruir\n");
    printf("essa criatura para poder ser\n");
    printf("capaz de criar qualquer coisa\n");
    printf("que desejar com o\n");
    printf("'MarteloBigorna' que Fire Horn\n");
    printf("sempre carrega consigo.\n\n");
    printf("------------------------------\n\n");
    printf("Enquanto caminha pela vila,\n");
    printf("procurando qualquer coisa que\n");
    printf("remeta ao Fire Horn, você pas-\n");
    printf("sa por um homem - e percebe\n");
    printf("que ele é uma pessoa simples,\n");
    printf("dizendo ter o que você procura\n\n");

    loop8:
      if(personagem.alinhamento == 2 || personagem.alinhamento == 3){
        printf("Escolha uma opção:\n");
        printf("1 - Ir até ele.\n");
        printf("2 - Responder, educadamente,\n");
        printf("que ele não sabe.\n");
        printf("3 - Continuar andando.\n");
        scanf("%d", &x);
        if(x < 1 || x > 3){
          printf("\n!!! Opção inválida !!!\n");
          printf("Escolha entre 1, 2 e 3.\n");
          goto loop8;
        }
      }
  
    loop9:
      if(personagem.alinhamento == 1){
        printf("Escolha uma opção:\n");
        printf("1 - Ir até ele.\n");
        printf("3 - Continuar andando.\n");
        scanf("%d", &x);
        if (x < 1 || x > 3 || x == 2){
          printf("\n!!! Opção inválida !!!\n");
          printf("Escolha entre 1 e 3.\n");
          goto loop9;
        }
      }

      if(x == 1){
        printf("Qunado você se aproxima ele\n");
        printf("diz saber o caminho para en-\n");
        printf("contrar 'Fire Horn'. Você deve\n");
        printf("pegar o caminho da montanha\n");
        printf("mais escura com neve no topo.\n");
        printf("Lá você vai encontrar a entra-\n");
        printf("da para um caverna, se tiver\n");
        printf("uma luz vermelha como fogo\n");
        printf("saindo de dentro dela, você\n");
        printf("está no lugar certo!\n");
      }

      else if(x == 2 || x == 3){
        printf("Depois de passar pelo o se-\n");
        printf("nhor, você segue o seu caminho\n");
        printf("em busca de alguma informação.\n");
        printf("Na saída do vilarejo você se\n");
        printf("depara com três montanhas, uma\n");
        printf("cinza, uma branca como a neve\n");
        printf("e uma bemmm escura e alta.\n");
        printf("Você percebe que terá que es-\n");
        printf("perar pelo dia seguinte para\n");
        printf("continuar a sua jornada. Sa-\n");
        printf("bendo que não terá tempo de\n");
        printf("procurar pelas três montanhas\n");
        printf("por agora, apezar de estar com\n");
        printf("muita pressa.\n\n");
        printf("Você vai até uma hotel que tem\n");
        printf("está por perto. Chegando lá,\n");
        printf("quem te recebe é o dono, e\n");
        printf("você pergunta se ele sabe al-\n");
        printf("guma coisa sobre 'Fire Horn'.\n");
        printf("Ele responde que só há uma\n");
        printf("pessoa no vilarejo que saberá\n");
        printf("algo a respeito, e que ele até\n");
        printf("ajudaria mas que seria muito\n");
        printf("dificil achar as informações.\n");
        printf("Mas fica claro que\n");
        printf("ele está mentindo.\n");
        printf("Depois dessa fala, você per-\n");
        printf("cebe que deveria ter conversa-\n");
        printf("do com o senhor que viu mais\n");
        printf("cedo. Ou, você pode força-lo\n");
        printf("a dizer o que ele sabe.\n\n");
        printf("Escolha um opção:\n");
        printf("1 - Voltar para a\n");
        printf("casa do senhor.\n");
        printf("2 - Força-lo a falar\n");
        scanf("%d", &x);
          if(x == 1){
            goto loop8;
          }
          else if(x == 2){
            if(personagem.profissao == 1){
              printf("Você usa uma abilidade para\n");
              printf("assusta-lo e faz com que ele\n");
              printf("entregue a informação.\n");
            }
            else if(personagem.profissao == 2){
              printf("Você usa uma abilidade para\n");
              printf("ler a mente dele, e\n");
              printf("pegar a informação.\n");
            }
            else if(personagem.profissao == 3){
              printf("Você usa sua abilidade para\n");
              printf("ameça-lo e conseguir\n");
              printf("a informação.\n");
            }
          printf("Você descobre que deve ir até\n");
          printf("a montanha mais escura das 3,\n");
          printf("e terá que entrar em uma ca-\n");
          printf("verna que tenha uma luz ver-\n");
          printf("melha como fogo saindo\n");
          printf("de dentro dela.\n");
          }
      }
    
    printf("Depois de conseguir a infor-\n");
    printf("mação você vai imediatamente\n");
    printf("em direção da montanha mais\n");
    printf("escura. Como ainda está de\n");
    printf("noite será mais fácil de achar\n");
    printf("a caverna.\n\n");
    printf("Depois de caminhar um pouco\n");
    printf("você consegue achar. Logo no\n");
    printf("início da caverna você se de-\n");
    printf("para com um bode de\n");
    printf("lava de 8 metros!\n\n");
    printf("Para passar por ele você terá\n");
    printf("que jogar Jokenpô com ele.\n\n");
    
    int jogador, computador, vitorias1 = 0, vida = 100;

    srand(time(NULL));

    printf("Bem-vindo ao jogo Jokenpô!\n");

      while (vitorias1 < 3 && vida > 0) {
        printf("Pedra, papel ou tesoura?\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("\nEscolha sua jogada:\n");
        scanf("%d", &jogador);
          
          if (jogador < 1 || jogador > 3) {
          printf("\n!!! Opção inválida !!!\n");
          printf("Escolha entre 1 e 3.\n");
            continue;
          }

          switch (jogador) {
            case 1:
              printf("Você escolheu: Pedra\n");
              break;
            case 2:
              printf("Você escolheu: Papel\n");
              break;
            case 3:
              printf("Você escolheu: Tesoura\n");
              break;
          }

          computador = rand() % 3 + 1;

          printf("O Bode escolheu: ");
          switch (computador) {
            case 1:
                printf("Pedra\n");
                break;
              case 2:
                printf("Papel\n");
                break;
              case 3:
                printf("Tesoura\n");
                break;
          }

          if ((jogador == 1 && computador == 3) ||
              (jogador == 2 && computador == 1) ||
              (jogador == 3 && computador == 2)) {
              printf("Você venceu essa rodada!\n");
              vitorias1++;
          } else if (jogador == computador) {
              printf("Empate! Jogue novamente.\n");
          } else {
              printf("Você perdeu essa rodada! -10 pontos de vida.\n");
              vida -= 10;
          }

          printf("Vitórias: %d\nVida: %d\n", vitorias1, vida);
      }

      if (vitorias1 == 3) {
        printf("\nParabéns! Você venceu o desafio Jokenpô!\n");
        
      } else {
        printf("\nGame over! O Bode te deu uma cabeçada e você perdeu...\n");
        }

    int vitorias2 = 0;

    srand(time(NULL));

    printf("Bem-vindo ao jogo de charadas!\n");

    while (vitorias2 < 2 && vida > 0) {
        
        int charadaIndex1 = rand() % 10;
        int charadaIndex2, charadaIndex3;

        do {
            charadaIndex2 = rand() % 10;
        } while (charadaIndex2 == charadaIndex1);

        do {
            charadaIndex3 = rand() % 10;
        } while (charadaIndex3 == charadaIndex1 || charadaIndex3 == charadaIndex2);

        char *charadas[10] = {
            "O que é, o que é?\nSem sair do seu cantinho, é capaz de viajar ao redor do mundo.\n\n1- O selo\n2- O carro\n3- O jardim\n",
            "O que é, o que é?\nÉ feito de água, mas se for colocado dentro da água morrerá.\n\n1- A tesoura\n2- Cachoeira\n3- O gelo\n",
            "O que é, o que é?\nÉ alta quando jovem e baixinha quando fica velha. Além disso, é rápida quando é magra e lenta quando é gorda.\n\n1- O mouse\n2- A panela\n3- A vela\n",
            "O que é, o que é?\nPode ser atirado do alto de um prédio e ficar super bem. Mas quando é colocado na água morre pouco tempo depois.\n\n1- O papel\n2- A caneta\n3- O celular\n",
            "O que é, o que é?\nFica cada vez mais molhado quanto mais a gente seca.\n\n1- O picolé\n2- A toalha\n3- A fogueira\n",
            "O que é, o que é?\nVocê pode pegar, mas não pode jogar.\n\n1- Toalha\n2- O papel\n3- Resfriado\n",
            "O que é, o que é?\nÉ mais leve que uma pluma, mas nem o homem mais forte do mundo pode segurá-la por mais de um minuto.\n\n1- Resfriado\n2- A respiração\n3- A tesoura\n",
            "O que é, o que é?\nSobe, sobe, sobe e jamais desce.\n\n1- O escorregador\n2- A montanha-russa\n3- A idade\n",
            "O que é, o que é?\nEstá sempre a caminho, mas nunca chega.\n\n1- Ontem\n2- Hoje\n3- Amanhã\n",
            "O que é, o que é?\nTem cidades, mas não tem casas. Tem montanhas, mas não tem árvores. Tem água, mas não tem peixe.\n\n1- O mapa\n2- A bússola\n3- O rato\n"
        };

        printf("\nResponda às seguintes charadas:\n");
        printf("%s", charadas[charadaIndex1]);

        int resposta1;
        printf("Digite sua resposta (1, 2 ou 3): ");
        scanf("%d", &resposta1);

        if (resposta1 < 1 || resposta1 > 3) {
            printf("Opção inválida! Digite um número entre 1 e 3.\n");
            continue;
        }

        printf("%s", charadas[charadaIndex2]);

        int resposta2;
        printf("Digite sua resposta (1, 2 ou 3): ");
        scanf("%d", &resposta2);

        if (resposta2 < 1 || resposta2 > 3) {
            printf("Opção inválida! Digite um número entre 1 e 3.\n");
            continue;
        }

        printf("%s", charadas[charadaIndex3]);

        int resposta3;
        printf("Digite sua resposta (1, 2 ou 3): ");
        scanf("%d", &resposta3);

        if (resposta3 < 1 || resposta3 > 3) {
            printf("Opção inválida! Digite um número entre 1 e 3.\n");
            continue;
        }

        
        int respostasCorretas[10] = {1, 3, 3, 1, 2, 3, 2, 3, 3, 1};

        int pontosPerdidos = 0;

        if (resposta1 != respostasCorretas[charadaIndex1]) {
            printf("Resposta 1 incorreta! -50 pontos de vida.\n");
            pontosPerdidos += 50;
        }

        if (resposta2 != respostasCorretas[charadaIndex2]) {
            printf("Resposta 2 incorreta! -50 pontos de vida.\n");
            pontosPerdidos += 50;
        }

        if (resposta3 != respostasCorretas[charadaIndex3]) {
            printf("Resposta 3 incorreta! -50 pontos de vida.\n");
            pontosPerdidos += 50;
        }

        vida -= pontosPerdidos;

        if (pontosPerdidos == 0) {
            printf("Parabéns! Você acertou todas as charadas.\n");
            vitorias2++;
        }

        printf("Vitórias: %d\nVida: %d\n", vitorias2, vida);

        if (vida <= 0) {
            printf("\nGame over! Você perdeu todas as suas vidas.\n");
            break;
        }
    }

}
int main() {

  printf("\n=== BEM VINDO AO 'C'-RPG ===\n");
  printf("=Aqui voce vai poder viver =\n");
  printf("= uma nova aventura , voce =\n");
  printf("===== esta  preparado? =====\n\n");

  int opcao = 0;
  int personagemCriado = 0;
  struct Personagem personagem;

  while (opcao != 3) {
    printf("Escolha uma opção:\n");
    printf("1. Criar Personagem\n");
    printf("2. Iniciar Jogo\n");
    printf("3. Sair\n");
    scanf("%d", &opcao);

      if (opcao == 1) {
        criarPersonagem(&personagem);
        personagemCriado = 1;
      }

      else if(opcao == 2){
        if (personagemCriado) {
          iniciarJogo(personagem);
          } else { 
            printf("Crie um personagem antes\n");
            printf("de iniciar o jogo.\n");
        }
      }

      else if(opcao == 3){
        printf("Saindo do jogo...\n");
      }
      
      else{
        printf("\n!!! Opção inválida !!!\n");
        printf("===== Por favor, =====\n");
        printf("escolha uma opção válida.\n\n");
      }
          
    printf("\n");
  }

  return 0;
}
