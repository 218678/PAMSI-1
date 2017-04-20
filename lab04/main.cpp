#include "lista_klasa.h"

// clear; g++ -Wall -pedantic -std=c++11 main.cpp; ./a.out

// void merge(lista* lista1, int start, int half, int end) {
//   lista* lista1_pom = new lista();
//   int i = start, j = half+1, k=0;
//
//   while (i <= half && j <= end) {
//     if ()
//   }
// }
//
// void merge_sort(lista* lista1, int start, int end) {
//   int half;
//   if (start != end) {
//     half = (start + end)/2;
//     merge_sort(lista1, start, half);
//     merge_sort(lista1, half+1, end);
//     merge(lista1, start, half, end);
//   }
// }


int main() {

  srand(time(NULL));

  lista* lista1;
  lista1 = new lista();

  lista1->wyswietl_liste();
  lista1->wypelnij(10);
  lista1->wyswietl_liste();

  return 0;
}
