gerou(fabricio, maria).
gerou(maria, joao).
gerou(antonio,pedro).
gerou(maria, pedro).
gerou(antonio, joao).
gerou(joao, vitor).
gerou(natalia, vitor).
gerou(pedro, gustavo).
gerou(alice, gustavo).

%Irmaos
gerou(pietra,eduarda).
gerou(pietra, barbara).

%Totalmente-Irmãos
gerou(carlos, catarina, gabriela).
gerou(carlos, catarina, mariana).
gerou(carlos, catarina, marília).

%erro de dados na geracao
gerou(tiago, arthur, mikael).

%meioirmaos
gerou(amanda,vinicius,enzo).
gerou(amanda,mateus,davi).
gerou(lucas, thaina, ingrid).
gerou(lucas, larissa, vagner).

homem(tiago).
homem(arthur).
homem(mikael).
homem(joao).
homem(pedro).
homem(antonio).
homem(vitor).
homem(gustavo).
mulher(maria).
mulher(natalia).
mulher(alice).


pertencea(colatina, brasil).
pertencea(vitoria, brasil).
pertencea(novayork, eua).
pertencea(londres, inglaterra).


paiDe(X,Y) :- gerou(X,Y), homem(X).
maeDe(X,Y) :- gerou(X,Y), mulher(X).


erroGeracao(X,Y,Z) :- gerou(X,Y,Z), homem(X), homem(Y).


meioIrmaos(Y,X) :- gerou(R,M,Y), gerou(R,N,X), X\=Y.


TotalmenteIrmaos(X,Y) :- gerou(J,I,X), gerou(J,I,Y), X\=Y.

irmaos(X,Y):- gerou(M,X), gerou(M,Y), X\=Y.


ancestralDe(X,Y):- gerou(Y,X), Y\=X.
ancestralDe(X,Y):- gerou(X,Z), ancestralDe(Y,Z), X\=Y, X\=Z, Y\=Z.

