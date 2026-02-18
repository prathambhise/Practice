#include <iostream>

class Words{

    private:
        std::string GuessWord;
        char Showcase[20];
        char Wordcase[20];
        int GuessLength;
        char GuessLetter;
        char WrongGuess[26];
        int count = 0;
        int Life = 5;

    public:
        Words(std::string PWord){
            GuessWord = PWord;
            GuessLength = GuessWord.length();
            for (int i = 0; i < GuessLength; i++){
                Showcase[i] = '_';
                Wordcase[i] = GuessWord[i];
            }
        }
        void GiveAway(){
            std::cout << GuessWord << " " << GuessLength << std::endl;
        }
        void PlayCase(){
            for (int i = 0; i < GuessLength; i++)
                std::cout << Showcase[i] << " " ;
            std::cout << std::endl;
        }
        void MakeGuess() {
            bool flag = 1;
            std::cout << "Enter a letter: " ;
            std::cin >> GuessLetter;
            for (int i = 0; i < GuessLength; i++) {
                if (Wordcase[i] == GuessLetter){
                    Showcase[i] = Wordcase[i];
                    flag = 0;
                }
            }
            if (flag) {
                WrongGuess[count] = GuessLetter;
                Life--;
                count++;
                std::cout << "You have " << Life << " tries left!" << std::endl;
                std::cout << "Used Letters: " ;
                for (int i = 0; i < count; i++)
                    std::cout << WrongGuess[i] << " " ;
                std::cout << std::endl;
            }

        }
        bool RunCheck(){
            
            for (int i = 0; i < GuessLength; i++) {
                if (Wordcase[i] != Showcase[i]) {
                    return 0;
                }
            }
            return 1;
        }
        void StartGame() {
            GiveAway();
            while (1) {
                PlayCase();
                MakeGuess();
                if (RunCheck()) {
                    std::cout << "You Win!!!" << std::endl;
                    break;
                }
                if (Life == 0) {
                    std::cout << "You lost..." << std::endl;                
                    break;
                }
            }
        }

};

int main() {
    Words W1("Saoirse");
    W1.StartGame();
}
