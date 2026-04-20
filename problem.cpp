//Create a code editor by using the concept of inheritance.The code editor should have following features: Undo stack , redostack , loggerstack (logoperation()) and editorstack.
#include <iostream>
using namespace std;
class Stack{
    protected:
    string arr[100];
    int top;
    public:
    int stack(){
        top = -1;
    }
    void push(string x){
        if(top>=99){
            cout<<"Overflow";
            return;
        }
        arr[++top]=x;
    }
    string pop(){
        if(top==-1){
            return string();
        }
       return arr[top--];
    }
    bool isEmpty(){
        return top == -1;
    }
    void display(){
        for(int i = top;i>=0;i--){
            cout<<arr[i]<<endl;
    }
}
};
class UndoStack : public Stack {
public:
    void saveUndo(string text) {
        push(text);
    }
    string getUndo() {
        return pop();
    }
};

class RedoStack : public Stack {
public:
    void saveRedo(string text) {
        push(text);
    }
    string getRedo() {
        return pop();
    }
};

class LoggerStack : public Stack {
public:
    void logoperation(string action) {
        push(action); 
    }
    
    void printLogs() {
        cout << "\n--- Operation Logs ---\n";
        display(); 
        cout << "----------------------\n";
    }
};

class EditorStack : public UndoStack, public RedoStack, public LoggerStack {
private:
    string currentText;

public:
    EditorStack() {
        currentText = "";
    }

    void write(string text) {
        UndoStack::saveUndo(currentText); 
        currentText += text;
        RedoStack::top = -1; 
        LoggerStack::logoperation("WRITE: added text");
    }

    void undo() {
        if (UndoStack::isEmpty()) {
            cout << "Nothing to undo.\n";
            return;
        }
        RedoStack::saveRedo(currentText);
        currentText = UndoStack::getUndo();
        LoggerStack::logoperation("UNDO executed");
    }

    void redo() {
        if (RedoStack::isEmpty()) {
            cout << "Nothing to redo.\n";
            return;
        }
        UndoStack::saveUndo(currentText);
        currentText = RedoStack::getRedo();
        LoggerStack::logoperation("REDO executed");
    }

    void displayCode() {
        cout << "Current Text:\n" << currentText << "\n";
    }
};