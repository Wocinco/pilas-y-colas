#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct pila {
	char car;
	pila * nex;
};
pila * inic;
pila * au;
pila * final;
void agregar(char c){
	if (inic==NULL){
		inic= new(pila);
		inic->car=c;
		final=inic;
	}else{
		au=new(pila);
		au->nex=inic;
		au->car=c;
		inic=au;
	}
	final->nex=NULL;
}
void mt(){
	au= inic;
	if(inic==NULL){
		cout <<"No hay caracteres apilados" << endl;
	}else{
		while (au != NULL ){
			cout <<au->car<< endl;
			au = au->nex;
}}}
void pe(){
	au= inic;
	if(inic==NULL){
		cout <<"No hay caracteres apilados" << endl;
	}else{
		if(au != NULL ){
			cout <<au->car<< endl;
}}}
void eliminar(){
	struct pila *e=NULL;
	if (inic==NULL){
		cout<<"No hay caracteres apilados" << endl;
	}else {
		au=inic;
		inici=inici->nex;
		e=au;
		e->nex=au->nex;
}}
void tpil(){
	int contador=0;
	au= inic;
	if(inic==NULL){
		cout <<"No hay caracteres apilados" << endl;
	}else{
		while (au != NULL ){
            contador++;
			au = au->nex;	}
	cout<<"caracteres apilados  "<<contador<<endl;}}
