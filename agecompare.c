#include <stdio.h>
int main(){

int kshitij,cj,aliot,server;
           printf("enter age of kshitij\n ");
                  scanf("%d" ,&kshitij);
                        printf("enter age of cj\n ");
                              scanf("%d", &cj);
           printf("enter age of aliot\n");
                  scanf("%d",&aliot);
                        printf("enter age of server\n");
                              scanf("%d", &server);

if(kshitij>cj){
    if(kshitij>aliot){
	if(kshitij>server){
		printf("kshitij is younger than others\n");}}}
else{}
if(cj>kshitij){
	if(cj>aliot){
		if(cj>server){
			printf("cj is younger than others\n");}}}
else{}
if(aliot>kshitij){
	if(aliot>cj){
		if(aliot>server){
			printf("aliot is younger than others\n");}}}
else{}
if(server>kshitij){
	if(server>cj){
		if(server>aliot){
			printf("server is younger than others");}}}
return 0;
}
