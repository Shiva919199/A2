data = {
            "cough":["cold", "flue", "fever", "taste change"],
            "allergy" : ["sneezing", "itching", "rashes", "noseblock", "cough"],
            "anxiety":["dizziness", "tiredness", "dry mouth", "shaking", "sweating"],
            "chicken pox":["rash", "spots", "headache", "dehydration", "itching"],
           }
probableDisease = {}

def greet():
    print("\n---------------------------------\nWelcome to Expert System !\n---------------------------------\n")
    print("Can I get Your sysmptoms :")

def dataBase(query):
    for disease in data:
        # If symptoms are present in values
        if query in data[disease]:
            # add to probable diseases
            if(disease in probableDisease):
              probableDisease[disease] += 1
            else:
              probableDisease[disease] = 1
    # print("Probable : ",probableDisease)


def driverFunction():
    greet()
    inp  = input().lower()
    while(inp != "no"):
        dataBase(inp)
        inp  = input("Any other symptoms ?").lower()
    print("Probable Diseases are :",probableDisease)
    
driverFunction()