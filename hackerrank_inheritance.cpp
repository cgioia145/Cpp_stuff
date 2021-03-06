#include <iostream>
#include <vector>

using namespace std;

//Provided class Person
class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

//I need to write inherited class Student
class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
  		// Write your constructor
        Student (string, string, int, int); 
    
        Student(string firstName, string lastName, int id, vector<int> scores) :
        Person(firstName,lastName,id),
        testScores (scores) {}
    
  		// Write char calculate()
        char calculate(){
                unsigned int num = testScores.size();

                double sum = 0;
            
                for (unsigned int i=0; i < num; i++){
                    sum += testScores[i];
                }

                double mean = sum/num;  
                    
                    if (mean < 40) 
                        return 'T';
                    else if (mean < 55)
                        return 'D'; 
                    else if (mean < 70)
                        return 'P';
                    else if (mean < 80)
                        return 'A';
                    else if (mean < 90)
                        return 'E';
                    else
                        return 'O';      
        }
};

//Provided main function
int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
