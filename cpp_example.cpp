class Collection {
public:
  // get the current value
  int Current();
};

class Instance {
public:
  // constructor
  Instance(int value);

  // perform some calculation
  int Calculate(int value, Collection c);

  // get the previous value
  int Last();

private:
  // current value
  int _value;
};

int Instance::Calculate(int value, Collection c) {

  // check if the parameter is equal to current local _value
  if (value == _value) {

    // check if the last value is the same current from 'c'
    if (Last() == c.Current()) {
      return 1;
    }

    return 2;
  }

  return 0;
}
