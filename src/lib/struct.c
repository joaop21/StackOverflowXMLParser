#include <stdlib.h>
#include "user.h"
#include "date.h"
#include "struct.h"
#include <libxml/parser.h>

struct TCD_community{
	UTILIZADOR* utilizador;
	int n_utilizadores;
	int espaco_users;
	POSTS* posts;
	int posts_t;
	int espaco_posts;
};

struct utilizador{
 	xmlChar* nome;
 	int id;
 	USER user; // bio e array para 10 posts
	int posts_u;
	xmlChar* reputacao;
};

struct posts{
	Date data;
	int id_post;
	xmlChar* score;
	int owner_user_id;
	char* title;
	xmlChar* body;
	int post_type_id; // 1-pergunta 2-resposta
	int parent_id;
	xmlChar** tags;
	xmlChar* answer_count;
	xmlChar* comment_count;
	xmlChar* favorite_count;
};