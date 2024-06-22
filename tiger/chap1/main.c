#include <stdio.h>
#include "util.h"
#include "slp.h"
#include "prog1.h"

A_stm prog1(void) {
    return A_CompoundStm(A_AssignStm("a",
                 A_OpExp(A_NumExp(5), A_plus, A_NumExp(3))),
                 A_AssignStm("b",
                 A_OpExp(A_NumExp(5), A_plus, A_NumExp(3))));

}
A_stm prog2(void) {
    return A_AssignStm("a",A_NumExp(3));

}

A_stm prog3(void){
    return A_PrintStm(A_LastExpList(A_IdExp("b")));
}


int main(){
    A_stm p=prog();
    int ans = maxargs(p);
    printf("maxarg is %d\n",ans);
    return 0;
}