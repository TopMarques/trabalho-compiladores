#include <stdio.h>
#include <string.h>
int main()
{

    char textoChat[150];
    char *pont;    
    printf("Digite o texto do Chat: ");
    gets(textoChat);
    analisadorAbrev(textoChat);
    analisadorPrec(textoChat);
   
}
void analisadorAbrev(char texto[150]){
    int tamanho;
    tamanho = strlen(texto);
    for(int i=0;i<tamanho;i++){
        if((texto[i]=='t')||(texto[i]=='v')||(texto[i]=='c')||(texto[i]=='k')||(texto[i]=='b')||(texto[i]=='p')||(texto[i]=='f')){
           if((texto[i+1]=='t')||(texto[i+1]=='p')||(texto[i+1]=='s')){
                if((texto[i+2]=='n')||(texto[i+2]=='r')||(texto[i+2]=='c')||(texto[i+2]=='l')||(texto[i+2]=='d')||(texto[i+2]=='f')||(texto[i+2]=='q')){
                    if((texto[i+3]=='c')||(texto[i+3]=='l')||(texto[i+3]=='t')||(texto[i+3]=='b')||(texto[i+3]=='p')||(texto[i+3]=='d')||(texto[i+3]=='k')){
                        if(texto[i+4]='a'){
                            printf("Mensagem Bloqueada - ABREVIAÇÃO");
                        }           
                    }
                }
           }
           if((texto[i+1]=='n')||(texto[i+1]=='r')||(texto[i+1]=='c')||(texto[i+1]=='l')||(texto[i+1]=='d')||(texto[i+1]=='f')||(texto[i+1]=='q')){
                if((texto[i+2]=='c')||(texto[i+2]=='l')||(texto[i+2]=='t')||(texto[i+2]=='b')||(texto[i+2]=='p')||(texto[i+2]=='d')||(texto[i+2]=='k')){
                    if(texto[i+3]='a'){
                        printf("Mensagem Bloqueada - ABREVIAÇÃO");
                    }           
                }
           }
        }
    }
    
}
void analisadorPrec(char texto[150]){
    int tamanho;
    tamanho = strlen(texto);
    char *t;
    t = strtok(texto," "); 
        if(strcmp(t,"gay")==0){
            printf("Mensagem Bloqueada - PRECONCEITO");texto=NULL;
        }else if((strcmp(t,"mongol"))==0){
            printf("Mensagem Bloqueada - PRECONCEITO");texto=NULL;
        }else if((strcmp(t,"macaco"))==0){
            printf("Mensagem Bloqueada - PRECONCEITO");texto=NULL;
        }else{
        }
    while(texto != NULL)
    {
        t=strtok(NULL," ");
        if((strcmp(t,"gay"))==0){
            printf("Mensagem Bloqueada - PRECONCEITO");texto=NULL;
        }else if((strcmp(t," mongol"))==0){
            printf("Mensagem Bloqueada - PRECONCEITO");texto=NULL;
        }else if((strcmp(t,"macaco"))==0){
            printf("Mensagem Bloqueada - PRECONCEITO");texto=NULL;
        }else{
        }
        
        
    }
}