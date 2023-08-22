#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
				
	struct Ingresso{
									
		char Nome[50];
		char cpf[12];
		int anoNascimento;
					
		};
										
		int main(){
			
		setlocale(LC_ALL,"");
						
		struct Ingresso ingressosVendidos[50];
		int totalIngressosVendidos = 0;	
		int i = 0;
		int opcao;
								    
								    
		do{
		printf("===== DIGITE UMA DAS OPÇÕES ABAIXO =====\n");
								    	
		printf("1- Vender Ingresso\n");
		printf("2- Listar Ingressos Vendidos\n");
		printf("3- Validar Ingresso\n");
		printf("4- Sair\n");
		scanf("%d", &opcao);
		fflush(stdin); // Limpar o buffer //
								    	
								
			switch(opcao){				    		
				case 1:{
				system("cls"); // Limpa caracteres que já foram impressos anteriormente //
														
				printf("===== OPÇÃO VENDA DE INGRESSOS =====\n");
							
				struct Ingresso novoIngresso;
							 
				printf("Digite o Nome do comprador:\n");
				fflush(stdin); // Limpar o buffer //
				gets(novoIngresso.Nome);
													    	
			    printf("Digite o CPF do comprador:\n");
				fflush(stdin); // Limpar o buffer //
				gets(novoIngresso.cpf);
							
									    	
				printf("Digite o ano de Nascimento do Comprador:\n");
				fflush(stdin); // Limpar o buffer //
				scanf("%d", &novoIngresso.anoNascimento);
							
							
				ingressosVendidos[totalIngressosVendidos] = novoIngresso;
							
				totalIngressosVendidos++;
								               
				printf("Venda Realizada com Sucesso!\n\n");
				system("pause"); // Aguarda uma resposta do usuário para continuar //
				system("cls"); // Limpa caracteres que já foram impressos anteriormente //
				break;
			
			}
						
				case 2:{
				system("cls"); // Limpa caracteres que já foram impressos anteriormente //
				printf(" LISTA DE INGRESSOS VENDIDOS:\n");
								
				    if (totalIngressosVendidos == 0) {
				    printf("Nenhum ingresso foi vendido ainda.\n\n");	   
				   } 
					        
				    else {       
				       for (int i = 0; i < totalIngressosVendidos; i++) {
					    printf("\n========== Ingresso %d ==========\n", i + 1);
					    printf("Nome: %s\n", ingressosVendidos[i].Nome);			                                    
					    printf("CPF: %s\n", ingressosVendidos[i].cpf);
					    printf("Ano de Nascimento: %d\n", ingressosVendidos[i].anoNascimento);
					    printf("\n");
					        }
					    }
					    system("pause"); // Aguarda uma resposta do usuário para continuar //
				         system("cls"); // Limpa caracteres que já foram impressos anteriormente //
				break; 
				}
								
				case 3: {
				system("cls"); // Limpa caracteres que já foram impressos anteriormente //
			    printf("===== OPCÃO DE VALIDAÇÃO =====\n\n");
			
			       char cpfIngresso[12];
			       int ingressoEncontrado = 0;
			
			       printf("Digite o CPF do comprador:\n");
			       fflush(stdin); // Limpar o buffer //
			       gets(cpfIngresso);
			
			       for (i = 0; i < totalIngressosVendidos; i++) {
			         if (strcmp(ingressosVendidos[i].cpf, cpfIngresso) == 0) {
			            printf("================\n");
			            printf("Ingresso Validado com Sucesso: \n");
			            printf("Nome: %s\n", ingressosVendidos[i].Nome);
			            printf("CPF: %s\n", ingressosVendidos[i].cpf);
			            printf("Ano de Nascimento: %d\n\n", ingressosVendidos[i].anoNascimento);
			            
			            ingressoEncontrado = 1; 
			            system("pause"); // Aguarda uma resposta do usuário para continuar //
				        system("cls"); // Limpa caracteres que já foram impressos anteriormente //
			            break;
			           }
			         }
			         
			        if (!ingressoEncontrado) {
			        printf("CPF não encontrado.\n\n");
			        system("pause"); // Aguarda uma resposta do usuário para continuar //
				    system("cls"); // Limpa caracteres que já foram impressos anteriormente //
			      }
			      
			    break;
		    
		      }
	      }
						   						
	    }while(opcao!=4);
	}
