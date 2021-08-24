#pragma once
#include<iostream>

struct char_store{

    char word;
    std::string code;

    char_store(char _word, std::string _code) : word(_word),code(_code){}

};


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

        Huffman *link_left = NULL, *right = NULL, *link_right = NULL;
};

