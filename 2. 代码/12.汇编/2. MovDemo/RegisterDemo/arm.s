//
//  arm.s
//  RegisterDemo
//
//  Created by Jentle on 2020/5/16.
//  Copyright © 2020 Jentle. All rights reserved.
//
.text
//公开给外界使用
.global _mytest, _add, _sub
_mytest:
mov x0, #0x9
mov x1, #0x1
add x2, x0, x1
ret

_add:
add x0, x0, x1
ret

_sub:
sub x0, x0, x1
ret

