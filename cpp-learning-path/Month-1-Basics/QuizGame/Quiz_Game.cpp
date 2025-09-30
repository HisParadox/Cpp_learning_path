//#include <webview.h>
#include <iostream>
#include <string>

using namespace std;

// Function to ask a question
bool askQuestion(string question, string options[4], char correctAnswer) {
    char answer;
    cout << question << endl;
    cout << "A. " << options[0] << endl;
    cout << "B. " << options[1] << endl;
    cout << "C. " << options[2] << endl;
    cout << "D. " << options[3] << endl;

    cout << "Your answer: ";
    cin >> answer;

    if (answer == correctAnswer || answer == tolower(correctAnswer)) {
        cout << "✅ Correct!\n" << endl;
        return true;
    } else {
        cout << "❌ Incorrect! The correct answer was " << correctAnswer << ". "
             << options[correctAnswer - 'A'] << "\n" << endl;
        return false;
    }
}

int main() {
    //webview::webview w(true, nullptr);
    //w.set_title("Who Wants to Be a Millionaire");
    //w.set_size(1024, 768, WEBVIEW_HINT_NONE);
    //Loading the html file
    //w.navigate("file:///C:/Users/HP/Documents/Cpp_Learning_Path_Projects/cpp-learning-path/Month-1-Basics/QuizGame/Quiz.html");
    
    //w.run();
    //return 0;
    cout << "Welcome to 'Who Wants to Be a Millionaire'!\n";
    cout << "You can only get 3 wrong before the game ends.\n\n";

    int wrongCount = 0;

    // Question 1
    string q1Options[4] = {"Mumbai", "New Delhi", "Kolkata", "Jaipur"};
    if (!askQuestion("Question 1: What is the capital of India?", q1Options, 'B')) wrongCount++;
    if (wrongCount >= 3) { cout << "Game Over!\n"; return 0; }

    // Question 2
    string q2Options[4] = {"Earth", "Jupiter", "Pluto", "Saturn"};
    if (!askQuestion("Question 2: What is the largest planet in our solar system?", q2Options, 'B')) wrongCount++;
    if (wrongCount >= 3) { cout << "Game Over!\n"; return 0; }

    // Question 3
    string q3Options[4] = {"Edward Newgate", "Monkey D. Luffy", "Trafalgar D. Water Law", "Sanji"};
    if (!askQuestion("Question 3: Who has the Ope Ope no Mi fruit in One Piece?", q3Options, 'C')) wrongCount++;
    if (wrongCount >= 3) { cout << "Game Over!\n"; return 0; }

    //Question 4
    string q4Options[4] = {"204", "206", "500", "255"};
    if (!askQuestion("Question 4: How many Bones are in the human body?", q4Options, 'B')) wrongCount++;
    if (wrongCount >= 3) { cout << "Game Over Simpleton!\n"; return 0; }

    //Question 5
    string q5Options[4] = {"Santa Monica", "St Lucia", "St Elena", "Whoopi"};
    if(!askQuestion("Question 5: What is the only coountry in the world named after a woman?", q5Options, 'B')) wrongCount++;
    if(wrongCount >= 3) { cout << "See you later space cowboy!\n"; return 0; }

    //Question 6
    string q6Options[4] = {"Rocks", "Fuel", "Natural Gases", "Petrification"};
    if(!askQuestion("Question 6: What is Petrology the study of", q6Options, 'A')) wrongCount++;
    if(wrongCount >= 3) { cout << "Hasta Luego\n"; return 0;}

    //Question 7
    string q7Options[4] = {"G", "Ag", "Go", "Au"};
    if(!askQuestion("Question 7: What is the chemical symbol for Gold?", q7Options, 'D')) wrongCount++;
    if(wrongCount >= 3) { cout << "Game Over\n"; return 0;}

    //Question 8
    string q8Options[4] = {"Africa", "Asia", "South America", "Europa"};
    if(!askQuestion("What Continent does Coffee grow naturally?", q8Options, 'A')) wrongCount++;
    if(wrongCount >= 3) { cout << "Sorry Pal\n"; return 0;}

    //Question 9
    string q9Options[4] = {"Emerald", "Ruby", "Gold", "Diamond"};
    if(!askQuestion("What is the hardest natural substance on Earth", q9Options, 'D')) wrongCount++;
    if(wrongCount >= 3) { cout << "Not Right Bruv\n"; return 0;}

    //Question 10
    string q10Options[4] = {"USA", "Canada", "India", "Russia"};
    if(!askQuestion("What country is roughly the size of the sahara dessert", q10Options, 'A')) wrongCount++;
    if(wrongCount >= 3) { cout << "Last Chance, you're done\n"; return 0;}

    //Bomus Round
    string qbOptions[4] = {"South America", "Europe", "Asia", "North America"};
    if(!askQuestion("Bonus Question: What Country is Argentina located in?", qbOptions, 'A')) wrongCount++;
    if(wrongCount >= 3) { cout << "See you later space cowboy\n"; return 0;}

    
    cout << "🎉 Congratulations! You survived the quiz!" << endl;
    return 0;
}




//Implement a GUI for visual stimulation?
//import Theme song for the game
//Add a Webpage interface for the game.
//In the future, add a lifeline system.
//Add a database to store past scores and player info.
