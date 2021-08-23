#pragma once
#include "Huffman.h"
#include<vector>

void create_all_nodes();
Huffman* create_tree(char word);
void read_file(std::string Name);
void swap(Huffman* min_val);
void sort();
void display();
void filter();
void queue_filter();
void queue_filter_wrap();
void tree_leaves_display(Huffman *root);