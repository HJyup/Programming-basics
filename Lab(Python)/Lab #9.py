# Delete word which happens in the first sentence
def clear_string(the_first, the_second):
    the_second_list = the_second.split()
    for word in the_second_list:
        word_number = the_first.count(word)
        index = the_first.find(word)
        if index != -1:
            word_sentence = the_first[index:]
            word_sentence_list = word_sentence.split()
            the_first = the_first.replace(word_sentence_list[0], '', word_number)
    the_first = the_first.split()
    the_first = ' '.join(the_first)
    print(the_first)


str1 = input("Enter the first string: ")
str2 = input("Enter the second string: ")
clear_string(str1, str2)
