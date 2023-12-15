Hashtable Implementation
Overview
This project implements a hashtable in C using a Chaining collision handling technique. The hashtable stores key-value pairs and offers efficient insertion, deletion, and retrieval operations. Collision handling is achieved by using linked lists at each cell of the array.

Data Structures Used
hash_node_t
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;
key: The unique string key associated with the value.
value: The value corresponding to the key.
next: A pointer to the next node of the linked list for collision handling.
hash_table_t
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
size: The size of the array.
array: An array of pointers. Each cell points to the first node of a linked list for chaining collision handling.
Features
Key-Value Pair Storage: Stores key-value pairs with unique keys.
Collision Handling: Uses Chaining technique to handle collisions efficiently.
Efficient Operations: Provides constant-time average case performance for insertion, deletion, and retrieval.
Usage
Compilation
To compile the hashtable, use your preferred C compiler:

bash
Copy code
gcc hashtable.c -o hashtable
Example Usage
Here's an example of how to use the hashtable:

#include "hashtable.h"

int main() {
    // Initialize the hashtable
    hash_table_t *hashtable = createHashtable(100); // Specify hashtable size

    // Insert key-value pairs
    insert(hashtable, "key1", "value1");
    insert(hashtable, "key2", "value2");

    // Retrieve values
    char *value1 = get(hashtable, "key1");
    char *value2 = get(hashtable, "key2");

    // Print retrieved values
    printf("Value for key1: %s\n", value1);
    printf("Value for key2: %s\n", value2);

    // Clean up hashtable
    destroyHashtable(hashtable);

    return 0;
}
Functions
createHashtable(size_t size): Creates a hashtable of the specified size.
insert(hash_table_t *hashtable, const char *key, const char *value): Inserts a key-value pair into the hashtable.
get(hash_table_t *hashtable, const char *key): Retrieves the value associated with the given key.
destroyHashtable(hash_table_t *hashtable): Destroys the hashtable and frees allocated memory.
Contributing
Contributions are welcome! Feel free to submit issues or pull requests.

License
This project is licensed under the MIT License.
