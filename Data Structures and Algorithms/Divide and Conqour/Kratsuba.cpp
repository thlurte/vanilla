#include <bits/stdc++.h>

unsigned long long int Karatsuba(unsigned long long int a, unsigned long long int b) {
  unsigned long long int digits;
  unsigned long long int lefta, righta, leftb, rightb;
  unsigned long long int x1,x2,x3;

  if (a<10 || b<10)
    {
      return a*b;
    }

  std::string astr=std::to_string(a);

  std::string bstr=std::to_string(b);

  digits=std::max(astr.length(),bstr.length());

  unsigned long long int half = digits/2;

  lefta  = std::stoi(astr.substr(0,half));
  righta = std::stoi(astr.substr(half,digits-half));
  leftb  = std::stoi(bstr.substr(0,half));
  rightb = std::stoi(bstr.substr(half,digits-half));

  x1=Karatsuba(lefta,leftb);

  x2=Karatsuba(righta,rightb);

  x3=Karatsuba((lefta+righta),(leftb+rightb));

  return x1 * std::pow(10,2*half)+(x3-x2-x1)*std::pow(10,half)+x2;
}
  
int main()
    {
      std::cout << Karatsuba(3141592653589793238462643383279502884197169399375105820974944592,2718281828459045235360287471352662497757247093699959574966967627);
    }
  
