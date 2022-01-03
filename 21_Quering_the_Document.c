/*
A document is represented as a collection paragraphs, a paragraph is represented as a collection of sentences, a sentence is represented as a collection of words and a word is represented as a collection of lower-case ([a-z]) and upper-case ([A-Z]) English characters.

You will convert a raw text document into its component paragraphs, sentences and words. To test your results, queries will ask you to return a specific paragraph, sentence or word as described below.

Alicia is studying the C programming language at the University of Dunkirk and she represents the words, sentences, paragraphs, and documents using pointers:

A word is described by char*.
A sentence is described by char**. The words in the sentence are separated by one space (" "). The last word does not end with a space(" ").
A paragraph is described by char***. The sentences in the paragraph are separated by one period (".").
A document is described by char****. The paragraphs in the document are separated by one newline("\n"). The last paragraph does not end with a newline.

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

char **splitFunc(char *text, char element)  //Takes the text and inserts an element in place. Later picked up by the get_document() function
{
    int n=1;
    char **parts = malloc(n *sizeof(char *));
    char *part = strtok(text, &element);
    *parts = part;
    while(part != NULL){
        n++;
        parts = realloc(parts, n*sizeof(char*));
        part = strtok(NULL, &element);
        parts[n-1] = part;
    }
    return parts;
}

char *kth_word_in_mth_sentence_of_nth_paragraph(char ****document, int k, int m, int n) //Return k-th word of m-th string of n-th paragraph
{
    return document[n-1][m-1][k-1];
}

char **kth_sentence_in_mth_paragraph(char ****document, int k, int m)   //Return k-th sentence of m-th paragraph
{
    return document[m-1][k-1];
}

char ***kth_paragraph(char ****document, int k) //Return k-th paragraph
{
    return document[k-1];
}

char ****get_document(char* text)   //This returns the entire document
{
    int paragraphCount=0, sentenceCount=0, i=0, j=0;
    char** paragraphs = splitFunc(text, '\n');
    while(paragraphs[paragraphCount] != NULL){
        paragraphCount++;
    }
    char ****document = malloc((paragraphCount+1)*sizeof(char ***));
    document[paragraphCount] = NULL;
    while(paragraphs[i]!=NULL){
        char **sentences = splitFunc(paragraphs[i], '.');
        while(sentences[sentenceCount]!=NULL){
            sentenceCount++;
        }
        document[i] = malloc((sentenceCount+1)*sizeof(char **));
        document[i][sentenceCount] = NULL;
        j = 0;
        while(sentences[j]!=NULL){
            document[i][j]=splitFunc(sentences[j], ' ');
            j++;
        }
        i++;
    }
    return document;
}

char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char* word) {
    printf("%s", word);
}

void print_sentence(char** sentence) {
    int word_count;
    scanf("%d", &word_count);
    for(int i = 0; i < word_count; i++){
        printf("%s", sentence[i]);
        if( i != word_count - 1)
            printf(" ");
    }
} 

void print_paragraph(char*** paragraph) {
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main() 
{
    char* text = get_input_text();
    char**** document = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        }

        else if (type == 2){
            int k, m;
            scanf("%d %d", &k, &m);
            char** sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        }

        else{
            int k;
            scanf("%d", &k);
            char*** paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    }     
}