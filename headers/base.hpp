

// 1 struct for parsing into a tree.
// union to save data space.


enum DATA_TYPES = {
  STRING,
  OBJECT,
  ARRAY,
  NUMBER,
  BOOLEAN
}


struct DATA {
  DATA_TYPES type;
  union u {
    std::string string;
    double number;
    bool bool;
    DATA* object;
    std::vector<DATA> array;
  }
}
