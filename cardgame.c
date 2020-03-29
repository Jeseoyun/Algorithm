#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Card{
   int suit;
   int value;
} CARD;

typedef struct Player{
   char name[20];
   int balance;
   CARD hand;
} PLAYER;

PLAYER players[2];   //(전역변수)플레이어 2명
CARD deck[52];   //(전역변수)카드 52장

int k = 51;   //현재 카드 위치

void initialize(){   //카드 초기화
   for(int i=0; i<52; i++){
      deck[i].suit = i%4;   // 0:클로버 1:하트 2:다이아 3:스페이스
      deck[i].value = i/4+1;
   }
}

void shuffle(){   //남아있는 덱에서 카드 1장을 무작위로 선택해 남아있는 카드 중 마지막 인덱스로 보냄
   srand((unsigned int)time(NULL));
   int num;
   if(k==0)
	   num = 0;
   else
	   num = (int)rand()%k;

   CARD temp = deck[num];
   deck[num] = deck[k];
   deck[k] = temp;
}

void dealCards(int a){
   char shape[4][10] = {"Clubs", "Heart", "Diamonds", "Spade"};
   char jqk[4][6] = {"King", "Queen", "Jack", "A"};

   players[a].hand = deck[k];	//카드 뽑음

   if(players[a].hand.value == 1)
	   printf("%s : %s of %s\n", players[a].name, jqk[3], shape[players[a].hand.suit]);
   else if(players[a].hand.value<11)
      printf("%s : %d of %s\n", players[a].name, players[a].hand.value, shape[players[a].hand.suit]);
   else
      printf("%s : %s of %s\n", players[a].name, jqk[13-players[a].hand.value], shape[players[a].hand.suit]);
}

int main(){
   int betAmount;

   printf("Enter player1's name and balance.\n");
   fflush(stdout);
   scanf("%s %d", players[0].name, &players[0].balance);

   printf("Enter player2's name and balance.\n");
   fflush(stdout);
   scanf("%s %d", players[1].name, &players[1].balance);

   printf("Enter bet amount.\n");
   fflush(stdout);
   scanf("%d", &betAmount);

   initialize();

   int loop = 52;
   while(loop--){
      if(players[0].balance<betAmount || players[1].balance<betAmount){   //플레이어 중 한명이라도 잔액이 0 이하이면
         break;
      }

      for(int i=0; i<2; i++){
         shuffle();   //임의로 뽑은 카드 한 장이 가장 마지막 인덱스로 이동
         dealCards(i);
         k--;   //뽑은 카드는 덱에서 버림
      }

      if(players[0].hand.value == players[1].hand.value){	//카드 숫자가 같으면 카드 모양으로 승패가 갈림
         if(players[0].hand.suit > players[1].hand.suit){
            players[0].balance += betAmount;
            players[1].balance -= betAmount;
         }
         else{
            players[0].balance -= betAmount;
            players[1].balance += betAmount;
         }
      }
      else if(players[0].hand.value == 1){	//일반적으로 카드는 숫자가 높을수록 크지만, 카드게임에서는 1(A)가 가장 큰 수임
    	  players[0].balance += betAmount;
    	  players[1].balance -= betAmount;
      }
      else if(players[1].hand.value == 1){
    	  players[0].balance -= betAmount;
    	  players[1].balance += betAmount;
      }
      else if(players[0].hand.value > players[1].hand.value){
         players[0].balance += betAmount;
         players[1].balance -= betAmount;
      }
      else{
         players[0].balance -= betAmount;
         players[1].balance += betAmount;
      }

      printf("<player1> name : %s, balance : $%d\n", players[0].name, players[0].balance);
      printf("<player2> name : %s, balance : $%d\n", players[1].name, players[1].balance);
      printf("\n");

      if(k==-1){   //카드를 모두 소진하면
         printf("===Exhaust all cards. Shuffle again.===\n");
         k = 51;
         loop = 52;
         initialize();
      }
   }

   printf("%s is winner. Balance is $%d.", players[0].balance>players[1].balance? players[0].name:players[1].name,  players[0].balance>players[1].balance? players[0].balance:players[1].balance);

   return 0;
}
