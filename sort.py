# for x in range(10):
#     for y in range(5):
#         print(y)


array=[1,3,6,2,8,0]
for i in range(len(array)):
       for j in range(i+1,len(array)):
              if(array[i] > array[j]):
                temp=array[i]
                array[i]=array[j]
                array[j]=temp
print(array)