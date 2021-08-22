#pragma once
#include<iostream>

class Huffman{

    uint32_t frequency = 0;
    char word;

    public : 
        Huffman(char _word) : word(_word){}

        void frequency_set(uint32_t freqency);
        void setter(uint32_t frequency, char word);
        void frequency_increment();
        uint32_t display_frequncy();
        char display_word();

        Huffman *left = NULL, *right = NULL, *parent = NULL;
};
