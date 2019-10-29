#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
struct LettersCount{
    char capital[26];
    char lower[26];
    int countcap[26];
    int countlow[26];
    double percentcap[26];
    double percentlow[26];
};
void openFile(fstream& filein, fstream& fileout);
void count(fstream& filein,LettersCount &letterCount);
void printResult(fstream& fileout,LettersCount &letterCount);
int main() {
    // Write your main here
    struct LettersCount letterCount;
    char cap = 'A';
    char low = 'a';
    for (int i =0; i<26;i++){
        letterCount.capital[i] = cap;
        letterCount.lower[i] = low;
        letterCount.countcap[i] = 0;
        letterCount.countlow[i] = 0;       
        cap ++;
        low ++;
    }
    fstream filein;
    fstream fileout;
    openFile(filein,fileout);
    count (filein,letterCount);
    fileout <<'D'<<"        "<<0<<"        "<<fixed<<setprecision(2)<<0.00<<"%\n";
    printResult(fileout,letterCount);
    return 0;
}
void openFile(fstream& filein, fstream& fileout){
    string fName;
    cout << "Enter file Name:";
    getline(cin,fName);
    filein.open(fName);
    while (!filein.is_open()){
        cout<<"The input file does not exist."<<endl;
        string fName;
        cout << "Enter file Name:";
        getline(cin,fName);
        filein.open(fName);
    } 
    cout << "Enter file Name for output:";
    getline(cin,fName);
    fileout.open(fName,fstream::out);
    
}
void count(fstream& filein,LettersCount &letterCount){
    string line;     
    getline(filein,line);
    while (filein){
        int j = line.length();
        while (j!=-1){
                char c = line[j];
                for (int i=0;i<26;i++){
                if (c == letterCount.capital[i])letterCount.countcap[i]++;
                if (c == letterCount.lower[i])letterCount.countlow[i] ++;}
            
                j--;
            }    
            getline(filein,line);
        }
    int totcap= 0;
    int totlow = 0;
    for (int i =0;i<26;i++){
        totcap += letterCount.countcap[i];
        totlow += letterCount.countlow[i];
    }
    for (int i=0;i<26;i++){
        double tot = totcap+totlow;

        letterCount.percentcap[i] = (letterCount.countcap[i]/tot)*100;
        letterCount.percentlow[i] = (letterCount.countlow[i]/tot)*100;
       
    }
}
void printResult(fstream& fileout,LettersCount &letterCount){
    for (int i =0;i<26;i++){
        fileout <<setw(2)<<letterCount.capital[i]<<setw(4)<< letterCount.countcap[i]<<fixed<<setprecision(2)<<setw(5)<<letterCount.percentcap[i]<<"%\n";
        fileout <<setw(2)<< letterCount.lower[i] <<setw(4)<< letterCount.countlow[i]<<setw(5)<<letterCount.percentlow[i]<<"%\n";
        
    }
    fileout<<endl;
}
