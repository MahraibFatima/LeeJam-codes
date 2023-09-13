import pymongo
import sys
#import pandas
client = pymongo.MongoClient("mongodb+srv://mahraibfatima:17may2005@cluster-fist.tcexq0t.mongodb.net/")
dataBase = client["Jami"]
collection = dataBase['Products']

a = {
    "BachelourDegree" : 'BSCS',
    "Semester" : "2nd",
    "MajorSubject" : "OOP" 
}
b = {
    "BachelourDegree" : 'BSCS',
    "Semester" : "3rd",
    "MajorSubject" : "DSA" 
}
c = {
    "BachelourDegree" : 'BSCS',
    "Semester" : "4th",
    "MajorSubject" : "Web" 
}
d = {
    "BachelourDegree" : 'BSCS',
    "Semester" : "6th",
    "MajorSubject" : "AI"
}

# save data on mongo alias the many time. this statement run add field in database
#rec = collection.insert_many([a, b, c, d]) 

# print(sys.path, end = "\n")
allRecord =  collection.find({"Semester" : "6th"})
# print(allRecord)          #Returns dic-id

# insert collection
result = collection.insert_one(d)
for record in allRecord:
    print("ID.#:" , record["_id"])
    print("BachelourDegree:" , record["BachelourDegree"])
    print("Semester:" , record["Semester"])
    print("MajorSubject:" , record["MajorSubject"])

#for idx, record  in enumerate(allRecord):
#    print(f"{idx} : {record}" )
#print(client.list_database_names())


# delete collection 
#result = collection.delete_one({"Semester" : "6th"})

# insert data in the last
#result = collection.insert_one(d)

#Iterator :
#       an object that used to implement two functions  ->__iter__()    ->__next__()
#       __iter__() return an item itself
#       __next__()  return next item

class MyIterator:
    def __init__(self, limit):
        self.limit = limit
        self.current = 0
    
    def __iter__(self):
        return self
    
    def __next__(self):
        if self.current < self.limit:
            result = self.current
            self.current += 1
            return result
        else:
            raise StopIteration

my_iterator = MyIterator(5)
for item in my_iterator:
    print(item)         # print that values contains by object 
print(my_iterator)      # for object adress

#Generator:
#       a type of user-defined iterator with one-two yield statements

def Generator(limit):
    current = 0
    while current < limit:
        yield current
        current += 1
nums = Generator(5)
for item in nums:
    print(item)
