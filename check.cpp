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

int main(){

    int i = 0;

    auto root = create_tree(&i);

    i = 3;

     root->left = create_tree(&i);

     i = 9;

     root->right = create_tree(&i);

      i = 2;

     root->left->left = create_tree(&i);

      i = 4;

     root->left->right = create_tree(&i);

      i = 10;

     root->right->right = create_tree(&i);

    i = 7;

     root->right->left = create_tree(&i);

      i = 13;

     root->right->right->right = create_tree(&i);

     i = 12;

     root->right->right->left = create_tree(&i);
      
    std::cout<<"thala : "<<head<<" -- "<<root<<std::endl;
    std::vector<Test*>numb;
    traverse_the_root(root,numb);
    // wrapper(root);
    

    // std::string s = "2";

    // s = s + "ka";

    // std::cout<<s;


}