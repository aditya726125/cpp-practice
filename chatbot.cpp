//AI based chatbot using C++
//1. Rule based
#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;
    bool chatIsActive = true;
    
    cout << "=========================================\n";
    cout << "   Welcome to the Basic Crypto Bot!\n";
    cout << "=========================================\n";
    cout << "Bot: I can explain basic crypto terms.\n";
    cout << "Bot: Type 'help' to see what I know, or 'exit' to leave.\n\n";

    while (chatIsActive) {
        cout << "You: ";
        getline(cin, userInput);

        // Rule 1: Bitcoin
        if (userInput == "bitcoin" || userInput == "btc") {
            cout << "Bot: Bitcoin (BTC) is the first decentralized digital currency, created in 2009 by an anonymous person named Satoshi Nakamoto.\n";
        }
        // Rule 2: Ethereum
        else if (userInput == "ethereum" || userInput == "eth") {
            cout << "Bot: Ethereum (ETH) is a blockchain network known for 'smart contracts', which are programs that run automatically when conditions are met.\n";
        }
        // Rule 3: Wallets
        else if (userInput == "wallet" || userInput == "what is a wallet") {
            cout << "Bot: A crypto wallet is a secure digital tool (either software or hardware) used to store, send, and receive your cryptocurrency.\n";
        }
        // Rule 4: Bull Market
        else if (userInput == "bull market") {
            cout << "Bot: A 'bull market' means the prices of cryptocurrencies are generally going up, and investors are feeling optimistic.\n";
        }
        // Rule 5: Bear Market
        else if (userInput == "bear market") {
            cout << "Bot: A 'bear market' means the prices are generally falling, and the market is experiencing a downward trend.\n";
        }
        // Rule 6: Blockchain
        else if (userInput == "blockchain") {
            cout << "Bot: A blockchain is a secure, public digital ledger where all crypto transactions are recorded permanently across many computers.\n";
        }
        // Rule 7: Help Menu
        else if (userInput == "help") {
            cout << "Bot: Try typing one of these exact words: 'bitcoin', 'ethereum', 'wallet', 'blockchain', 'bull market', or 'bear market'.\n";
        }
        // Rule 8: Exit
        else if (userInput == "exit" || userInput == "bye" || userInput == "quit") {
            cout << "Bot: Goodbye! Remember to always do your own research before investing!\n";
            chatIsActive = false; // Stops the loop
        }
        // Fallback for unknown words
        else {
            cout << "Bot: I don't know that crypto term yet. Type 'help' to see what I can explain.\n";
        }
        
        cout << "------\n";
    }

    return 0;
}
//2. NLP concept
//3. LLM based
//Install Ollama