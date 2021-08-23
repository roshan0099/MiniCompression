
#include"tree_make.h"
#include<fstream>
#include<algorithm>

#define log std::cout<<

static Huffman *head = NULL, *temp = NULL;
static std::vector<Huffman*> huffman_pointer;

void create_all_nodes(){

    for(int i = 97; i < 123; i++)
        huffman_pointer.push_back(create_tree(i));

    // //for spaces
    huffman_pointer.push_back(create_tree(32)); 

}

void filter(){

    Huffman *temp_head;
    std::vector<Huffman*> temp_space;

    for(int i = 0; i < huffman_pointer.size(); i++){

        if(huffman_pointer[i]->display_frequncy() == 0){
            temp_head = head->right;

            delete head;
            head = temp_head;
       
        }else temp_space.push_back(huffman_pointer[i]);


    }


    huffman_pointer.swap(temp_space);
    // huffman_pointer[huffman_pointer.size()-1]->frequency_set(huffman_pointer[huffman_pointer.size()-1]->display_frequncy() -1);


}

void read_file(std::string Name){

    std::ifstream fin;

    fin.open("sample.txt");
    char word;
    fin>>std::noskipws;
    while(fin){

        // fin.get(word);
        fin>>word;

        if(word >= 97 && word <= 123){

            huffman_pointer[word -97]->frequency_increment();

        } else if(word == 32) 
        
            huffman_pointer[huffman_pointer.size() -1]->frequency_increment();
    }

}


Huffman* create_tree(char word){


    Huffman *new_Huffman = new Huffman(word);

    if(head == NULL){
        head = temp = new_Huffman;
    
    }else{

        temp->right = new_Huffman;
      //  new_Huffman->link_left = temp;
        temp = temp->right;

    }

    return new_Huffman;
}

void swap(Huffman* min_val){

    int temp_val = min_val->display_frequncy(); 
    char word = min_val->display_word();

    min_val->setter(temp->display_frequncy(), temp->display_word());
    temp->setter(temp_val, word);

}

//selection sort 
void sort(){

    temp = head;

    Huffman *check,*min_val;

    check = min_val = NULL;

    while(temp->right != NULL){

        min_val = temp;
        check = temp->right;

        while(check != NULL){

            if(check->display_frequncy() < min_val->display_frequncy())
                min_val = check;

            check = check->right;
        }

        swap(min_val);    

        temp = temp->right;

    }

}

void display(){

    sort();
    filter();

    build_tree_wrap();

    temp = head;

    tree_leaves_display(temp);

    // while(temp != NULL){

    //     std::cout<<temp->display_word()<<"  --- "<<temp->display_frequncy()<<std::endl;

    //     temp = temp->right;
    // }

}

void queue_sort(Huffman *mega_node){

    temp = head;

    // build_tree();

}

/*function to build huffman tree in a way that the first two elements of the sorted linked list will form the
 leaves the mega_node and then mega_node gets connected to the rest of the linked list and the function 
 is called recursively until head becomes the root node   
*/
void build_tree(){

    Huffman *temp_store;

    int frequency;

    Huffman* mega_node = new Huffman('&');

    mega_node->link_left = temp;
    // head = temp->right;
    frequency = temp->display_frequncy();
    temp_store = temp->right;

    temp->right = mega_node;
    temp = temp_store;
    // temp_store = temp;
    temp_store = temp_store->right;
    temp->right = mega_node;

    frequency += temp->display_frequncy();
    mega_node->link_right = temp;
    mega_node->frequency_set(frequency);

    if(temp_store != NULL){
    mega_node->right = temp_store;

    // temp->right->link_left = mega_node;

    }
    temp = head = mega_node;

    if(temp->right != NULL)
        build_tree();


    // queue_sort(mega_node);

    // sort();

}

void build_tree_wrap(){

    temp = head;

    build_tree();

}

void tree_leaves_display(Huffman *root){

    if(root->link_left == NULL && root->link_right == NULL)
        log root->display_word()<<std::endl;
    else{
        tree_leaves_display(root->link_left);
        tree_leaves_display(root->link_right);
    }

}
