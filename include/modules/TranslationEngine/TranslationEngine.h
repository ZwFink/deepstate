// Program Header Information ///////////////////////////
/**
 * @file TranslationEngine.h
 *
 * @team GenTest ( Team 22 )
 *
 * @brief Header file for the TranslationEngine system
 *
 * @details Contains NonTerminals and function definitions for the TranslationEngine
 *
 * @version 1.00
 *          Joshua Johnson (11/16/19)
 *          Initial development of the TranslationEngine
 */


#ifndef GENTEST_TRANSLATIONENGINE_H
#define GENTEST_TRANSLATIONENGINE_H


typedef enum NonTerminals
{
    FUNC,                     // Basic non-terminals.
    EXP,
    ADD,
    SUB,
    MUL,
    DIV,
    EQUALS_TO,
    EQUAL,
    GT,
    LT,
    ST_PARETHESIS,
    END_PARETHESIS,
    CONDITIONAL,
    CONDITIONAL_BRANCH,
    INT,                        // Type Non-Terminals
    LONG,
    SHORT,
    DOUBLE,
    FLOAT,
    UINT8,
    UINT16,
    UINT32,
    UINT64,
    USIGNED_INT,
    UNSIGNED_LONG,
    UNSIGNED_SHORT,
    X_INT,                      // Symbloic Type Non-Terminals.
    X_LONG,
    X_SHORT,
    X_DOUBLE,
    X_FLOAT,
    X_UINT8,
    X_UINT16,
    X_UINT32,
    X_UINT64,
    X_USIGNED_INT,
    X_UNSIGNED_LONG,
    X_UNSIGNED_SHORT,
    LEFT_SHIFT,                 // Shift Operators >>/<<
    RIGHT_SHIFT,
    ASSERT_GT,                  // Assertion operators. 
    ASSERT_GE,
    ASSERT_LT,
    ASSERT_LE,
    ASSERT_NE,
    ASSERT_EQ,
    CHECK_EQ,                   // Check operators
    CHECK_NE,
    CHECK_LT,
    CHECK_LE,
    CHECK_GT,
    CHECK_GE,
    ASSUME_EQ,                  // Assume operators.
    ASSUME_NE,
    ASSUME_LT,
    ASSUME_LE,
    ASSUME_GT,
    ASSUME_GE,
    NO_TRANSLATE

} NTerminal;


void runTranslator( char * harnessFilePath );

#endif //GENTEST_TRANSLATIONENGINE_H