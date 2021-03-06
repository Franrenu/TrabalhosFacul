typedef struct NO* ArvAVL;

ArvAVL* cria_ArvAVL();
void libera_NO(struct NO* no);
void libera_ArvAVL(ArvAVL* raiz);
int altura_NO(struct NO* no);
int fatorBalanceamento_NO(struct NO* no);
int maior(int x, int y);
int estaVazia_ArvAVL(ArvAVL *raiz);
int totalNO_ArvAVL(ArvAVL *raiz);
int altura_ArvAVL(ArvAVL *raiz);
void preOrdem_ArvAVL(ArvAVL *raiz);
void emOrdem_ArvAVL(ArvAVL *raiz);
void RotacaoLL(ArvAVL *A);
void RotacaoRR(ArvAVL *A);
void RotacaoLR(ArvAVL *A);
void RotacaoRL(ArvAVL *A);
int insere_ArvAVL(ArvAVL *raiz, int acessos, char en_word[32] , char pt_word[32] );
int searchTree(ArvAVL *raiz , char word_to_translate[32]);

int consulta_ArvAVL(ArvAVL *raiz, char palavra[30]);
int autocomplete(ArvAVL *raiz, int access ,char word_to_complete[32]);