# CIPHERTOOL

A simple ASCII-based cipher tool for encrypting and decrypting text.

## FEATURES

* Caesar Cipher Implementation
* ASCII Shift Encryption (Key: 9)
* Command Line & Web Interface
* Zero Dependencies

## USAGE INSTRUCTIONS

### DOWNLOAD OPTIONS

Choose either:
* C Files: encryption.c, decryption.c, combined.c, modcob.c
* Web Version: index.html

### IMPLEMENTATION DIFFERENCES

* C Files: Terminal-based interface
* HTML File: Browser-based interface

NOTE: Both use identical encryption logic. The web version translates C logic to JavaScript.

### EXECUTION

**C Program:**
```
gcc combined.c -o cipher
./cipher
```

**Web Version:**
```
Open index.html in any browser
```

### OPERATION

1. Select mode: Encrypt or Decrypt
2. Enter your text
3. Receive processed output

## TECHNICAL DETAILS

* Algorithm: Caesar Cipher
* Key Value: 9
* Method: ASCII character shift
* Encryption: char + 9
* Decryption: char - 9

## AUTHOR

Om Mahendra Bute(ozz)
tip: Keep ur key safe. :)
