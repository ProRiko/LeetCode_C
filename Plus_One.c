int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1; 
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10; 
        carry = sum / 10;     
    }
    if (carry > 0) {
        (*returnSize) = digitsSize + 1;
        int* newDigits = (int*)malloc(sizeof(int) * (*returnSize));
        newDigits[0] = carry; 
        for (int i = 0; i < digitsSize; i++) {
            newDigits[i + 1] = digits[i];
        }
        return newDigits;
    } else {
        (*returnSize) = digitsSize;
        return digits;
    }
}
