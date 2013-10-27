//Matei Razvan-Madalin
//313CA

#include<stdio.h>

//Definesc functia max ce returneaza valoarea maxima dintre 3 numere
int max(int a, int b, int c) {
	int maxim;
	if(a>b) maxim=a;
	else maxim =b;
	if(c>maxim) maxim=c;
	return maxim; }

//Definesc functia min ce returneaza valoarea minima dintre 3 numere
int min(int a, int b, int c) {
	int minim;
	if(a<b) minim=a;
	else minim=b;
	if(c<minim) minim=c;
	return minim; }

int main() {
	int R, G, B, w, h, Lum, LumC, i, j;
	scanf("%d %d %d", &w, &h, &LumC);

//Verific daca latimea, inaltimea si luminanta critica sunt valide
	if( w<1 || w> 1000 || h<1 || h>1000 || LumC<0 || LumC>255) {
		printf("Invalid format!");
		return 0; }

	for(i=1;i<=h;i++) {
		for(j=1; j<=w; j++) {
			scanf("%d %d %d  ", &R, &G, &B);
			Lum=(max(R, G, B)+min(R, G, B))/2;
			if(R<0 || R>255 || G<0 || G>255 || B<0 || B>255) {
				printf("x"); }
			else {
				if(Lum>=LumC) {
					printf("1"); }
				else {
					printf("0"); } } }
		printf("\n"); }

	return 0; }



