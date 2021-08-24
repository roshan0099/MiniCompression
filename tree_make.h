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
void build_tree();
void build_tree_wrap();
void tree_leaves_display(Huffman *root);

//work in progress
void wrap_around();
void character_store();
void node_check(std::string code);
void code_extraction(Huffman* root, std::vector<Huffman*> node_path);
void write_to_file();