/*

#include <stdio.h>
#include "list.h"
#include "interface.c"

// query 7

LONG_list most_answered_questions(TAD_community com, int N, Date begin, Date end){ // da com mais respostas para a q tem menos
  LONG_list l = create_list(N);
  LONG_list lid = create_list(N);
  LONG_list res = create_list(N);


  for (int i=0; i < N ; i++){ // inicialização da lista
    set_list(l,i,0); // vai conter os numeros de respostas
    set_list(lid,i,0); // vai conter o id dos posts
    set_list(res,i,0); // lista q vai ser devolvida
  }

  for(int i=0; i < com->posts_t ; i++){
    if (com->posts[i]->post_type_id == 1){ // se é pergunta

      if(difDatas(com->posts[i]->data,begin,end) == 0){ // se está dentro das datas
        
        for(int j = 0; j < N ; j++){
          int k = get_list(l,j);
          if(com->posts[i]->answer_count > k){
            if(j == N-1) { // se está na última posição
              set_list(l,j,com->posts[i]->answer_count); 
              set_list(lid,j,com->posts[i]->id_post);
              break;
            }
            else{
              set_list(l,j,get_list(l,j+1));
              set_list(lid,j,get_list(lid,j+1));
            }
          }
          else{
            set_list(l,j-1, com->posts[i]->answer_count);
            set_list(lid,j-1,com->posts[i]->id_post);
            break;
          }
        }
      }
    }
  }
  // no fim do 'for' a lista lid tem os id's dos posts por ordem crescente, necessário inverter a ordem
  int j = N-1;
  for (int i = 0 ; i < N ; i++){
    set_list(res, i, get_list(lid, j)); 
    j--;
  }

  
  // para testar
  j = N-1;
  for(int i = 0; i < N; i++){
    printf("POST_ID: %ld\n", get_list(res,i) );
    printf("nº respostas: %ld\n", get_list(l,j) );
    j--;
  }

  free_list(l);
  free_list(lid);

  return res;
}

*/