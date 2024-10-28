#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

// Test functions
void test_ft_isalpha() {
    printf("Testing ft_isalpha...\n");
    assert(ft_isalpha('A') == 1); printf("Test 1 passed! ('A')\n");
    assert(ft_isalpha('z') == 1); printf("Test 2 passed! ('z')\n");
    assert(ft_isalpha('g') == 1); printf("Test 3 passed! ('g')\n");
    assert(ft_isalpha('1') == 0); printf("Test 4 passed! ('1')\n");
    assert(ft_isalpha('!') == 0); printf("Test 5 passed! ('!')\n");
    assert(ft_isalpha(' ') == 0); printf("Test 6 passed! (' ')\n");
    printf("All tests for ft_isalpha passed!\n");
}

void test_ft_isdigit() {
    printf("Testing ft_isdigit...\n");
    assert(ft_isdigit('0') == 1); printf("Test 1 passed! ('0')\n");
    assert(ft_isdigit('5') == 1); printf("Test 2 passed! ('5')\n");
    assert(ft_isdigit('9') == 1); printf("Test 3 passed! ('9')\n");
    assert(ft_isdigit('a') == 0); printf("Test 4 passed! ('a')\n");
    assert(ft_isdigit('#') == 0); printf("Test 5 passed! ('#')\n");
    assert(ft_isdigit(' ') == 0); printf("Test 6 passed! (' ')\n");
    printf("All tests for ft_isdigit passed!\n");
}

void test_ft_isalnum() {
    printf("Testing ft_isalnum...\n");
    assert(ft_isalnum('A') == 1); printf("Test 1 passed! ('A')\n");
    assert(ft_isalnum('z') == 1); printf("Test 2 passed! ('z')\n");
    assert(ft_isalnum('3') == 1); printf("Test 3 passed! ('3')\n");
    assert(ft_isalnum('!') == 0); printf("Test 4 passed! ('!')\n");
    assert(ft_isalnum(' ') == 0); printf("Test 5 passed! (' ')\n");
    assert(ft_isalnum('.') == 0); printf("Test 6 passed! ('.')\n");
    printf("All tests for ft_isalnum passed!\n");
}

void test_ft_isascii() {
    printf("Testing ft_isascii...\n");
    assert(ft_isascii('A') == 1); printf("Test 1 passed! ('A')\n");
    assert(ft_isascii(127) == 1); printf("Test 2 passed! (127)\n");
    assert(ft_isascii(0) == 1); printf("Test 3 passed! (0)\n");
    assert(ft_isascii(128) == 0); printf("Test 4 passed! (128)\n");
    assert(ft_isascii(-1) == 0); printf("Test 5 passed! (-1)\n");
    printf("All tests for ft_isascii passed!\n");
}

void test_ft_isprint() {
    printf("Testing ft_isprint...\n");
    assert(ft_isprint('A') == 1); printf("Test 1 passed! ('A')\n");
    assert(ft_isprint(' ') == 1); printf("Test 2 passed! (' ')\n");
    assert(ft_isprint('~') == 1); printf("Test 3 passed! ('~')\n");
    assert(ft_isprint(0) == 0); printf("Test 4 passed! (0)\n");
    assert(ft_isprint(31) == 0); printf("Test 5 passed! (31)\n");
    printf("All tests for ft_isprint passed!\n");
}

void test_ft_strlen() {
    printf("Testing ft_strlen...\n");
    assert(ft_strlen("Hello") == 5); printf("Test 1 passed! ('Hello')\n");
    assert(ft_strlen("World") == 5); printf("Test 2 passed! ('World')\n");
    assert(ft_strlen("Libft") == 5); printf("Test 3 passed! ('Libft')\n");
    assert(ft_strlen("12345") == 5); printf("Test 4 passed! ('12345')\n");
    assert(ft_strlen("Hello, World!") == 13); printf("Test 5 passed! ('Hello, World!')\n");
    assert(ft_strlen("") == 0); printf("Test 6 passed! ('')\n");
    assert(ft_strlen(" ") == 1); printf("Test 7 passed! (' ')\n");
    assert(ft_strlen("   ") == 3); printf("Test 8 passed! ('   ')\n");
    assert(ft_strlen("  Hello  ") == 9); printf("Test 9 passed! ('  Hello  ')\n");
    assert(ft_strlen("long string") == 11); printf("Test 10 passed! (long string)\n");
    assert(ft_strlen("Hello\nWorld") == 11); printf("Test 11 passed! ('Hello\\nWorld')\n");
    assert(ft_strlen("Tab\tSpace") == 9); printf("Test 12 passed! ('Tab\\tSpace')\n");
    assert(ft_strlen("你好") == 6); printf("Test 13 passed! ('你好')\n");
    assert(ft_strlen("Long string with spaces") == 23); printf("Test 14 passed! ('Long string with spaces')\n");
    assert(ft_strlen("1234567890") == 10); printf("Test 15 passed! ('1234567890')\n");
    assert(ft_strlen("C is great!") == 11); printf("Test 16 passed! ('C is great!')\n");
    printf("All tests for ft_strlen passed!\n");
}

void test_ft_memset() {
    printf("Testing ft_memset...\n");
    char str1[20] = "Hello";
    assert(ft_memset(str1, 'A', 10) == str1); printf("Test 1 passed! (10 'A's)\n");
    assert(strcmp(str1, "AAAAAAAAAA") == 0); printf("Test 2 passed! (after memset)\n");
    
    char str2[20] = "World";
    assert(ft_memset(str2, '\0', 0) == str2); printf("Test 3 passed! (Zero length)\n");
    assert(strcmp(str2, "World") == 0); printf("Test 4 passed! (after memset)\n");
    
    char str3[20] = "12345";
    assert(ft_memset(str3, '\0', 10) == str3); printf("Test 5 passed! (10 null characters)\n");
    assert(strcmp(str3, "\0\0\0\0\0") == 0); printf("Test 6 passed! (after memset)\n");
    
    printf("All tests for ft_memset passed!\n");
}

void test_ft_bzero() {
    printf("Testing ft_bzero...\n");
    char str[20] = "Hello";
    ft_bzero(str, 10);
    assert(strcmp(str, "\0\0\0\0\0") == 0); printf("Test 1 passed! (10 bytes bzero'd)\n");
    
    char str2[20] = "World";
    ft_bzero(str2, 0);
    assert(strcmp(str2, "World") == 0); printf("Test 2 passed! (Zero size)\n");
    
    printf("All tests for ft_bzero passed!\n");
}

void test_ft_memcpy() {
    printf("Testing ft_memcpy...\n");
    char dest[20];
    char src[] = "Hello";
    assert(ft_memcpy(dest, src, 5) == dest); printf("Test 1 passed! (Copy typical string)\n");
    assert(strcmp(dest, "Hello") == 0); printf("Test 2 passed! (after memcpy)\n");
    
    char dest2[20] = "World";
    assert(ft_memcpy(dest2, src, 0) == dest2); printf("Test 3 passed! (Zero length)\n");
    assert(strcmp(dest2, "World") == 0); printf("Test 4 passed! (after memcpy)\n");
    
    printf("All tests for ft_memcpy passed!\n");
}

void test_ft_memmove() {
    printf("Testing ft_memmove...\n");
    char str1[] = "HelloWorld";
    assert(ft_memmove(str1 + 5, str1, 5) == str1 + 5); printf("Test 1 passed! (Move typical string)\n");
    assert(strcmp(str1, "HelloHello") == 0); printf("Test 2 passed! (after memmove)\n");
    
    char str2[] = "World";
    // Continuation of test_ft_memmove
    assert(ft_memmove(str2 + 1, str2, 4) == str2 + 1); printf("Test 3 passed! (Overlap)\n");
    assert(strcmp(str2, "WorWorld") == 0); printf("Test 4 passed! (after memmove)\n");

    printf("All tests for ft_memmove passed!\n");
}

void test_ft_strlcpy() {
    printf("Testing ft_strlcpy...\n");
    char dest[20];
    const char *src = "Hello, World!";
    size_t len = ft_strlcpy(dest, src, 20);
    assert(len == 13); printf("Test 1 passed! (Copy string)\n");
    assert(strcmp(dest, "Hello, World!") == 0); printf("Test 2 passed! (after strlcpy)\n");

    // Testing with insufficient space
    char dest2[10];
    size_t len2 = ft_strlcpy(dest2, src, sizeof(dest2));
    assert(len2 == 13); printf("Test 3 passed! (Insufficient space)\n");
    assert(strcmp(dest2, "Hello, Wo") == 0); printf("Test 4 passed! (after strlcpy)\n");

    printf("All tests for ft_strlcpy passed!\n");
}

void test_ft_strlcat() {
    printf("Testing ft_strlcat...\n");
    char dest[20] = "Hello, ";
    const char *src = "World!";
    size_t len = ft_strlcat(dest, src, sizeof(dest));
    assert(len == 13); printf("Test 1 passed! (Concatenate string)\n");
    assert(strcmp(dest, "Hello, World!") == 0); printf("Test 2 passed! (after strlcat)\n");

    // Testing with insufficient space
    char dest2[15] = "Hello, ";
    size_t len2 = ft_strlcat(dest2, src, sizeof(dest2));
    assert(len2 == 13); printf("Test 3 passed! (Insufficient space)\n");
    assert(strcmp(dest2, "Hello, World!") == 0); printf("Test 4 passed! (after strlcat)\n");

    printf("All tests for ft_strlcat passed!\n");
}

void test_ft_toupper() {
    printf("Testing ft_toupper...\n");
    assert(ft_toupper('a') == 'A'); printf("Test 1 passed! ('a' to 'A')\n");
    assert(ft_toupper('b') == 'B'); printf("Test 2 passed! ('b' to 'B')\n");
    assert(ft_toupper('A') == 'A'); printf("Test 3 passed! ('A' remains 'A')\n");
    assert(ft_toupper('1') == '1'); printf("Test 4 passed! ('1' remains '1')\n");
    assert(ft_toupper('!') == '!'); printf("Test 5 passed! ('!' remains '!')\n");
    printf("All tests for ft_toupper passed!\n");
}

void test_ft_tolower() {
    printf("Testing ft_tolower...\n");
    assert(ft_tolower('A') == 'a'); printf("Test 1 passed! ('A' to 'a')\n");
    assert(ft_tolower('B') == 'b'); printf("Test 2 passed! ('B' to 'b')\n");
    assert(ft_tolower('a') == 'a'); printf("Test 3 passed! ('a' remains 'a')\n");
    assert(ft_tolower('1') == '1'); printf("Test 4 passed! ('1' remains '1')\n");
    assert(ft_tolower('!') == '!'); printf("Test 5 passed! ('!' remains '!')\n");
    printf("All tests for ft_tolower passed!\n");
}

void test_ft_strchr() {
    printf("Testing ft_strchr...\n");
    const char *str = "Hello, World!";
    assert(ft_strchr(str, 'W') == &str[7]); printf("Test 1 passed! ('W' found)\n");
    assert(ft_strchr(str, 'x') == NULL); printf("Test 2 passed! ('x' not found)\n");
    assert(ft_strchr(str, '\0') == &str[13]); printf("Test 3 passed! (null terminator found)\n");
    printf("All tests for ft_strchr passed!\n");
}

void test_ft_strrchr() {
    printf("Testing ft_strrchr...\n");
    const char *str = "Hello, World!";
    assert(ft_strrchr(str, 'o') == &str[8]); printf("Test 1 passed! (last 'o' found)\n");
    assert(ft_strrchr(str, 'x') == NULL); printf("Test 2 passed! ('x' not found)\n");
    assert(ft_strrchr(str, '\0') == &str[13]); printf("Test 3 passed! (null terminator found)\n");
    printf("All tests for ft_strrchr passed!\n");
}

void test_ft_strncmp() {
    printf("Testing ft_strncmp...\n");
    assert(ft_strncmp("Hello", "Hello", 5) == 0); printf("Test 1 passed! (equal strings)\n");
    assert(ft_strncmp("Hello", "Hello!", 5) == 0); printf("Test 2 passed! (first 5 equal)\n");
    assert(ft_strncmp("Hello", "Hell", 5) != 0); printf("Test 3 passed! (different lengths)\n");
    assert(ft_strncmp("Hello", "Hella", 5) != 0); printf("Test 4 passed! (different characters)\n");
    assert(ft_strncmp("Hello", "Hella", 2) == 0); printf("Test 5 passed! (equal up to 2)\n");
    printf("All tests for ft_strncmp passed!\n");
}

void test_ft_memchr() {
    printf("Testing ft_memchr...\n");
    const char str[] = "Hello, World!";
    assert(ft_memchr(str, 'o', 5) == &str[4]); printf("Test 1 passed! ('o' found)\n");
    assert(ft_memchr(str, 'x', 5) == NULL); printf("Test 2 passed! ('x' not found)\n");
    assert(ft_memchr(str, '\0', 13) == &str[13]); printf("Test 3 passed! (null terminator found)\n");
    printf("All tests for ft_memchr passed!\n");
}

void test_ft_memcmp() {
    printf("Testing ft_memcmp...\n");
    const char str1[] = "Hello";
    const char str2[] = "Hello";
    assert(ft_memcmp(str1, str2, 5) == 0); printf("Test 1 passed! (equal)\n");
    assert(ft_memcmp(str1, "Hellp", 5) != 0); printf("Test 2 passed! (different)\n");
    printf("All tests for ft_memcmp passed!\n");
}

void test_ft_strnstr() {

	// Test case 1: Needle found in the middle of the haystack
    assert(strcmp(ft_strnstr("Hello, World!", "World", 13), "World!") == 0);
    printf("Test 1 passed! (needle found)\n");

    // Test case 2: Needle found at the beginning of the haystack
    assert(strcmp(ft_strnstr("Hello, World!", "Hello", 13), "Hello, World!") == 0);
    printf("Test 2 passed! (needle at beginning)\n");

    // Test case 3: Empty needle (should return haystack)
    assert(strcmp(ft_strnstr("Hello, World!", "", 13), "Hello, World!") == 0);
    printf("Test 3 passed! (empty needle)\n");

    // Test case 4: Needle not found in the haystack
    assert(ft_strnstr("Hello, World!", "Test", 13) == NULL);
    printf("Test 4 passed! (needle not found)\n");

    // Test case 5: Haystack is empty, needle is non-empty
    assert(ft_strnstr("", "a", 1) == NULL);
    printf("Test 5 passed! (empty haystack)\n");

    // Test case 6: Both haystack and needle are empty
    assert(strcmp(ft_strnstr("", "", 1), "") == 0);
    printf("Test 6 passed! (both empty)\n");

    // Test case 7: Needle longer than the haystack
    assert(ft_strnstr("abc", "abcd", 3) == NULL);
    printf("Test 7 passed! (needle longer than haystack)\n");

    // Test case 8: Full match
    assert(strcmp(ft_strnstr("Hello, World!", "Hello, World!", 13), "Hello, World!") == 0);
    printf("Test 8 passed! (full match)\n");

    // Test case 9: Case sensitivity
    assert(ft_strnstr("Hello, World!", "hello", 13) == NULL);
    printf("Test 9 passed! (case sensitivity)\n");
    printf("All tests for ft_strnstr passed!\n");
}

void test_ft_atoi() {
    printf("Testing ft_atoi...\n");
    assert(ft_atoi("42") == 42); printf("Test 1 passed! ('42')\n");
    assert(ft_atoi("   -42") == -42); printf("Test 2 passed! ('   -42')\n");
    assert(ft_atoi("  +42") == 42); printf("Test 3 passed! ('  +42')\n");
    assert(ft_atoi("abc42") == 0); printf("Test 4 passed! ('abc42')\n");
    assert(ft_atoi("") == 0); printf("Test 5 passed! ('')\n");
    assert(ft_atoi("2147483647") == 2147483647); printf("Test 6 passed! ('2147483647')\n");
    assert(ft_atoi("-2147483648") == -2147483648); printf("Test 7 passed! ('-2147483648')\n");
    printf("All tests for ft_atoi passed!\n");
}

int main() {
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_strlen();
    test_ft_memset();
    test_ft_bzero();
    test_ft_memcpy();
        test_ft_memmove();
    test_ft_strlcpy();
    test_ft_strlcat();
    test_ft_toupper();
    test_ft_tolower();
    test_ft_strchr();
    test_ft_strrchr();
    test_ft_strncmp();
    test_ft_memchr();
    test_ft_memcmp();
    test_ft_strnstr();
    test_ft_atoi();

    printf("All tests completed successfully!\n");
    return 0;
}

