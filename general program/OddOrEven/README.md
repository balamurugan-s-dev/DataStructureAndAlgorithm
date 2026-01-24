# Odd or Even Checker
## ⚙️ How It Works

This project includes two methods for determining if a number is odd or even.

### Method 1: The Modulo Operator (`%`)
The standard approach uses the modulo operator to find the remainder of division.

```cpp
bool oddOrEven(int &n) {
    if(n % 2 == 0)
        return true;  // Even
    else
        return false; // Odd
}
```

#### 🔍 Visual Example
The modulo operator (`%`) calculates what is left over after division.

**Case A: Checking the number 5 (Odd)**
```text
  5 ÷ 2 = 2  (Remainder: 1)
  
  Since the remainder is 1, the number is Odd.
```

**Case B: Checking the number 4 (Even)**
```text
  4 ÷ 2 = 2  (Remainder: 0)
  
  Since the remainder is 0, the number is Even.
```

* **Logic:** Calculates the remainder of `n / 2`.
* **Result:** If the remainder is `0`, the number is perfectly divisible by 2 (Even). Otherwise, it is odd.

### Method 2: The Bitwise AND Operator (`&`)
An alternative, highly efficient method uses bitwise manipulation.

```cpp
bool oddOrEven(int &n){
    if((n & 1) == 0)
        return true;  // Even
    else
        return false; // Odd
}
```

#### 🔍 Visual Example
To understand why this works, look at the numbers in binary. The `& 1` operation compares only the last digit (bit).

**Case A: Checking the number 5 (Odd)**
```text
  0000 0101   (Decimal 5)
& 0000 0001   (The mask '1')
-----------
  0000 0001   -> Result is 1 (Not Zero)
```

**Case B: Checking the number 4 (Even)**
```text
  0000 0100   (Decimal 4)
& 0000 0001   (The mask '1')
-----------
  0000 0000   -> Result is 0 (Zero)
```

* **Logic:** Checks the **Least Significant Bit (LSB)** of the integer's binary representation.
    * Odd numbers always end in `1` (binary `...001`).
    * Even numbers always end in `0` (binary `...000`).
* **Operation:** The expression `n & 1` masks all bits except the last one.
* **Result:** If the result is `0`, the LSB was `0` (Even). If the result is `1`, the LSB was `1` (Odd).

## 🚀 Getting Started

### Prerequisites

To compile and run this program, you need a C++ compiler installed on your system. Common options include:
* **GCC** (G++) - Standard for Linux/MinGW for Windows
* **Clang** - Common on macOS
* **MSVC** - Visual Studio C++ Compiler

### Installation & Compilation

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/balamurugan-s-dev/DataStructureAndAlgorithm.git
    ```

2.  **Compile the code:**
    Use g++ (or your preferred compiler) to build the executable.
    ```bash
    g++ main.cpp -o odd_check
    ```

## 💻 Usage

1.  **Run the application:**
    * On Windows:
        ```bash
        odd_check.exe
        ```
    * On Linux/macOS:
        ```bash
        ./odd_check
        ```

2.  **Enter a number:**
    Type an integer when prompted and press **Enter**.

### Example Output

**Scenario 1: Even Number**
```text
4
Even Number
```

**Scenario 2: Odd Number**
```text
7
Odd Number
```

## 🤝 Contributing

Contributions, issues, and feature requests are welcome!
1.  Fork the Project
2.  Create your Feature Branch (`git checkout -b feature/NewFeature`)
3.  Commit your Changes (`git commit -m 'Add some NewFeature'`)
4.  Push to the Branch (`git push origin feature/NewFeature`)
5.  Open a Pull Request

## 📄 License

This project is open-source and available for use.