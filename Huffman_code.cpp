#include "Huffman.h"

uint32_t Huffman :: display_frequncy(){

    return frequency;
}

char Huffman :: display_word(){

    return word;
}

void Huffman :: frequency_set(uint32_t frequency){
    this->frequency = frequency;
}

void Huffman :: setter(uint32_t frequency, char word){

    this->frequency = frequency;
    this->word = word;

}

void Huffman :: frequency_increment(){
    this->frequency++;
}