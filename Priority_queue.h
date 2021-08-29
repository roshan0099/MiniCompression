
#include "Huffman.h"
// #include<vector>
class Priority_queue{

    std::vector<Huffman*> node;
    
    public :
    Priority_queue(std::vector<Huffman*> _node);   
    int left_node_index(int index);
    int right_node_index(int index);
    int parent_node(int index);
    void swap(Huffman *swap_node1, Huffman *sawap_node2);
    void delete_node(int index);
    void build_heap();


};