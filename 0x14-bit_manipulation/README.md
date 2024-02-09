#Bitwise Operators in C:
C provides six bitwise operators:

Bitwise AND (&): Performs a bitwise AND operation on corresponding bits of two operands.

Bitwise OR (|): Performs a bitwise OR operation on corresponding bits of two operands.

Bitwise XOR (^): Performs a bitwise XOR (exclusive OR) operation on corresponding bits of two operands.

Bitwise NOT (~): Flips all bits of the operand.

Left Shift (<<): Shifts the bits of the first operand to the left by the number of positions specified by the second operand.

Right Shift (>>): Shifts the bits of the first operand to the right by the number of positions specified by the second operand.

Common Use Cases:
Setting a Bit:

// Set the 3rd bit of a variable x
x |= (1 << 2);

Clearing a Bit:

// Clear the 4th bit of a variable x
x &= ~(1 << 3);
Toggling a Bit:

// Toggle the 5th bit of a variable x
x ^= (1 << 4);
Checking if a Bit is Set:

// Check if the 2nd bit of a variable x is set
if (x & (1 << 1)) {
    // Bit is set
} else {
    // Bit is not set
}
Checking if a Bit is Clear:

// Check if the 3rd bit of a variable x is clear
if (!(x & (1 << 2))) {
    // Bit is clear
} else {
    // Bit is not clear
}
Caution:
Endianness: Be aware of endianness issues if dealing with multi-byte data types.
Portability: Bit manipulation may not be portable across different platforms due to variations in integer sizes and representations.
Optimization:
Bit manipulation can lead to more efficient code, especially in low-level programming or when dealing with constrained systems.
Precaution:
Proper documentation and code readability practices should be followed when using bit manipulation to ensure maintainability and understanding for other developers.
Understanding bit manipulation can be very useful, especially in scenarios like embedded systems programming, cryptography, and optimization of algorithms. However, it's important to use it judiciously and with caution to avoid introducing bugs or making code hard to understand.




