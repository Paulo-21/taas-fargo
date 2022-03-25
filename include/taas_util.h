/* ============================================================================================================== */
/* == BEGIN FILE ================================================================================================ */
/* ============================================================================================================== */
/*
 ============================================================================
 Name        : taas_util.h
 Author      : Matthias Thimm
 Version     : 1.0
 Copyright   : GPL3
============================================================================
*/
#pragma once

#include "taas_af.h"
#include "taas_fast_pqueue.h"

#include <vector>
#include <stack>

using namespace std;

/* ============================================================================================================== */
namespace taas{

    void print_arg_vector(vector<int> & v, taas::Af& af);
    void print_arg_bitset(vector<bool> & b, taas::Af& af);
    void print_arg_stack(stack<int> & s, taas::Af& af);
    void print_pqueue_stack(stack<taas::FastPriorityQueue*> & s, taas::Af& af);
}
/* ============================================================================================================== */
/* == END FILE ================================================================================================== */
/* ============================================================================================================== */
