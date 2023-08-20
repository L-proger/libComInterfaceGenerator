
// Generated from Grammar/Cidl.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  CidlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, MINUS = 13, PLUS = 14, 
    COMMENT = 15, LINE_COMMENT = 16, INTEGER_LITERAL = 17, HEX_LITERAL = 18, 
    ID_INTEGER_PRIMITIVE = 19, ID_UINT8 = 20, ID_UINT16 = 21, ID_UINT32 = 22, 
    ID_UINT64 = 23, ID_INT8 = 24, ID_INT16 = 25, ID_INT32 = 26, ID_INT64 = 27, 
    ID_INTERFACE = 28, ID_STRUCT = 29, ID_ENUM = 30, ID_IMPORT = 31, LEFT_SQUARE_BRACKET = 32, 
    FLOAT = 33, FLOAT_SUFFIX = 34, STRING_LITERAL = 35, RIGHT_SQUARE_BRACKET = 36, 
    ID = 37, WS = 38, INTEGER = 39, LEFT_BRACKET = 40, RIGHT_BRACKET = 41, 
    LCURLY = 42, RCURLY = 43, SEMICOLON = 44, COLON = 45
  };

  explicit CidlLexer(antlr4::CharStream *input);

  ~CidlLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

