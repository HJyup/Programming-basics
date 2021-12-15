
# Delete word which happens in the first sentence
def clean_string(the_first, the_second):
    a = the_first.split()
    b = the_second.split()
    for word1 in b:
        for word2 in a:
            if word1 == word2:
                the_first = the_first.replace(word1, "")
    the_first = the_first.split()
    the_first = ' '.join(the_first)
    print(the_first)


# Main
first_str = input("Enter the first string: ")
second_str = input("Enter the second string: ")
clean_string(first_str, second_str)
