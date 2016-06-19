/*  test-fisher-exact.cc -- Run the fisher exact test from htslib.

    Copyright (c) 2015, Avi Ramu

    Author: Avi Ramu <avinash3003@yahoo.co.in>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.  */

#include <iostream>
#include "kfunc.h"

using namespace std;

int main() {
    double fisher_left_p, fisher_right_p, fisher_twosided_p;
    kt_fisher_exact(10, 20, 1000, 2000,
                    &fisher_left_p, &fisher_right_p, &fisher_twosided_p);
    cerr << "left greater - pval " << fisher_left_p << endl;
    cerr << "right greater - pval " << fisher_left_p << endl;
    cerr << "twosided - pval " << fisher_twosided_p << endl;
}
