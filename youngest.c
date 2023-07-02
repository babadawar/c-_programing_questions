#include<stdio.h>
int main(){
    int ramsage,shayansage,ajaysage;
    printf("enter shayan's age : ");
    scanf("%d",&shayansage);
    printf("enter ram's age : ");
    scanf("%d",&ramsage);
    printf("enter ajay's age : ");
    scanf("%d",&ajaysage);
    if(ramsage < shayansage && ramsage < ajaysage){
        printf("ram is youngest");
    }
    if(ramsage > shayansage && shayansage < ajaysage){
        printf("shayan is youngest");
       
    }
    if(ajaysage < shayansage && ramsage > ajaysage){
        printf("ajay is youngest");
    }
    return 0;
    


    
}