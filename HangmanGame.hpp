/**
*
* Solution to course project #14
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021 / 2022
*
* @author Monika Mitreva
* @idnumber 62522
* @compiler VC
*
* Hpp file with all the signatures of
* the functions used in this project
*/

#pragma once
#include <windows.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void generateDictionary();
void showGameInterface();
void readUserInput(std::string& option);
void play();
void changeTheWordsLength(const short int& new_word_length);
void changeTheCountOfGivenAttempts(const short int& new_attempts);
void readNewLengthOfTheWords(short int& new_length);
void readTheNewAttemptsCount(short int& new_attempts_count);
void printTheCountOfGuessedWords(const short int number_of_guessed_words);
void showMessageForIncorrectLength();
void showMessageForIncorrectAttempts();
void incorrectUserInput();
void showError();
void exitTheGame();
void cleanScreen();
void waitAndReturnToMenu();

bool isLetterAlreadyEntered(const std::vector<char>& letters, const char& letter);
bool isWordRevealed(const std::vector<bool>& guessed_letters);
bool validateLetter(const char& letter);
bool validateNumber(const short int& number);
