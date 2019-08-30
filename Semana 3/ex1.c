/* Questão 1
Considere o deque estudado na videoaula 10. Dada a função abaixo que exibe/imprime os elementos do deque a partir de seu início, escreva o que será impresso por esta função caso ela seja chamada para um deque no qual os seguintes elementos foram inseridos nesta ordem (e após o deque ter sido inicializado): inicialmente, foi inserido o registro com chave igual a 1 no início do deque, depois, o registro com chave igual a 2 no fim, logo após, o registro com chave igual a 3 no início, em seguida, o registro com chave igual a 4 no fim, depois, o registro com chave igual a 5 no início, logo após, o registro com chave igual a 6 no fim, em seguida, o registro com chave igual a 7 no início, depois, o registro com chave igual a 8 no fim, logo após, o registro com chave igual a 9 no início, e, por fim, o registro com chave igual a 10 no fim. */

// [ 1 ]
// [ 1 2 ]
// [ 3 1 2 ]
// [ 3 1 2 4 ]
// [ 5 3 1 2 4 ]
// [ 5 3 1 2 4 6 ]
// [ 7 5 3 1 2 4 6 ]
// [ 7 5 3 1 2 4 6 8 ]
// [ 9 7 5 3 1 2 4 6 8 ]
// [ 9 7 5 3 1 2 4 6 8 10 ] - Será impresso dessa forma, do início para o fim!
