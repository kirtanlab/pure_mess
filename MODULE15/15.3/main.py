#Program 1
print("\n**\n ** \nProgram No: 0 : Program to find sum of square of first n natural numbers\n **\n**")

def squaresum(n) :
	sm = 0
	for i in range(1, n+1) :
		sm = sm + (i * i)
	
	return sm

n = int(input("\nEnter the Input: "))
print(squaresum(n))

#Program 2
print("\n**\n ** \nProgram No: 1 : program to split a string and join it using different delimiter\n **\n**\n")


def split_string(string):
    
    list_string = string.split(' ')
    print("\nSplit string: ")
    return list_string

def join_string(list_string):
    print("\nconcatenated String: ")
    string = '_'.join(list_string)
    return string


if __name__ == '__main__':
	string = 'prajapati kirtan 0804'
	print("Given String is: " + string)
	list_string = split_string(string)
	print(list_string)

	new_string = join_string(list_string)
	print(new_string)


#Program 3
print("\n**\n ** \nProgram No: 2 : demonstrate working of Replace duplicate Occurrence in String Using split() + enumerate() + loop\n **\n**")


test_str = 'We resolve to be brave. We resolve to be good. We resolve to uphold the law according to our oath. '


print("\nThe original string is : " + str(test_str))


repl_dict = {'resolve' : 'never resolve', 'to' : 'new_to' }


test_list = test_str.split(' ')
res = set()
for idx, ele in enumerate(test_list):
	if ele in repl_dict:
		if ele in res:
			test_list[idx] = repl_dict[ele]
		else:
			res.add(ele)
res = ' '.join(test_list)

print("\nThe string after replacing : " + str(res))


#Program 3
print("\n**\n ** \ndemonstrate printing pattern of alphabets\n **\n**")

def contalpha(n):
    num = 65
    for i in range(0, n):
	    for j in range(0, i+1):
		    ch = chr(num)
		    print(ch, end=" ")
		    num = num +1
	    print("\r")

n = 5
contalpha(n)
