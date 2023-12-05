/*
Mané  é um feirante que possui em sua banca 05 produtos com os seguintes preços: 

tomate R$2,30; 
cebola R$1,20; 
cenoura R$ 3,70; 
abobrinha R$ 5,10; 
brócolis R$ 1,23. 

Complete o programa baixo, no qual os usuários podem escolher uma das seguintes opções: 
listar o nome dos produtos, 
listar o nome e o preço dos produtos, 
alterar o preço dos os produtos.
Sair
*/
main(){

	float tomate= 2.3, cebola=1.2, cenoura=3.7, abobrinha=5.1, brocolis=1.23;

       	int  op =1 ,codigo;

	 while ( op !=-1 ){

       		printf ("\n1 - Listar produtos");

       		printf ("\n2 - Listar produtos/preco");

       		printf ("\n3 - Alterar precos");

  		printf ("\n4 - Sair");

       		printf("\nDigite a opcao:");

       		scanf("%d",&op);

       		switch(op){

       			case 1: printf ("\n Tomate\n Cebola\n Cenoura\n Abobrinha\n Brocolis"); break;

       			case 2: printf ("\n Tomate R$%.2f\n Cebola R$%.2f\n Cenoura R$%.2f\n Abobrinha R$%.2f\n Brocolis R$%.2f\n",tomate, cebola, cenoura, abobrinha, brocolis); break;

       			case 3: printf ("\n 1 - Tomate "); 

	         		printf ("\n 2 - Cebola  "); 

               			printf ("\n 3 - Cenoura  "); 

               			printf ("\n 4 - Abobrinha  "); 

               			printf ("\n 5 - Brocolis  "); 

	 			printf ("\n Digite o codigo do produto que deseja alterar o preco: ");

	 			scanf("%d", &codigo); 

	 			switch (codigo){

                 			case 1: printf ("\n Tomate = "); scanf("%f", &tomate); break;

              				case 2: printf ("\n Cebola = "); scanf("%f", &cebola); break;

                 			case 3: printf ("\n Cenoura = "); scanf("%f",&cenoura); break;

                 			case 4: printf ("\n Abobrinha = "); scanf("%f", &abobrinha); break;

                 			case 5: printf ("\n Brocolis = "); scanf("%f", &brocolis); break;

                  			default: printf("Produto inválido");

                  		}

			break;

         		 case 4 : break;

                 	default: printf("Opcao inválida");

               	}

        }

}