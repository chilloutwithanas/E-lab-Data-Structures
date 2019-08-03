fname = input()
handle = open(fname)
counts = dict()
for line in handle:
    words = line.split()
    for i in range(0,len(words)-1):
        if words[i] = 'From':
            counts[words[i+1]] = counts.get(words[i+1],0)+1
bigWord = None
bigcount = None
for word,count in counts.items():
    if bigcount is None or count > bigcount:
        bigWord = word
        bigcount= count
print(word,count)
