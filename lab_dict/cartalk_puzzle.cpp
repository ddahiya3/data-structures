/**
 * @file cartalk_puzzle.cpp
 * Holds the function which solves a CarTalk puzzler.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include <fstream>

#include "cartalk_puzzle.h"

using namespace std;

/**
 * Solves the CarTalk puzzler described here:
 * http://www.cartalk.com/content/wordplay-anyone.
 * @return A vector of (string, string, string) tuples
 * Returns an empty vector if no solutions are found.
 * @param d The PronounceDict to be used to solve the puzzle.
 * @param word_list_fname The filename of the word list to be used.
 */
vector<std::tuple<std::string, std::string, std::string>> cartalk_puzzle(PronounceDict d,
                                    const string& word_list_fname)
{
    vector<std::tuple<std::string, std::string, std::string>> ret;

    ifstream wordsFile(word_list_fname);
    std::string word;
    if (wordsFile.is_open()) {
        while (getline(wordsFile, word)) {
            std::string word1 = word.substr(1);
            std::string temp;
            temp.append(word.begin(), word.begin() + 1);
            std::string word2 = word.substr(2);

            //std::cout<<word<<" "<<word1<<" "<<word2<<" "<<std::endl;
            
            word2.insert(0,temp);

            if (d.homophones(word,word1) && d.homophones(word,word2) && d.homophones(word1,word2)) {
                std::tuple<std::string, std::string, std::string> tempo;
                tempo = make_tuple(word,word1,word2);
                ret.push_back(tempo);
            }
        }
    }


    /* Your code goes here! */
    return ret;
}
