
// main.cpp
//Tests all functionality of the My_vec class.

#include <iostream>
#include <stdexcept>
#include "My_vec.h"

int main(){
try{

    // define an object v of My_vec type
    	My_vec v;
    // insert 'B' at the rank 0 into the vector v
    	v.insert_at_rank(0,'B');
	// use the overloaded operator << to display vector elements
//    cout<<"The Elements after the overloaded operator (<<) has been used: "<<v;
    // display the vector v size
cout<<"The size of the vector is: "<<v.get_size();
	// insert 'A' at the rank 0 into the vector v
v.insert_at_rank(0,'A');
	// use the overloaded operator << to display vector elements

  //  cout<<"The Elements after the overloaded operator (<<) has been used after A has been inserted: "<<v;
	// display the vector v size

cout<<"The size of the vector is: "<<v.get_size();
	// insert 'D' at the rank 10 into the vector v
v.insert_at_rank(10,'D');
	// use the overloaded operator << to display vector elements


   // cout<<"The Elements after the overloaded operator (<<) has been used after D has been inserted: "<<v;
	// display the vector v size

cout<<"The size of the vector is: "<<v.get_size();
	// remove a character at the rank 2 from the vector v
v.remove_at_rank(2);
	// use the overloaded operator << to display vector elements


   // cout<<"The Elements after the overloaded operator (<<) has been used after element at rank 2 has been removed: "<<v;
	// display the vector v size

cout<<"The size of the vector is: "<<v.get_size();
	// replace a character at the rank 2 by the character 'E' 

	v.replace_at_rank(2,'E');
	// use the overloaded operator << to display vector elements
  //cout<<"The Elements after the overloaded operator (<<) has been used after element at rank 2 has been removed: "<<v;
	// display the vector v size

cout<<"The size of the vector is: "<<v.get_size();
	
	// create a copy v1 of the vector v using a copy constructor (for copy consructors, you have to creae an object first and
	// then copy the elements into it: ) 
	My_vec v1=v;


	// use the overloaded operator << to display the vector v1
 // cout<<"The Elements after the overloaded operator (<<) has been used after element at rank 2 has been removed: "<<v;
	
    // replace a character at the rank 2 of the vector v1 with the character 'Y'
v1.replace_at_rank(2,'Y');
	// use the overloaded operator << to display vector v1 elements
  //cout<<"The Elements after the overloaded operator (<<) has been used after element at rank 2 has been removed: "<<v1;

	// define an object v2 of My_vec type
  My_vec v2;

	// insert 'K' at the rank 0 into the vector v2
  	v2.insert_at_rank(0,'K');

	// use the overloaded operator << to display vector elements
	//  cout<<"The Elements after the overloaded operator (<<) has been used after element at rank 2 has been removed: "<<v;

    // display the vector v2 size
cout<<"The size of the vector is: "<<v2.get_size();

    // test the assignment operator and copy the vector v1 to v2 

v2=v1;		 // calls assignment operator, same as "v2.operator=(v1);"
    // use the overloaded operator << to display vector v2
    	  //cout<<"The Elements after the overloaded operator (<<) has been used after element at rank 2 has been removed: "<<v2;

    // display the vector v2 size
cout<<"The size of the vector is: "<<v2.get_size();

    // test the function find_max_index using v2
//int max = find_max_index(v2,6);// test the function sort_max using v2

	// replace in the vector v2 a character at the rank 14 with 'S'
v2.replace_at_rank(14,'S');

}

catch(exception &error){
	cerr << "Error: " << error.what() << endl;
}
}

