
struct DATA {
  union actual {
      std::string string;
      double number;
      bool boolean;
      int integer;
  }
  std::vector<DATA> children;
}
