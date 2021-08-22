// #include<iostream>
// #include<vector>

// #define debug 0

// #if(debug == 0)
// #define log std::cout<<
// #else 
// #define log
// #endif

// class Test{

//     int numb;

//     public :

//     Test(int _numb) : numb(_numb) {}

//     int display_numb();

//     void setter(int _numb);

//     Test *right = NULL, *parent = NULL;
// };

// //tree node that classifies the last nodes 
// class Tree_Node{

//         int sum = 0;

//     public :

//         Test *left = NULL, *right = NULL;
//         Tree_Node *parent = NULL;
        
//         void setter(int _sum);
// };

// void Tree_Node :: setter(int _sum){

//     sum = _sum;

// }


// void tree_calculate(){

//     temp = head;
//     static std::vector<Tree_Node*> tree_node_collection;



// }

// void recursive_tree_calc(std::vector<Tree_Node> &tree_node_collection){

//     if(temp->right != NULL){
//         Tree_Node *new_node = new Tree_Node();

//         new_node->left = temp;
//         temp = temp->right;
//         new_node->right = temp;


//     }

// }

// int Test :: display_numb(){
    
//     return numb;
// }

// void Test :: setter(int _numb){
    
//     numb = _numb;
// }

// static Test *head = NULL, *temp = NULL;

// void selection_sort(Test *min_val){

//     int temp_val = min_val->display_numb();
//     min_val->setter(temp->display_numb());
//     temp->setter(temp_val);

// }

// void sort(){

//     temp = head;

//     Test *min_val, *secondVal;

//     while(temp->right != NULL){

//         min_val = temp;
//         secondVal = temp->right;

//         while(secondVal != NULL){

//             if(secondVal->display_numb() < min_val->display_numb()) min_val = secondVal;

//             secondVal = secondVal->right;

//         }

//         selection_sort(min_val);

//         temp = temp->right;

//     }



// }

// void handle_node_placement(Test *new_node){

//         temp->right = new_node;
//         temp = new_node;
// }

// void create_node(int numb){

//     Test *new_node = new Test(numb);

//     if(head == NULL){

//         head = temp = new_node;

//     }else{

//         handle_node_placement(new_node);

//     }
// }

// void display(){

//     temp = head;

//     while(temp != NULL){

//         log"yo  : "<<temp->display_numb()<<std::endl;

//         temp = temp->right;

//     }

// }

// int main(){

//     int i = 5;
//     create_node(i);
//     i = 3;
//     create_node(i);
//     i = 9;
//     create_node(i);

//      i = 10;
//     create_node(i);

//      i = 1;
//     create_node(i);

//      i = 7;
//     create_node(i);
//     // i = 10;
//     // create_node(i);
//     sort();
//     display();

//     return 0;
// }
