#include "Priority_queue.h"

Priority_queue :: Priority_queue(std::vector<Huffman*> _node) : node(_node), size(_node.size()){}
int Priority_queue :: left_node_index(int index){ return (2*index)+1; }
int Priority_queue :: right_node_index(int index){ return (2*index)+2; }
int Priority_queue :: parent_node( int index){ return (index -1)/2; }

void Priority_queue :: swap(Huffman *swap_node1, Huffman *swap_node2){

    Huffman *temp_swap_node = swap_node1;
    *swap_node1 = *swap_node2;
    *swap_node2 = *temp_swap_node;
}

void Priority_queue :: delete_node(int index){

    int temp_index = index;
    int left_index = left_node_index(temp_index);
    int right_index = right_node_index(temp_index);

    if( node[left_index]->display_frequncy() < node[temp_index]->display_frequncy() ) 
        temp_index = left_index;
    else if(node[right_index]->display_frequncy() < node[temp_index]->display_frequncy())
        temp_index = right_index;

    if(temp_index != index){
        swap(node[temp_index], node[index]);
    }         
    
}

void Priority_queue :: insert_to_heap(Huffman *insert_node){
    
    unsigned int temp_size = size;
    if(size == 0) node.push_back(insert_node);
    else{
        node.push_back(insert_node);
        while(temp_size != 0 && node[parent_node(temp_size)]->display_frequncy() > node[temp_size]->display_frequncy() ){
            swap(node[parent_node(temp_size)],node[temp_size]);
            temp_size = parent_node(temp_size);
        }
    }

    size++;
    
}