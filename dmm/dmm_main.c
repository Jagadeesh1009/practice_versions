

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic
    a = a + b; // a becomes 15 (5 + 10)
    b = a - b; // b becomes 5  (15 - 10) -> original value of a
    a = a - b; // a becomes 10 (15 - 5)  -> original value of b

    printf("After swapping22: a = %d, b = %d\n", a, b);

    return 0;
}


