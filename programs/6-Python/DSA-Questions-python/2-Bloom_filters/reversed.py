import murmurhash

class InvertibleBloomFilter:
    """
    A simplified demonstration of an Invertible Bloom Filter (IBF) concept.
    This implementation uses a bit vector for probabilistic checks and a
    lookup table (dictionary) to store actual key-value pairs, allowing
    for element recovery and basic IBF operations.

    Note: True IBFs involve more complex hash functions and data structures
    to enable set difference computation and reconciliation without a full
    lookup table, but this demonstrates the core idea of element recovery
    and the operations described in your documentation.
    """
    def __init__(self, size=20):
        self.size = size
        self.bit_vector = [0] * size
        self.lookup_table = {} # Stores key-value pairs for recovery

    def _hash(self, key):
        """
        Generates a hash for the given key and maps it to an index
        within the bit vector size.
        """
        return murmurhash.hash(key) % self.size

    def insert(self, key, value):
        """
        Inserts a key-value pair into the IBF.
        Sets the corresponding bit in the bit vector and stores the
        key-value pair in the lookup table.
        """
        index = self._hash(key)
        self.bit_vector[index] = 1 # Mark presence in the bit vector
        self.lookup_table[key] = value # Store the actual data

        print(f"Inserted '{key}': '{value}'. Bit vector updated at index {index}.")
        print(f"Current bit vector: {self.bit_vector}")
        print(f"Current lookup table: {self.lookup_table}")

    def get(self, key):
        """
        Retrieves the value associated with a key.
        First checks the bit vector probabilistically, then confirms
        presence and retrieves from the lookup table.
        """
        index = self._hash(key)
        if self.bit_vector[index] == 1:
            if key in self.lookup_table:
                print(f"'{key}' found in IBF. Value: '{self.lookup_table[key]}'")
                return self.lookup_table[key]
            else:
                # This indicates a potential false positive from the bit vector
                # (bit is set, but the key is not in our lookup table),
                # or the key was deleted without clearing the bit.
                print(f"'{key}' might be present (bit set), but not found in lookup table (false positive or deleted).")
                return None
        else:
            print(f"'{key}' not found in IBF (bit not set).")
            return None

    def delete(self, key):
        """
        Deletes a key-value pair from the IBF.
        Removes the key from the lookup table. Note: In a simple Bloom filter,
        bits are generally not unset directly as multiple elements can hash
        to the same bit. True IBFs have more sophisticated deletion mechanisms
        (e.g., Counting Bloom Filters or specific IBF algorithms).
        """
        if key in self.lookup_table:
            value = self.lookup_table.pop(key)
            print(f"Deleted '{key}': '{value}' from lookup table.")
            # For this simplified demonstration, we don't unset the bit in the bit_vector.
            # The bit might remain '1' if other elements also hashed to this index.
            print(f"Current lookup table: {self.lookup_table}")
            print(f"Bit vector remains: {self.bit_vector} (bit not unset due to potential collisions)")
            return True
        else:
            print(f"'{key}' not found in IBF for deletion.")
            return False

    def list_elements(self):
        """
        Lists all key-value pairs currently stored in the IBF's lookup table.
        This demonstrates the 'recovery' aspect of IBFs, allowing you to
        retrieve the actual elements.
        """
        print("\n--- Listing all elements in IBF ---")
        if not self.lookup_table:
            print("IBF is empty.")
        for key, value in self.lookup_table.items():
            print(f"Key: '{key}', Value: '{value}'")
        print("-----------------------------------\n")
        return list(self.lookup_table.items())

# --- Demonstration of Invertible Bloom Filter ---

print("Initializing Invertible Bloom Filter...")
ibf = InvertibleBloomFilter(size=20)

# 1. INSERT operations: Adding elements with associated values
print("\n--- Performing INSERT operations ---")
ibf.insert("Pikachu", "Electric Type")
ibf.insert("Charmander", "Fire Type")
ibf.insert("Bulbasaur", "Grass/Poison Type")

# 2. GET operations: Retrieving values
print("\n--- Performing GET operations ---")
ibf.get("Pikachu")
ibf.get("Charmander")
ibf.get("Squirtle") # Not inserted, should not be found

# 3. LIST operation: Recovering all stored elements
ibf.list_elements()

# 4. DELETE operation: Removing an element
print("\n--- Performing DELETE operation ---")
ibf.delete("Charmander")
ibf.delete("Jigglypuff") # Not present, should indicate not found

# 5. GET after DELETE: Confirming deletion
print("\n--- Performing GET after DELETE ---")
ibf.get("Charmander") # Should now indicate not found in lookup table
ibf.get("Pikachu") # Should still be found

# 6. LIST after DELETE: Showing updated elements
ibf.list_elements()

# Demonstrate a potential false positive scenario (bit set, but key not in lookup)
# This highlights a characteristic of simple Bloom filters when elements are deleted
# without a counting mechanism or full IBF logic.
print("\n--- Demonstrating potential false positive scenario ---")
# Even though Charmander was deleted from the lookup table, its corresponding bit
# in the bit_vector might still be '1' if another element also hashed to that index,
# or if the bit was simply not unset (as in this simplified demo).
# The 'get' method correctly identifies that while the bit is set, the key
# is no longer in the lookup table.
ibf.get("Charmander")
