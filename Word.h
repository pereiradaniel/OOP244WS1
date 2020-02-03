#ifndef _WORD_H_
#define _WORD_H_

  namespace sdds {
    const int MAX_WORD_LEN = 21;
    const int MAX_NO_OF_WORDS = 500;
    struct Word {
      char letters[MAX_WORD_LEN];
      int count;
    };

    int searchWords(const Word words[], int num, const char word[]);
    void title();
    void endList();
    void totalWordsStat(int totNoWrds,int totalOverAll, int longestWord );
    void print(const Word* w, bool gotoNextLine);
    void report(const Word words[],int noOfWords, int longestWord);
    void swap(Word* p1, Word* p2);
    void sort(Word words[], int cnt);
    void wordStats(bool logOn);
    void programTitle();
    void addWord(Word words[], int* index, const char newWord[]);
  }
#endif