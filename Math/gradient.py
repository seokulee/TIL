# Input: gradient, init, lr, eps
# Output: var

import numpy as np

def func(val):
    fun = sym.poly(x**2 + 2*x + 3)
    return fun.subs(x, val), fun

def func_gradient(fun, val):
    _, function = fun(val)
    diff = sym.diff(function, x)
    return diff.subs(x, val), diff

def gradient_descent(fun, init, lr_rate=le-2, eps=le-5):
    cnt = 0
    var = init
    diff, _ = func_gradient(fun, var)
    while np.abs(diff) > epsilon:
        var = var - lr_rate * diff
        diff, _ = func_gradient(fun, var)
        cnt += 1

