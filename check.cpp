#include<iostream>
#include<vector>

class Test{

    public :
    int data;

    Test(int _data): data(_data){}

    Test *left = NULL, *right = NULL;

};

Test *head = NULL , *temp = NULL;

Test *create_tree(int *a){

    Test *new_node = new Test(*a);

    if (head == NULL) head = temp = new_node;

    return new_node;
}

void node_check(std::vector<Test*>test_sample){

    std::vector<int>code;

    for(int i = 0; i < test_sample.size(); i++){

       if(test_sample[i]->right != NULL && test_sample[i]->left != NULL){ 

        if(test_sample[i]->right == test_sample[i+1])
            code.push_back(1);

        else code.push_back(0);    
       }

    }

    for(auto i : code) std::cout<<"see the base : "<<i<<std::endl;
}



std::vector<Test*> p;

void traverse_the_root(Test* node, std::vector<Test*> numb){

    // static Test* temp;
        // std::cout<<"data : "<<node->data<<std::endl;
    numb.push_back(node);
    if(node->left == NULL && node->right == NULL){
        std::cout<<"edge data : "<<node->data<<" - "<<std::endl;
        node_check(numb);
        // for(int i= 0 ; i < numb.size(); i++ ) std::cout<<">>>> "<<numb[i]<<std::endl;

    }else{

        // std::cout<<"s va : "<<s<<std::endl;
        if(node->left != NULL){
             
        traverse_the_root(node->left,numb);
        }
        
        if(node->left != NULL){
        // numb.push_back(node->data);
        traverse_the_root(node->right,numb);
        }
    }

    

}


void wrapper(Test *node){

    // traverse_the_root(node->right,0);

}


int arr[100];
int total_size = 100;
int size = 0;

int parent(int i ){
    return (i-1)/2;
}

int left(int i) { return 2*i+1;}

int right(int i ){ return 2*i +2;}

void swap(int *arr1, int *arr2){
    int temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}

void delete_node(int i){

    int temp_index = i;

    int left_index = left(temp_index);
    int right_index = right(temp_index);

    arr[i] = arr[size -1];

    if (arr[left_index] < arr[i]) temp_index = left_index;
    else if (arr[right_index] > arr[i]) temp_index = right_index; 

    if(temp_index != i){

        swap(&arr[temp_index], &arr[i]);
        delete_node(temp_index);
    }
}

void entry(int i){
    int temp_size = size;
    if(size == 0){
        arr[size] = i;
        size++;
    }else{

        arr[size] = i;
            // std::cout<<"parent : "<<arr[parent(size)]<<" - "<<parent(3)<<std::endl;
        while(temp_size != 0 && arr[parent(temp_size)] > arr[temp_size] ){

            swap(&arr[temp_size], &arr[parent(temp_size)]);

            temp_size = parent(temp_size);
        }

        size++;
    }
}

class h{

    public :
    int l = 0;
    int kal();

    void jam();
};


int h :: kal(){
        std::cout<<"haai";
        return 9;
    }

void h :: jam(){
        int ka = kal();
    }

void ss(h *a, h *b){
    h *temp = a;
    *a = *b;
    *b = *temp;
    // std::cout<<"result be : "<<a->l<<std::endl;
    // a->l = 12;
    // a->l = 18;
}    
int main(){
    h *k = new h();
    k->l = 90;

    h *o = new h();
    o->l = 100;

    std::vector<h *> ja{k,o};

     std::cout<<"mone scene : "<<ja.size()<<" -- "<<ja.capacity()<<std::endl;

    ja.clear();
     std::cout<<"mone scene : "<<ja.size()<<" -- "<<ja.capacity()<<std::endl;


    // ss(ja[0],ja[1]);
    // h sample;

    // std::cout<<"mone scene 2 : "<<ja[0]->l;

    // sample.jam();

//     arr[0] = 0;
// arr[1] = 0;
//     entry(7);
//     entry(1);
//     entry(4);
//     entry(10);
//     entry(2);
//     std::cout<<"soze be :"<<size<<std::endl;
//     for(int i = 0; i < size; i++){
//         std::cout<<arr[i]<<std::endl;
//     }

//     // std::cout<<"left of : "<<arr[left(1)];

//     delete_node(0);

//     std::cout<<"after : \n";

//     for(int i = 0; i < size; i++){
//         std::cout<<arr[i]<<std::endl;
//     }

    // int i = 5;

    // auto root = create_tree(&i);

    // i = 3;

    //  root->left = create_tree(&i);

    //  i = 9;

    //  root->right = create_tree(&i);

    //   i = 2;

    //  root->left->left = create_tree(&i);

    //   i = 4;

    //  root->left->right = create_tree(&i);

    //   i = 10;

    //  root->right->right = create_tree(&i);

    // i = 7;

    //  root->right->left = create_tree(&i);

    //   i = 13;

    //  root->right->right->right = create_tree(&i);

    //  i = 12;

    //  root->right->right->left = create_tree(&i);
      
    // std::cout<<"thala : "<<head<<" -- "<<root<<std::endl;
    // std::vector<Test*>numb;
    // traverse_the_root(root,numb);
    


    // std::vector<Test*> p;

    // p.push_back(root);

    // std::cout<<"first outbput : "<<p[0]->data<< " -- "<<head->data<<std::endl;

    // p.clear();

    // std::cout<<"size : "<<p.size()<<"capicity : "<<p.capacity()<<std::endl;

    // p.shrink_to_fit();

    // std::cout<<"size2 : "<<p.size()<<"capicity2 : "<<p.capacity()<<std::endl;

    // std::cout<<"second outbput : "<< " -- "<<head->data;

}