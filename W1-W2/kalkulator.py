def calculate(expr):
    tokens = expr.split()
    if len(tokens) !=3:
        print("Format harus: <angka> <operator <angka>")
        return
    a_str, op, b_str = tokens
    try:
        a = float(a_str)
        b = float(b_str)
    except ValueError:
        print("Angka tidak valid")
        return
    
    if op == '+' :
        r = a + b
    elif op == '-' :
        r = a * b
    elif op == '/' :
        if b == 0:
            print("Error: pembagian dengan nol")
            return
        r = a / b
    elif op == '%' :
        r = a ** b
    else :
        print("Operator tidak dikenal")
        return
    print(f"{a} {op} {b} = {r}")

if __name__ == "__main__":
    while True:
         expr = input("Masukkan operasi (atau 'exit') : ")
         if expr.lower() in ("exit", "quit") :
             break
         calculate(expr)    






