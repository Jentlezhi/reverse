//
//  arm.s
//  RegisterDemo
//
//  Created by Jentle on 2020/5/16.
//  Copyright © 2020 Jentle. All rights reserved.
//
.text
//公开给外界使用
.global _test

/*
_cmp:
mov x0, #0x3
mov x1, #0x1
cmp x0, x1
ret
*/

/*
_test:
b myCode
mov x0,#0x7
myCode:
mov x1,#0x9
ret
*/

_test:
mov x0,#0x1
mov x1,#0x1
beq myCode
mov x2,#0x2
ret
myCode:
mov x3,#0x9
ret
