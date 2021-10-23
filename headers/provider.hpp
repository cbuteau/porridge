
// maybe bytes?

class Provider {
  virtual std:string flatten(Tree tree) = 0;
  virtual Tree parse(std:string data) = 0;
}
