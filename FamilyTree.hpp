#pragma once
#include <iostream>
/*
using std::string;
using std::cout;
using std::endl;
using std::invalid_argument;
*/
using namespace std;

namespace family
{

class node
{
private:
    string _name;

public:
    node*  _father;
    node*  _mother;

    node(const string &name);
    string& getName();
    node* getMother();
    node* getFather();
    
    node* addMother(const string &mother_name);
    node* addFather(const string &father_name);
    node *relation(node *relativeName);
    void freeSubtree(node *ptr);
    node *find(const string &relation);
    node *MinValueSubtree(node *root);
    void remove(node *ptr);

    friend class Tree;

};

class Tree
{

private:
    node* _root;
    unsigned int _size;
    node* find_node(const string& relation);
    void remove_node(node*);
    void print_node(node*);
    node* find_node_by_name_father(const string& name,node* current);
    node* find_node_by_name_mother(const string& name,node* current);
public:
    Tree(const string &head);
    ~Tree();
    Tree &addMother(const string &son, const string &mother_name);
    Tree &addFather(const string &son, const string &father);
    void remove(const string&);
    string find(const string&);
    const string relation(const string& family_member);
    void display();
};

} // namespace family
