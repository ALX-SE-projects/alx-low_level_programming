# 0x18-dynamic_libraries
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
||
gcc -shared -o 100-operations.so 100-operations.c
========================
nm -D liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
gcc -L . 0-main.c -l all -o example

```python
#!/usr/bin/python3
import ctypes
spam = ctypes.CDLL(‘./liball.so’)
```
