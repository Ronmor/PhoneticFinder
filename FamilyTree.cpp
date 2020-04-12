#include "FamilyTree.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

//using std::string::compare;
using namespace family;

node::node(const string &name) : _name(name), _father(nullptr), _mother(nullptr) {}


node* node::addMother(const string &mother_name)
{
    this->_mother = new node(mother_name);
    return this;
}
node* node::addFather(const string &father_name){
    this->_father = new node(father_name);
    return this;
}

node *node::find(const string &relation)
{
    return this;
}

string& node::getName(){
    return this->_name;
}

node* Tree::find_node_by_name_father(const string& name,node* current){
    if (current -> getFather() == nullptr && current -> getName() == name)
    {
        return current;
    }
    else if (current -> getName() == name && current -> getFather() != NULL)
    {
        throw invalid_argument("an error has occured !  " +name +" already has a father !");
    }
    else
    {
      return find_node_by_name_father(name,current -> getFather()) ;
}

Tree Tree(const string &head) : this->_root(new node(head)), _size(1) {
    cout << head <<endl;
}

Tree::~Tree()
{
    remove_node(_root);
}

void Tree::remove_node(node *ptr)
{
    if (ptr == nullptr)
    {
        return;
    }
    remove_node(ptr->_father);
    remove_node(ptr->_mother);
    delete ptr;
}

Tree& Tree::addFather(const string &son, const string &father)
{
    try{
    node* decendant = find_node_by_name_father(son, _root);
    decendant -> addFather(father); 
    cout <<  decendant -> getName() << " , "  << decendant -> _father ->getName() << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return *this;
}

Tree& Tree::addMother(const string &son, const string &mother)
{
    node* decendant = find_node_by_name(son, _root);
    decendant -> addMother(mother);
    cout <<  decendant -> getName() << " , "  << decendant -> _mother ->getName() << endl;
    return *this;
}

const string Tree::relation(const string& family_member)
{
    return " ";
}
string Tree::find(const string &relation)
{
    return "  ";
}

void Tree::remove(const string& family_memeber_toRemove){
    node* temp = find_node(family_memeber_toRemove);
    remove_node(temp);
}

void Tree::display()
{
    print_node(_root);   
}

node* Tree::find_node(const string& relation)
{
    return this->_root;
}

void Tree::print_node(node* current)
{
    if (current == nullptr)
    {
        return;
    }
        
    print_node(current->_father);
    cout << current -> getName() << "\t";
    print_node( current -> _mother);                                     
    
}
}
