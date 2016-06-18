#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct cola {
	char car;
	cola * nex;};
cola * inici;
cola * aux;
cola * fin;

void Push(char c){
	if (inici==NULL){
		inici= new(cola);
		inici->car=c;
		fin=inici;
	}else{
		aux=new(cola);
		fin->nex=aux;
		aux->car=c;
		fin=aux;
	}
	fin->nex=NULL;}
void muestra(){
	aux= inici;
	if(inici==NULL){
		cout <<"No hay caracteres encolados" << endl;
	}else{
		while (aux != NULL ){
			cout <<aux->car<< endl;
			aux = aux->nex;
}}}
void Top(){
	aux= inici;
	if(inici==NULL){
		cout <<"No hay caracteres encolados" << endl;
	}else{
		if(aux != NULL ){
			cout <<aux->car<< endl;
}}}
void Pop(){
	struct cola *er=NULL;
	if (inici==NULL){
		cout<<"No hay caracteres encolados" << endl;
	}else {
		aux=inici;
		inici=inici->nex;
		er=aux;
		er->nex=aux->nex;
}}
void tcol(){
	int contador=0;
	aux= inici;
	if(inici==NULL){
		cout <<"No hay caracteres encolados" << endl;
	}else{
		while (aux != NULL ){
            contador++;
			aux = aux->nex;}
cout<<"caracteres encolados  "<<contador<<endl;
}}
