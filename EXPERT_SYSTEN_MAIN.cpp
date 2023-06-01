/*#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a struct to hold information about diseases
struct Disease {
    string name;
    vector<string> symptoms;
};

// Define a function to perform a search for possible diseases based on symptoms
void searchDiseases(vector<Disease>& diseases, vector<string>& inputSymptoms) {
    cout << "Possible diseases based on your symptoms:" << endl;
    for (auto& disease : diseases) {
        bool foundAllSymptoms = true;
        for (auto& symptom : inputSymptoms) {
            bool foundSymptom = false;
            for (auto& diseaseSymptom : disease.symptoms) {
                if (diseaseSymptom == symptom) {
                    foundSymptom = true;
                    break;
                }
            }
            if (!foundSymptom) {
                foundAllSymptoms = false;
                break;
            }
        }
        if (foundAllSymptoms) {
            cout << "- " << disease.name << endl;
        }
    }
}

int main() {
    // Define some example diseases with their symptoms
    Disease flu = {"Flu", {"fever", "cough", "sore throat", "body aches"}};
    Disease cold = {"Cold", {"sneezing", "runny nose", "cough", "congestion"}};
    Disease pneumonia = {"Pneumonia", {"fever", "shortness of breath", "chest pain"}};
    Disease asthma = {"Asthma", {"wheezing", "coughing", "shortness of breath", "chest tightness"}};
    vector<Disease> diseases = {flu, cold, pneumonia, asthma};
for (int i = 0; i < 5; i++)
{
    
    // Ask user for input symptoms
    cout << "Please enter your symptoms (separated by spaces): ";
    string input;
    getline(cin, input);

    // Parse input symptoms into a vector
    vector<string> inputSymptoms;
    size_t pos = 0;
    string token;
    while ((pos = input.find(' ')) != string::npos) {
        token = input.substr(0, pos);
        inputSymptoms.push_back(token);
        input.erase(0, pos + 1);
    }
    inputSymptoms.push_back(input);

    // Perform search for possible diseases based on input symptoms
    searchDiseases(diseases, inputSymptoms);
}
    return 0;
}*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a struct to hold information about diseases
struct Disease {
    string name;
    vector<string> symptoms;
};

// Define a function to perform a search for possible diseases based on symptoms
void searchDiseases(vector<Disease>& diseases, vector<string>& inputSymptoms) {
    cout << "Possible diseases based on your symptoms:" << endl;
    for (int i = 0; i < diseases.size(); i++) {
        bool foundAllSymptoms = true;
        for (int j = 0; j < inputSymptoms.size(); j++) {
            bool foundSymptom = false;
            for (int k = 0; k < diseases[i].symptoms.size(); k++) {
                if (diseases[i].symptoms[k] == inputSymptoms[j]) {
                    foundSymptom = true;
                    break;
                }
            }
            if (!foundSymptom) {
                foundAllSymptoms = false;
                break;
            }
        }
        if (foundAllSymptoms) {
            cout << "- " << diseases[i].name << endl;
        }
    }
}

int main() {
    // Define some example diseases with their symptoms
    Disease flu = {"Flu", {"fever", "cough", "sorethroat", "bodyaches"}};
    Disease cold = {"Cold", {"sneezing", "runny nose", "cough", "congestion"}};
    Disease pneumonia = {"Pneumonia", {"fever", "shortness of breath", "chest pain"}};
    Disease asthma = {"Asthma", {"wheezing", "coughing", "shortness of breath", "chest tightness"}};
    vector<Disease> diseases = {flu, cold, pneumonia, asthma};
    for (int i = 0; i < 5; i++) {

        // Ask user for input symptoms
        cout << "Please enter your symptoms (separated by spaces): ";
        string input;
        getline(cin, input);

        // Parse input symptoms into a vector
        vector<string> inputSymptoms;
        size_t pos = 0;
        string token;
        while ((pos = input.find(' ')) != string::npos) {
            token = input.substr(0, pos);
            inputSymptoms.push_back(token);
            input.erase(0, pos + 1);
        }
        inputSymptoms.push_back(input);

        // Perform search for possible diseases based on input symptoms
        searchDiseases(diseases, inputSymptoms);
    }
    return 0;
}
