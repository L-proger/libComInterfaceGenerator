
// Generated from Grammar/Cidl.g4 by ANTLR 4.11.1


#include "CidlListener.h"

#include "CidlParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CidlParserStaticData final {
  CidlParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CidlParserStaticData(const CidlParserStaticData&) = delete;
  CidlParserStaticData(CidlParserStaticData&&) = delete;
  CidlParserStaticData& operator=(const CidlParserStaticData&) = delete;
  CidlParserStaticData& operator=(CidlParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cidlParserOnceFlag;
CidlParserStaticData *cidlParserStaticData = nullptr;

void cidlParserInitialize() {
  assert(cidlParserStaticData == nullptr);
  auto staticData = std::make_unique<CidlParserStaticData>(
    std::vector<std::string>{
      "module", "attribute", "attribute_list", "interfaceDefinition", "structField", 
      "structDefinition", "enumDefinition", "local_type", "imported_type_module", 
      "imported_type_name", "imported_type", "local_or_imported_type", "reference_type_name", 
      "array_type", "method_name", "expression", "unary_expression", "argument", 
      "argument_list", "method_parameter", "method_parameter_list", "method_return_type", 
      "method", "enumField", "interfaceInheritanceList", "numeric_literal", 
      "enum_field_value", "primitive", "integer_primitive", "float_literal"
    },
    std::vector<std::string>{
      "", "','", "'.'", "'&'", "'[]'", "'='", "'double'", "'float'", "'void'", 
      "'IUnknown'", "'bool'", "'string'", "'Guid'", "'-'", "'+'", "", "", 
      "", "", "", "'uint8'", "'uint16'", "'uint32'", "'uint64'", "'int8'", 
      "'int16'", "'int32'", "'int64'", "'interface'", "'struct'", "'enum'", 
      "'import'", "'['", "", "", "", "']'", "", "", "", "'('", "')'", "'{'", 
      "'}'", "';'", "':'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "MINUS", "PLUS", 
      "COMMENT", "LINE_COMMENT", "INTEGER_LITERAL", "HEX_LITERAL", "ID_INTEGER_PRIMITIVE", 
      "ID_UINT8", "ID_UINT16", "ID_UINT32", "ID_UINT64", "ID_INT8", "ID_INT16", 
      "ID_INT32", "ID_INT64", "ID_INTERFACE", "ID_STRUCT", "ID_ENUM", "ID_IMPORT", 
      "LEFT_SQUARE_BRACKET", "FLOAT", "FLOAT_SUFFIX", "STRING_LITERAL", 
      "RIGHT_SQUARE_BRACKET", "ID", "WS", "INTEGER", "LEFT_BRACKET", "RIGHT_BRACKET", 
      "LCURLY", "RCURLY", "SEMICOLON", "COLON"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,45,252,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,1,0,1,0,1,0,1,0,5,0,65,8,0,10,0,12,0,68,9,0,1,0,3,0,71,8,
  	0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,79,8,1,1,1,1,1,1,2,1,2,5,2,85,8,2,10,2,
  	12,2,88,9,2,1,3,1,3,1,3,1,3,3,3,94,8,3,1,3,1,3,4,3,98,8,3,11,3,12,3,99,
  	1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,4,5,112,8,5,11,5,12,5,113,1,5,
  	1,5,1,6,1,6,1,6,1,6,3,6,122,8,6,1,6,1,6,1,6,1,6,5,6,128,8,6,10,6,12,6,
  	131,9,6,1,6,1,6,1,7,1,7,3,7,137,8,7,1,8,1,8,4,8,141,8,8,11,8,12,8,142,
  	1,9,1,9,1,10,1,10,1,10,1,11,1,11,3,11,152,8,11,1,12,1,12,1,12,1,13,1,
  	13,1,13,1,14,1,14,1,15,1,15,3,15,164,8,15,1,16,1,16,1,16,1,16,1,16,3,
  	16,171,8,16,1,17,1,17,3,17,175,8,17,1,18,1,18,1,18,5,18,180,8,18,10,18,
  	12,18,183,9,18,1,19,3,19,186,8,19,1,19,1,19,1,19,1,19,3,19,192,8,19,1,
  	19,1,19,1,19,1,19,3,19,198,8,19,1,19,1,19,1,19,3,19,203,8,19,1,20,1,20,
  	1,20,5,20,208,8,20,10,20,12,20,211,9,20,1,21,1,21,3,21,215,8,21,1,22,
  	1,22,1,22,1,22,3,22,221,8,22,1,22,1,22,1,22,1,23,1,23,1,23,3,23,229,8,
  	23,1,24,1,24,1,24,1,25,1,25,1,25,3,25,237,8,25,1,26,3,26,240,8,26,1,26,
  	1,26,1,27,1,27,1,28,1,28,1,29,1,29,3,29,250,8,29,1,29,0,0,30,0,2,4,6,
  	8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,
  	56,58,0,2,1,0,17,18,2,0,6,12,19,19,253,0,70,1,0,0,0,2,72,1,0,0,0,4,82,
  	1,0,0,0,6,89,1,0,0,0,8,103,1,0,0,0,10,107,1,0,0,0,12,117,1,0,0,0,14,136,
  	1,0,0,0,16,140,1,0,0,0,18,144,1,0,0,0,20,146,1,0,0,0,22,151,1,0,0,0,24,
  	153,1,0,0,0,26,156,1,0,0,0,28,159,1,0,0,0,30,163,1,0,0,0,32,170,1,0,0,
  	0,34,174,1,0,0,0,36,176,1,0,0,0,38,202,1,0,0,0,40,204,1,0,0,0,42,214,
  	1,0,0,0,44,216,1,0,0,0,46,225,1,0,0,0,48,230,1,0,0,0,50,236,1,0,0,0,52,
  	239,1,0,0,0,54,243,1,0,0,0,56,245,1,0,0,0,58,247,1,0,0,0,60,71,1,0,0,
  	0,61,65,3,6,3,0,62,65,3,10,5,0,63,65,3,12,6,0,64,61,1,0,0,0,64,62,1,0,
  	0,0,64,63,1,0,0,0,65,68,1,0,0,0,66,64,1,0,0,0,66,67,1,0,0,0,67,69,1,0,
  	0,0,68,66,1,0,0,0,69,71,5,0,0,1,70,60,1,0,0,0,70,66,1,0,0,0,71,1,1,0,
  	0,0,72,73,5,32,0,0,73,78,3,14,7,0,74,75,5,40,0,0,75,76,3,36,18,0,76,77,
  	5,41,0,0,77,79,1,0,0,0,78,74,1,0,0,0,78,79,1,0,0,0,79,80,1,0,0,0,80,81,
  	5,36,0,0,81,3,1,0,0,0,82,86,3,2,1,0,83,85,3,2,1,0,84,83,1,0,0,0,85,88,
  	1,0,0,0,86,84,1,0,0,0,86,87,1,0,0,0,87,5,1,0,0,0,88,86,1,0,0,0,89,90,
  	3,4,2,0,90,91,5,28,0,0,91,93,3,14,7,0,92,94,3,48,24,0,93,92,1,0,0,0,93,
  	94,1,0,0,0,94,95,1,0,0,0,95,97,5,42,0,0,96,98,3,44,22,0,97,96,1,0,0,0,
  	98,99,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,101,1,0,0,0,101,102,5,
  	43,0,0,102,7,1,0,0,0,103,104,3,22,11,0,104,105,3,14,7,0,105,106,5,44,
  	0,0,106,9,1,0,0,0,107,108,5,29,0,0,108,109,3,14,7,0,109,111,5,42,0,0,
  	110,112,3,8,4,0,111,110,1,0,0,0,112,113,1,0,0,0,113,111,1,0,0,0,113,114,
  	1,0,0,0,114,115,1,0,0,0,115,116,5,43,0,0,116,11,1,0,0,0,117,118,5,30,
  	0,0,118,121,3,14,7,0,119,120,5,45,0,0,120,122,3,56,28,0,121,119,1,0,0,
  	0,121,122,1,0,0,0,122,123,1,0,0,0,123,124,5,42,0,0,124,129,3,46,23,0,
  	125,126,5,1,0,0,126,128,3,46,23,0,127,125,1,0,0,0,128,131,1,0,0,0,129,
  	127,1,0,0,0,129,130,1,0,0,0,130,132,1,0,0,0,131,129,1,0,0,0,132,133,5,
  	43,0,0,133,13,1,0,0,0,134,137,3,54,27,0,135,137,5,37,0,0,136,134,1,0,
  	0,0,136,135,1,0,0,0,137,15,1,0,0,0,138,139,5,37,0,0,139,141,5,2,0,0,140,
  	138,1,0,0,0,141,142,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,0,143,17,1,
  	0,0,0,144,145,5,37,0,0,145,19,1,0,0,0,146,147,3,16,8,0,147,148,3,18,9,
  	0,148,21,1,0,0,0,149,152,3,14,7,0,150,152,3,20,10,0,151,149,1,0,0,0,151,
  	150,1,0,0,0,152,23,1,0,0,0,153,154,3,22,11,0,154,155,5,3,0,0,155,25,1,
  	0,0,0,156,157,3,22,11,0,157,158,5,4,0,0,158,27,1,0,0,0,159,160,3,14,7,
  	0,160,29,1,0,0,0,161,164,5,35,0,0,162,164,3,50,25,0,163,161,1,0,0,0,163,
  	162,1,0,0,0,164,31,1,0,0,0,165,171,3,30,15,0,166,167,5,13,0,0,167,171,
  	3,32,16,0,168,169,5,14,0,0,169,171,3,32,16,0,170,165,1,0,0,0,170,166,
  	1,0,0,0,170,168,1,0,0,0,171,33,1,0,0,0,172,175,3,30,15,0,173,175,3,32,
  	16,0,174,172,1,0,0,0,174,173,1,0,0,0,175,35,1,0,0,0,176,181,3,34,17,0,
  	177,178,5,1,0,0,178,180,3,34,17,0,179,177,1,0,0,0,180,183,1,0,0,0,181,
  	179,1,0,0,0,181,182,1,0,0,0,182,37,1,0,0,0,183,181,1,0,0,0,184,186,3,
  	4,2,0,185,184,1,0,0,0,185,186,1,0,0,0,186,187,1,0,0,0,187,188,3,22,11,
  	0,188,189,3,14,7,0,189,203,1,0,0,0,190,192,3,4,2,0,191,190,1,0,0,0,191,
  	192,1,0,0,0,192,193,1,0,0,0,193,194,3,24,12,0,194,195,3,14,7,0,195,203,
  	1,0,0,0,196,198,3,4,2,0,197,196,1,0,0,0,197,198,1,0,0,0,198,199,1,0,0,
  	0,199,200,3,26,13,0,200,201,3,14,7,0,201,203,1,0,0,0,202,185,1,0,0,0,
  	202,191,1,0,0,0,202,197,1,0,0,0,203,39,1,0,0,0,204,209,3,38,19,0,205,
  	206,5,1,0,0,206,208,3,38,19,0,207,205,1,0,0,0,208,211,1,0,0,0,209,207,
  	1,0,0,0,209,210,1,0,0,0,210,41,1,0,0,0,211,209,1,0,0,0,212,215,3,26,13,
  	0,213,215,3,22,11,0,214,212,1,0,0,0,214,213,1,0,0,0,215,43,1,0,0,0,216,
  	217,3,42,21,0,217,218,3,28,14,0,218,220,5,40,0,0,219,221,3,40,20,0,220,
  	219,1,0,0,0,220,221,1,0,0,0,221,222,1,0,0,0,222,223,5,41,0,0,223,224,
  	5,44,0,0,224,45,1,0,0,0,225,228,3,14,7,0,226,227,5,5,0,0,227,229,3,52,
  	26,0,228,226,1,0,0,0,228,229,1,0,0,0,229,47,1,0,0,0,230,231,5,45,0,0,
  	231,232,3,22,11,0,232,49,1,0,0,0,233,237,5,17,0,0,234,237,5,18,0,0,235,
  	237,3,58,29,0,236,233,1,0,0,0,236,234,1,0,0,0,236,235,1,0,0,0,237,51,
  	1,0,0,0,238,240,5,13,0,0,239,238,1,0,0,0,239,240,1,0,0,0,240,241,1,0,
  	0,0,241,242,7,0,0,0,242,53,1,0,0,0,243,244,7,1,0,0,244,55,1,0,0,0,245,
  	246,5,19,0,0,246,57,1,0,0,0,247,249,5,33,0,0,248,250,5,34,0,0,249,248,
  	1,0,0,0,249,250,1,0,0,0,250,59,1,0,0,0,28,64,66,70,78,86,93,99,113,121,
  	129,136,142,151,163,170,174,181,185,191,197,202,209,214,220,228,236,239,
  	249
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cidlParserStaticData = staticData.release();
}

}

CidlParser::CidlParser(TokenStream *input) : CidlParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CidlParser::CidlParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CidlParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cidlParserStaticData->atn, cidlParserStaticData->decisionToDFA, cidlParserStaticData->sharedContextCache, options);
}

CidlParser::~CidlParser() {
  delete _interpreter;
}

const atn::ATN& CidlParser::getATN() const {
  return *cidlParserStaticData->atn;
}

std::string CidlParser::getGrammarFileName() const {
  return "Cidl.g4";
}

const std::vector<std::string>& CidlParser::getRuleNames() const {
  return cidlParserStaticData->ruleNames;
}

const dfa::Vocabulary& CidlParser::getVocabulary() const {
  return cidlParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CidlParser::getSerializedATN() const {
  return cidlParserStaticData->serializedATN;
}


//----------------- ModuleContext ------------------------------------------------------------------

CidlParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::ModuleContext::EOF() {
  return getToken(CidlParser::EOF, 0);
}

std::vector<CidlParser::InterfaceDefinitionContext *> CidlParser::ModuleContext::interfaceDefinition() {
  return getRuleContexts<CidlParser::InterfaceDefinitionContext>();
}

CidlParser::InterfaceDefinitionContext* CidlParser::ModuleContext::interfaceDefinition(size_t i) {
  return getRuleContext<CidlParser::InterfaceDefinitionContext>(i);
}

std::vector<CidlParser::StructDefinitionContext *> CidlParser::ModuleContext::structDefinition() {
  return getRuleContexts<CidlParser::StructDefinitionContext>();
}

CidlParser::StructDefinitionContext* CidlParser::ModuleContext::structDefinition(size_t i) {
  return getRuleContext<CidlParser::StructDefinitionContext>(i);
}

std::vector<CidlParser::EnumDefinitionContext *> CidlParser::ModuleContext::enumDefinition() {
  return getRuleContexts<CidlParser::EnumDefinitionContext>();
}

CidlParser::EnumDefinitionContext* CidlParser::ModuleContext::enumDefinition(size_t i) {
  return getRuleContext<CidlParser::EnumDefinitionContext>(i);
}


size_t CidlParser::ModuleContext::getRuleIndex() const {
  return CidlParser::RuleModule;
}

void CidlParser::ModuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModule(this);
}

void CidlParser::ModuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModule(this);
}

CidlParser::ModuleContext* CidlParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 0, CidlParser::RuleModule);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 5905580032) != 0) {
        setState(64);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case CidlParser::LEFT_SQUARE_BRACKET: {
            setState(61);
            interfaceDefinition();
            break;
          }

          case CidlParser::ID_STRUCT: {
            setState(62);
            structDefinition();
            break;
          }

          case CidlParser::ID_ENUM: {
            setState(63);
            enumDefinition();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(68);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(69);
      match(CidlParser::EOF);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

CidlParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::AttributeContext::LEFT_SQUARE_BRACKET() {
  return getToken(CidlParser::LEFT_SQUARE_BRACKET, 0);
}

CidlParser::Local_typeContext* CidlParser::AttributeContext::local_type() {
  return getRuleContext<CidlParser::Local_typeContext>(0);
}

tree::TerminalNode* CidlParser::AttributeContext::RIGHT_SQUARE_BRACKET() {
  return getToken(CidlParser::RIGHT_SQUARE_BRACKET, 0);
}

tree::TerminalNode* CidlParser::AttributeContext::LEFT_BRACKET() {
  return getToken(CidlParser::LEFT_BRACKET, 0);
}

CidlParser::Argument_listContext* CidlParser::AttributeContext::argument_list() {
  return getRuleContext<CidlParser::Argument_listContext>(0);
}

tree::TerminalNode* CidlParser::AttributeContext::RIGHT_BRACKET() {
  return getToken(CidlParser::RIGHT_BRACKET, 0);
}


size_t CidlParser::AttributeContext::getRuleIndex() const {
  return CidlParser::RuleAttribute;
}

void CidlParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void CidlParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}

CidlParser::AttributeContext* CidlParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 2, CidlParser::RuleAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(CidlParser::LEFT_SQUARE_BRACKET);
    setState(73);
    local_type();
    setState(78);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CidlParser::LEFT_BRACKET) {
      setState(74);
      match(CidlParser::LEFT_BRACKET);
      setState(75);
      argument_list();
      setState(76);
      match(CidlParser::RIGHT_BRACKET);
    }
    setState(80);
    match(CidlParser::RIGHT_SQUARE_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_listContext ------------------------------------------------------------------

CidlParser::Attribute_listContext::Attribute_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CidlParser::AttributeContext *> CidlParser::Attribute_listContext::attribute() {
  return getRuleContexts<CidlParser::AttributeContext>();
}

CidlParser::AttributeContext* CidlParser::Attribute_listContext::attribute(size_t i) {
  return getRuleContext<CidlParser::AttributeContext>(i);
}


size_t CidlParser::Attribute_listContext::getRuleIndex() const {
  return CidlParser::RuleAttribute_list;
}

void CidlParser::Attribute_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_list(this);
}

void CidlParser::Attribute_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_list(this);
}

CidlParser::Attribute_listContext* CidlParser::attribute_list() {
  Attribute_listContext *_localctx = _tracker.createInstance<Attribute_listContext>(_ctx, getState());
  enterRule(_localctx, 4, CidlParser::RuleAttribute_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    attribute();
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CidlParser::LEFT_SQUARE_BRACKET) {
      setState(83);
      attribute();
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceDefinitionContext ------------------------------------------------------------------

CidlParser::InterfaceDefinitionContext::InterfaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Attribute_listContext* CidlParser::InterfaceDefinitionContext::attribute_list() {
  return getRuleContext<CidlParser::Attribute_listContext>(0);
}

tree::TerminalNode* CidlParser::InterfaceDefinitionContext::ID_INTERFACE() {
  return getToken(CidlParser::ID_INTERFACE, 0);
}

CidlParser::Local_typeContext* CidlParser::InterfaceDefinitionContext::local_type() {
  return getRuleContext<CidlParser::Local_typeContext>(0);
}

tree::TerminalNode* CidlParser::InterfaceDefinitionContext::LCURLY() {
  return getToken(CidlParser::LCURLY, 0);
}

tree::TerminalNode* CidlParser::InterfaceDefinitionContext::RCURLY() {
  return getToken(CidlParser::RCURLY, 0);
}

CidlParser::InterfaceInheritanceListContext* CidlParser::InterfaceDefinitionContext::interfaceInheritanceList() {
  return getRuleContext<CidlParser::InterfaceInheritanceListContext>(0);
}

std::vector<CidlParser::MethodContext *> CidlParser::InterfaceDefinitionContext::method() {
  return getRuleContexts<CidlParser::MethodContext>();
}

CidlParser::MethodContext* CidlParser::InterfaceDefinitionContext::method(size_t i) {
  return getRuleContext<CidlParser::MethodContext>(i);
}


size_t CidlParser::InterfaceDefinitionContext::getRuleIndex() const {
  return CidlParser::RuleInterfaceDefinition;
}

void CidlParser::InterfaceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceDefinition(this);
}

void CidlParser::InterfaceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceDefinition(this);
}

CidlParser::InterfaceDefinitionContext* CidlParser::interfaceDefinition() {
  InterfaceDefinitionContext *_localctx = _tracker.createInstance<InterfaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 6, CidlParser::RuleInterfaceDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    attribute_list();
    setState(90);
    match(CidlParser::ID_INTERFACE);
    setState(91);
    local_type();
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CidlParser::COLON) {
      setState(92);
      interfaceInheritanceList();
    }
    setState(95);
    match(CidlParser::LCURLY);
    setState(97); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(96);
      method();
      setState(99); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137439485888) != 0);
    setState(101);
    match(CidlParser::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructFieldContext ------------------------------------------------------------------

CidlParser::StructFieldContext::StructFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Local_or_imported_typeContext* CidlParser::StructFieldContext::local_or_imported_type() {
  return getRuleContext<CidlParser::Local_or_imported_typeContext>(0);
}

CidlParser::Local_typeContext* CidlParser::StructFieldContext::local_type() {
  return getRuleContext<CidlParser::Local_typeContext>(0);
}

tree::TerminalNode* CidlParser::StructFieldContext::SEMICOLON() {
  return getToken(CidlParser::SEMICOLON, 0);
}


size_t CidlParser::StructFieldContext::getRuleIndex() const {
  return CidlParser::RuleStructField;
}

void CidlParser::StructFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructField(this);
}

void CidlParser::StructFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructField(this);
}

CidlParser::StructFieldContext* CidlParser::structField() {
  StructFieldContext *_localctx = _tracker.createInstance<StructFieldContext>(_ctx, getState());
  enterRule(_localctx, 8, CidlParser::RuleStructField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    local_or_imported_type();
    setState(104);
    local_type();
    setState(105);
    match(CidlParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDefinitionContext ------------------------------------------------------------------

CidlParser::StructDefinitionContext::StructDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::StructDefinitionContext::ID_STRUCT() {
  return getToken(CidlParser::ID_STRUCT, 0);
}

CidlParser::Local_typeContext* CidlParser::StructDefinitionContext::local_type() {
  return getRuleContext<CidlParser::Local_typeContext>(0);
}

tree::TerminalNode* CidlParser::StructDefinitionContext::LCURLY() {
  return getToken(CidlParser::LCURLY, 0);
}

tree::TerminalNode* CidlParser::StructDefinitionContext::RCURLY() {
  return getToken(CidlParser::RCURLY, 0);
}

std::vector<CidlParser::StructFieldContext *> CidlParser::StructDefinitionContext::structField() {
  return getRuleContexts<CidlParser::StructFieldContext>();
}

CidlParser::StructFieldContext* CidlParser::StructDefinitionContext::structField(size_t i) {
  return getRuleContext<CidlParser::StructFieldContext>(i);
}


size_t CidlParser::StructDefinitionContext::getRuleIndex() const {
  return CidlParser::RuleStructDefinition;
}

void CidlParser::StructDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDefinition(this);
}

void CidlParser::StructDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDefinition(this);
}

CidlParser::StructDefinitionContext* CidlParser::structDefinition() {
  StructDefinitionContext *_localctx = _tracker.createInstance<StructDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 10, CidlParser::RuleStructDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(CidlParser::ID_STRUCT);
    setState(108);
    local_type();
    setState(109);
    match(CidlParser::LCURLY);
    setState(111); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(110);
      structField();
      setState(113); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 137439485888) != 0);
    setState(115);
    match(CidlParser::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDefinitionContext ------------------------------------------------------------------

CidlParser::EnumDefinitionContext::EnumDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::EnumDefinitionContext::ID_ENUM() {
  return getToken(CidlParser::ID_ENUM, 0);
}

CidlParser::Local_typeContext* CidlParser::EnumDefinitionContext::local_type() {
  return getRuleContext<CidlParser::Local_typeContext>(0);
}

tree::TerminalNode* CidlParser::EnumDefinitionContext::LCURLY() {
  return getToken(CidlParser::LCURLY, 0);
}

std::vector<CidlParser::EnumFieldContext *> CidlParser::EnumDefinitionContext::enumField() {
  return getRuleContexts<CidlParser::EnumFieldContext>();
}

CidlParser::EnumFieldContext* CidlParser::EnumDefinitionContext::enumField(size_t i) {
  return getRuleContext<CidlParser::EnumFieldContext>(i);
}

tree::TerminalNode* CidlParser::EnumDefinitionContext::RCURLY() {
  return getToken(CidlParser::RCURLY, 0);
}

tree::TerminalNode* CidlParser::EnumDefinitionContext::COLON() {
  return getToken(CidlParser::COLON, 0);
}

CidlParser::Integer_primitiveContext* CidlParser::EnumDefinitionContext::integer_primitive() {
  return getRuleContext<CidlParser::Integer_primitiveContext>(0);
}


size_t CidlParser::EnumDefinitionContext::getRuleIndex() const {
  return CidlParser::RuleEnumDefinition;
}

void CidlParser::EnumDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDefinition(this);
}

void CidlParser::EnumDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDefinition(this);
}

CidlParser::EnumDefinitionContext* CidlParser::enumDefinition() {
  EnumDefinitionContext *_localctx = _tracker.createInstance<EnumDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 12, CidlParser::RuleEnumDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(CidlParser::ID_ENUM);
    setState(118);
    local_type();
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CidlParser::COLON) {
      setState(119);
      match(CidlParser::COLON);
      setState(120);
      integer_primitive();
    }
    setState(123);
    match(CidlParser::LCURLY);
    setState(124);
    enumField();
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CidlParser::T__0) {
      setState(125);
      match(CidlParser::T__0);
      setState(126);
      enumField();
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(132);
    match(CidlParser::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_typeContext ------------------------------------------------------------------

CidlParser::Local_typeContext::Local_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::PrimitiveContext* CidlParser::Local_typeContext::primitive() {
  return getRuleContext<CidlParser::PrimitiveContext>(0);
}

tree::TerminalNode* CidlParser::Local_typeContext::ID() {
  return getToken(CidlParser::ID, 0);
}


size_t CidlParser::Local_typeContext::getRuleIndex() const {
  return CidlParser::RuleLocal_type;
}

void CidlParser::Local_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_type(this);
}

void CidlParser::Local_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_type(this);
}

CidlParser::Local_typeContext* CidlParser::local_type() {
  Local_typeContext *_localctx = _tracker.createInstance<Local_typeContext>(_ctx, getState());
  enterRule(_localctx, 14, CidlParser::RuleLocal_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CidlParser::T__5:
      case CidlParser::T__6:
      case CidlParser::T__7:
      case CidlParser::T__8:
      case CidlParser::T__9:
      case CidlParser::T__10:
      case CidlParser::T__11:
      case CidlParser::ID_INTEGER_PRIMITIVE: {
        enterOuterAlt(_localctx, 1);
        setState(134);
        primitive();
        break;
      }

      case CidlParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(135);
        match(CidlParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Imported_type_moduleContext ------------------------------------------------------------------

CidlParser::Imported_type_moduleContext::Imported_type_moduleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CidlParser::Imported_type_moduleContext::ID() {
  return getTokens(CidlParser::ID);
}

tree::TerminalNode* CidlParser::Imported_type_moduleContext::ID(size_t i) {
  return getToken(CidlParser::ID, i);
}


size_t CidlParser::Imported_type_moduleContext::getRuleIndex() const {
  return CidlParser::RuleImported_type_module;
}

void CidlParser::Imported_type_moduleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImported_type_module(this);
}

void CidlParser::Imported_type_moduleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImported_type_module(this);
}

CidlParser::Imported_type_moduleContext* CidlParser::imported_type_module() {
  Imported_type_moduleContext *_localctx = _tracker.createInstance<Imported_type_moduleContext>(_ctx, getState());
  enterRule(_localctx, 16, CidlParser::RuleImported_type_module);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(140); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(138);
              match(CidlParser::ID);
              setState(139);
              match(CidlParser::T__1);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(142); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Imported_type_nameContext ------------------------------------------------------------------

CidlParser::Imported_type_nameContext::Imported_type_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::Imported_type_nameContext::ID() {
  return getToken(CidlParser::ID, 0);
}


size_t CidlParser::Imported_type_nameContext::getRuleIndex() const {
  return CidlParser::RuleImported_type_name;
}

void CidlParser::Imported_type_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImported_type_name(this);
}

void CidlParser::Imported_type_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImported_type_name(this);
}

CidlParser::Imported_type_nameContext* CidlParser::imported_type_name() {
  Imported_type_nameContext *_localctx = _tracker.createInstance<Imported_type_nameContext>(_ctx, getState());
  enterRule(_localctx, 18, CidlParser::RuleImported_type_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    match(CidlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Imported_typeContext ------------------------------------------------------------------

CidlParser::Imported_typeContext::Imported_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Imported_type_moduleContext* CidlParser::Imported_typeContext::imported_type_module() {
  return getRuleContext<CidlParser::Imported_type_moduleContext>(0);
}

CidlParser::Imported_type_nameContext* CidlParser::Imported_typeContext::imported_type_name() {
  return getRuleContext<CidlParser::Imported_type_nameContext>(0);
}


size_t CidlParser::Imported_typeContext::getRuleIndex() const {
  return CidlParser::RuleImported_type;
}

void CidlParser::Imported_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImported_type(this);
}

void CidlParser::Imported_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImported_type(this);
}

CidlParser::Imported_typeContext* CidlParser::imported_type() {
  Imported_typeContext *_localctx = _tracker.createInstance<Imported_typeContext>(_ctx, getState());
  enterRule(_localctx, 20, CidlParser::RuleImported_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    imported_type_module();
    setState(147);
    imported_type_name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_or_imported_typeContext ------------------------------------------------------------------

CidlParser::Local_or_imported_typeContext::Local_or_imported_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Local_typeContext* CidlParser::Local_or_imported_typeContext::local_type() {
  return getRuleContext<CidlParser::Local_typeContext>(0);
}

CidlParser::Imported_typeContext* CidlParser::Local_or_imported_typeContext::imported_type() {
  return getRuleContext<CidlParser::Imported_typeContext>(0);
}


size_t CidlParser::Local_or_imported_typeContext::getRuleIndex() const {
  return CidlParser::RuleLocal_or_imported_type;
}

void CidlParser::Local_or_imported_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_or_imported_type(this);
}

void CidlParser::Local_or_imported_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_or_imported_type(this);
}

CidlParser::Local_or_imported_typeContext* CidlParser::local_or_imported_type() {
  Local_or_imported_typeContext *_localctx = _tracker.createInstance<Local_or_imported_typeContext>(_ctx, getState());
  enterRule(_localctx, 22, CidlParser::RuleLocal_or_imported_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(149);
      local_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(150);
      imported_type();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Reference_type_nameContext ------------------------------------------------------------------

CidlParser::Reference_type_nameContext::Reference_type_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Local_or_imported_typeContext* CidlParser::Reference_type_nameContext::local_or_imported_type() {
  return getRuleContext<CidlParser::Local_or_imported_typeContext>(0);
}


size_t CidlParser::Reference_type_nameContext::getRuleIndex() const {
  return CidlParser::RuleReference_type_name;
}

void CidlParser::Reference_type_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReference_type_name(this);
}

void CidlParser::Reference_type_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReference_type_name(this);
}

CidlParser::Reference_type_nameContext* CidlParser::reference_type_name() {
  Reference_type_nameContext *_localctx = _tracker.createInstance<Reference_type_nameContext>(_ctx, getState());
  enterRule(_localctx, 24, CidlParser::RuleReference_type_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    local_or_imported_type();
    setState(154);
    match(CidlParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_typeContext ------------------------------------------------------------------

CidlParser::Array_typeContext::Array_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Local_or_imported_typeContext* CidlParser::Array_typeContext::local_or_imported_type() {
  return getRuleContext<CidlParser::Local_or_imported_typeContext>(0);
}


size_t CidlParser::Array_typeContext::getRuleIndex() const {
  return CidlParser::RuleArray_type;
}

void CidlParser::Array_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_type(this);
}

void CidlParser::Array_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_type(this);
}

CidlParser::Array_typeContext* CidlParser::array_type() {
  Array_typeContext *_localctx = _tracker.createInstance<Array_typeContext>(_ctx, getState());
  enterRule(_localctx, 26, CidlParser::RuleArray_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    local_or_imported_type();
    setState(157);
    match(CidlParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_nameContext ------------------------------------------------------------------

CidlParser::Method_nameContext::Method_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Local_typeContext* CidlParser::Method_nameContext::local_type() {
  return getRuleContext<CidlParser::Local_typeContext>(0);
}


size_t CidlParser::Method_nameContext::getRuleIndex() const {
  return CidlParser::RuleMethod_name;
}

void CidlParser::Method_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_name(this);
}

void CidlParser::Method_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_name(this);
}

CidlParser::Method_nameContext* CidlParser::method_name() {
  Method_nameContext *_localctx = _tracker.createInstance<Method_nameContext>(_ctx, getState());
  enterRule(_localctx, 28, CidlParser::RuleMethod_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    local_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CidlParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::ExpressionContext::STRING_LITERAL() {
  return getToken(CidlParser::STRING_LITERAL, 0);
}

CidlParser::Numeric_literalContext* CidlParser::ExpressionContext::numeric_literal() {
  return getRuleContext<CidlParser::Numeric_literalContext>(0);
}


size_t CidlParser::ExpressionContext::getRuleIndex() const {
  return CidlParser::RuleExpression;
}

void CidlParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CidlParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

CidlParser::ExpressionContext* CidlParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 30, CidlParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(163);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CidlParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(161);
        match(CidlParser::STRING_LITERAL);
        break;
      }

      case CidlParser::INTEGER_LITERAL:
      case CidlParser::HEX_LITERAL:
      case CidlParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(162);
        numeric_literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

CidlParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::ExpressionContext* CidlParser::Unary_expressionContext::expression() {
  return getRuleContext<CidlParser::ExpressionContext>(0);
}

tree::TerminalNode* CidlParser::Unary_expressionContext::MINUS() {
  return getToken(CidlParser::MINUS, 0);
}

CidlParser::Unary_expressionContext* CidlParser::Unary_expressionContext::unary_expression() {
  return getRuleContext<CidlParser::Unary_expressionContext>(0);
}

tree::TerminalNode* CidlParser::Unary_expressionContext::PLUS() {
  return getToken(CidlParser::PLUS, 0);
}


size_t CidlParser::Unary_expressionContext::getRuleIndex() const {
  return CidlParser::RuleUnary_expression;
}

void CidlParser::Unary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_expression(this);
}

void CidlParser::Unary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_expression(this);
}

CidlParser::Unary_expressionContext* CidlParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 32, CidlParser::RuleUnary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CidlParser::INTEGER_LITERAL:
      case CidlParser::HEX_LITERAL:
      case CidlParser::FLOAT:
      case CidlParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(165);
        expression();
        break;
      }

      case CidlParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(166);
        match(CidlParser::MINUS);
        setState(167);
        unary_expression();
        break;
      }

      case CidlParser::PLUS: {
        enterOuterAlt(_localctx, 3);
        setState(168);
        match(CidlParser::PLUS);
        setState(169);
        unary_expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

CidlParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::ExpressionContext* CidlParser::ArgumentContext::expression() {
  return getRuleContext<CidlParser::ExpressionContext>(0);
}

CidlParser::Unary_expressionContext* CidlParser::ArgumentContext::unary_expression() {
  return getRuleContext<CidlParser::Unary_expressionContext>(0);
}


size_t CidlParser::ArgumentContext::getRuleIndex() const {
  return CidlParser::RuleArgument;
}

void CidlParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void CidlParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}

CidlParser::ArgumentContext* CidlParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 34, CidlParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(174);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(172);
      expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(173);
      unary_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_listContext ------------------------------------------------------------------

CidlParser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CidlParser::ArgumentContext *> CidlParser::Argument_listContext::argument() {
  return getRuleContexts<CidlParser::ArgumentContext>();
}

CidlParser::ArgumentContext* CidlParser::Argument_listContext::argument(size_t i) {
  return getRuleContext<CidlParser::ArgumentContext>(i);
}


size_t CidlParser::Argument_listContext::getRuleIndex() const {
  return CidlParser::RuleArgument_list;
}

void CidlParser::Argument_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument_list(this);
}

void CidlParser::Argument_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument_list(this);
}

CidlParser::Argument_listContext* CidlParser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 36, CidlParser::RuleArgument_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    argument();
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CidlParser::T__0) {
      setState(177);
      match(CidlParser::T__0);
      setState(178);
      argument();
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_parameterContext ------------------------------------------------------------------

CidlParser::Method_parameterContext::Method_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Local_or_imported_typeContext* CidlParser::Method_parameterContext::local_or_imported_type() {
  return getRuleContext<CidlParser::Local_or_imported_typeContext>(0);
}

CidlParser::Local_typeContext* CidlParser::Method_parameterContext::local_type() {
  return getRuleContext<CidlParser::Local_typeContext>(0);
}

CidlParser::Attribute_listContext* CidlParser::Method_parameterContext::attribute_list() {
  return getRuleContext<CidlParser::Attribute_listContext>(0);
}

CidlParser::Reference_type_nameContext* CidlParser::Method_parameterContext::reference_type_name() {
  return getRuleContext<CidlParser::Reference_type_nameContext>(0);
}

CidlParser::Array_typeContext* CidlParser::Method_parameterContext::array_type() {
  return getRuleContext<CidlParser::Array_typeContext>(0);
}


size_t CidlParser::Method_parameterContext::getRuleIndex() const {
  return CidlParser::RuleMethod_parameter;
}

void CidlParser::Method_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_parameter(this);
}

void CidlParser::Method_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_parameter(this);
}

CidlParser::Method_parameterContext* CidlParser::method_parameter() {
  Method_parameterContext *_localctx = _tracker.createInstance<Method_parameterContext>(_ctx, getState());
  enterRule(_localctx, 38, CidlParser::RuleMethod_parameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(202);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(185);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CidlParser::LEFT_SQUARE_BRACKET) {
        setState(184);
        attribute_list();
      }
      setState(187);
      local_or_imported_type();
      setState(188);
      local_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(191);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CidlParser::LEFT_SQUARE_BRACKET) {
        setState(190);
        attribute_list();
      }
      setState(193);
      reference_type_name();
      setState(194);
      local_type();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(197);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CidlParser::LEFT_SQUARE_BRACKET) {
        setState(196);
        attribute_list();
      }
      setState(199);
      array_type();
      setState(200);
      local_type();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_parameter_listContext ------------------------------------------------------------------

CidlParser::Method_parameter_listContext::Method_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CidlParser::Method_parameterContext *> CidlParser::Method_parameter_listContext::method_parameter() {
  return getRuleContexts<CidlParser::Method_parameterContext>();
}

CidlParser::Method_parameterContext* CidlParser::Method_parameter_listContext::method_parameter(size_t i) {
  return getRuleContext<CidlParser::Method_parameterContext>(i);
}


size_t CidlParser::Method_parameter_listContext::getRuleIndex() const {
  return CidlParser::RuleMethod_parameter_list;
}

void CidlParser::Method_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_parameter_list(this);
}

void CidlParser::Method_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_parameter_list(this);
}

CidlParser::Method_parameter_listContext* CidlParser::method_parameter_list() {
  Method_parameter_listContext *_localctx = _tracker.createInstance<Method_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 40, CidlParser::RuleMethod_parameter_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    method_parameter();
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CidlParser::T__0) {
      setState(205);
      match(CidlParser::T__0);
      setState(206);
      method_parameter();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Method_return_typeContext ------------------------------------------------------------------

CidlParser::Method_return_typeContext::Method_return_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Array_typeContext* CidlParser::Method_return_typeContext::array_type() {
  return getRuleContext<CidlParser::Array_typeContext>(0);
}

CidlParser::Local_or_imported_typeContext* CidlParser::Method_return_typeContext::local_or_imported_type() {
  return getRuleContext<CidlParser::Local_or_imported_typeContext>(0);
}


size_t CidlParser::Method_return_typeContext::getRuleIndex() const {
  return CidlParser::RuleMethod_return_type;
}

void CidlParser::Method_return_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod_return_type(this);
}

void CidlParser::Method_return_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod_return_type(this);
}

CidlParser::Method_return_typeContext* CidlParser::method_return_type() {
  Method_return_typeContext *_localctx = _tracker.createInstance<Method_return_typeContext>(_ctx, getState());
  enterRule(_localctx, 42, CidlParser::RuleMethod_return_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(212);
      array_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(213);
      local_or_imported_type();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodContext ------------------------------------------------------------------

CidlParser::MethodContext::MethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Method_return_typeContext* CidlParser::MethodContext::method_return_type() {
  return getRuleContext<CidlParser::Method_return_typeContext>(0);
}

CidlParser::Method_nameContext* CidlParser::MethodContext::method_name() {
  return getRuleContext<CidlParser::Method_nameContext>(0);
}

tree::TerminalNode* CidlParser::MethodContext::LEFT_BRACKET() {
  return getToken(CidlParser::LEFT_BRACKET, 0);
}

tree::TerminalNode* CidlParser::MethodContext::RIGHT_BRACKET() {
  return getToken(CidlParser::RIGHT_BRACKET, 0);
}

tree::TerminalNode* CidlParser::MethodContext::SEMICOLON() {
  return getToken(CidlParser::SEMICOLON, 0);
}

CidlParser::Method_parameter_listContext* CidlParser::MethodContext::method_parameter_list() {
  return getRuleContext<CidlParser::Method_parameter_listContext>(0);
}


size_t CidlParser::MethodContext::getRuleIndex() const {
  return CidlParser::RuleMethod;
}

void CidlParser::MethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod(this);
}

void CidlParser::MethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod(this);
}

CidlParser::MethodContext* CidlParser::method() {
  MethodContext *_localctx = _tracker.createInstance<MethodContext>(_ctx, getState());
  enterRule(_localctx, 44, CidlParser::RuleMethod);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    method_return_type();
    setState(217);
    method_name();
    setState(218);
    match(CidlParser::LEFT_BRACKET);
    setState(220);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 141734453184) != 0) {
      setState(219);
      method_parameter_list();
    }
    setState(222);
    match(CidlParser::RIGHT_BRACKET);
    setState(223);
    match(CidlParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumFieldContext ------------------------------------------------------------------

CidlParser::EnumFieldContext::EnumFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CidlParser::Local_typeContext* CidlParser::EnumFieldContext::local_type() {
  return getRuleContext<CidlParser::Local_typeContext>(0);
}

CidlParser::Enum_field_valueContext* CidlParser::EnumFieldContext::enum_field_value() {
  return getRuleContext<CidlParser::Enum_field_valueContext>(0);
}


size_t CidlParser::EnumFieldContext::getRuleIndex() const {
  return CidlParser::RuleEnumField;
}

void CidlParser::EnumFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumField(this);
}

void CidlParser::EnumFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumField(this);
}

CidlParser::EnumFieldContext* CidlParser::enumField() {
  EnumFieldContext *_localctx = _tracker.createInstance<EnumFieldContext>(_ctx, getState());
  enterRule(_localctx, 46, CidlParser::RuleEnumField);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    local_type();
    setState(228);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CidlParser::T__4) {
      setState(226);
      match(CidlParser::T__4);
      setState(227);
      enum_field_value();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceInheritanceListContext ------------------------------------------------------------------

CidlParser::InterfaceInheritanceListContext::InterfaceInheritanceListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::InterfaceInheritanceListContext::COLON() {
  return getToken(CidlParser::COLON, 0);
}

CidlParser::Local_or_imported_typeContext* CidlParser::InterfaceInheritanceListContext::local_or_imported_type() {
  return getRuleContext<CidlParser::Local_or_imported_typeContext>(0);
}


size_t CidlParser::InterfaceInheritanceListContext::getRuleIndex() const {
  return CidlParser::RuleInterfaceInheritanceList;
}

void CidlParser::InterfaceInheritanceListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInterfaceInheritanceList(this);
}

void CidlParser::InterfaceInheritanceListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInterfaceInheritanceList(this);
}

CidlParser::InterfaceInheritanceListContext* CidlParser::interfaceInheritanceList() {
  InterfaceInheritanceListContext *_localctx = _tracker.createInstance<InterfaceInheritanceListContext>(_ctx, getState());
  enterRule(_localctx, 48, CidlParser::RuleInterfaceInheritanceList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(CidlParser::COLON);
    setState(231);
    local_or_imported_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Numeric_literalContext ------------------------------------------------------------------

CidlParser::Numeric_literalContext::Numeric_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::Numeric_literalContext::INTEGER_LITERAL() {
  return getToken(CidlParser::INTEGER_LITERAL, 0);
}

tree::TerminalNode* CidlParser::Numeric_literalContext::HEX_LITERAL() {
  return getToken(CidlParser::HEX_LITERAL, 0);
}

CidlParser::Float_literalContext* CidlParser::Numeric_literalContext::float_literal() {
  return getRuleContext<CidlParser::Float_literalContext>(0);
}


size_t CidlParser::Numeric_literalContext::getRuleIndex() const {
  return CidlParser::RuleNumeric_literal;
}

void CidlParser::Numeric_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumeric_literal(this);
}

void CidlParser::Numeric_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumeric_literal(this);
}

CidlParser::Numeric_literalContext* CidlParser::numeric_literal() {
  Numeric_literalContext *_localctx = _tracker.createInstance<Numeric_literalContext>(_ctx, getState());
  enterRule(_localctx, 50, CidlParser::RuleNumeric_literal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(236);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CidlParser::INTEGER_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(233);
        match(CidlParser::INTEGER_LITERAL);
        break;
      }

      case CidlParser::HEX_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(234);
        match(CidlParser::HEX_LITERAL);
        break;
      }

      case CidlParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(235);
        float_literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_field_valueContext ------------------------------------------------------------------

CidlParser::Enum_field_valueContext::Enum_field_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::Enum_field_valueContext::INTEGER_LITERAL() {
  return getToken(CidlParser::INTEGER_LITERAL, 0);
}

tree::TerminalNode* CidlParser::Enum_field_valueContext::HEX_LITERAL() {
  return getToken(CidlParser::HEX_LITERAL, 0);
}

tree::TerminalNode* CidlParser::Enum_field_valueContext::MINUS() {
  return getToken(CidlParser::MINUS, 0);
}


size_t CidlParser::Enum_field_valueContext::getRuleIndex() const {
  return CidlParser::RuleEnum_field_value;
}

void CidlParser::Enum_field_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_field_value(this);
}

void CidlParser::Enum_field_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_field_value(this);
}

CidlParser::Enum_field_valueContext* CidlParser::enum_field_value() {
  Enum_field_valueContext *_localctx = _tracker.createInstance<Enum_field_valueContext>(_ctx, getState());
  enterRule(_localctx, 52, CidlParser::RuleEnum_field_value);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CidlParser::MINUS) {
      setState(238);
      match(CidlParser::MINUS);
    }
    setState(241);
    _la = _input->LA(1);
    if (!(_la == CidlParser::INTEGER_LITERAL

    || _la == CidlParser::HEX_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveContext ------------------------------------------------------------------

CidlParser::PrimitiveContext::PrimitiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::PrimitiveContext::ID_INTEGER_PRIMITIVE() {
  return getToken(CidlParser::ID_INTEGER_PRIMITIVE, 0);
}


size_t CidlParser::PrimitiveContext::getRuleIndex() const {
  return CidlParser::RulePrimitive;
}

void CidlParser::PrimitiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitive(this);
}

void CidlParser::PrimitiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitive(this);
}

CidlParser::PrimitiveContext* CidlParser::primitive() {
  PrimitiveContext *_localctx = _tracker.createInstance<PrimitiveContext>(_ctx, getState());
  enterRule(_localctx, 54, CidlParser::RulePrimitive);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 532416) != 0)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integer_primitiveContext ------------------------------------------------------------------

CidlParser::Integer_primitiveContext::Integer_primitiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::Integer_primitiveContext::ID_INTEGER_PRIMITIVE() {
  return getToken(CidlParser::ID_INTEGER_PRIMITIVE, 0);
}


size_t CidlParser::Integer_primitiveContext::getRuleIndex() const {
  return CidlParser::RuleInteger_primitive;
}

void CidlParser::Integer_primitiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger_primitive(this);
}

void CidlParser::Integer_primitiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger_primitive(this);
}

CidlParser::Integer_primitiveContext* CidlParser::integer_primitive() {
  Integer_primitiveContext *_localctx = _tracker.createInstance<Integer_primitiveContext>(_ctx, getState());
  enterRule(_localctx, 56, CidlParser::RuleInteger_primitive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(CidlParser::ID_INTEGER_PRIMITIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Float_literalContext ------------------------------------------------------------------

CidlParser::Float_literalContext::Float_literalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CidlParser::Float_literalContext::FLOAT() {
  return getToken(CidlParser::FLOAT, 0);
}

tree::TerminalNode* CidlParser::Float_literalContext::FLOAT_SUFFIX() {
  return getToken(CidlParser::FLOAT_SUFFIX, 0);
}


size_t CidlParser::Float_literalContext::getRuleIndex() const {
  return CidlParser::RuleFloat_literal;
}

void CidlParser::Float_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat_literal(this);
}

void CidlParser::Float_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CidlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat_literal(this);
}

CidlParser::Float_literalContext* CidlParser::float_literal() {
  Float_literalContext *_localctx = _tracker.createInstance<Float_literalContext>(_ctx, getState());
  enterRule(_localctx, 58, CidlParser::RuleFloat_literal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(CidlParser::FLOAT);
    setState(249);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CidlParser::FLOAT_SUFFIX) {
      setState(248);
      match(CidlParser::FLOAT_SUFFIX);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CidlParser::initialize() {
  ::antlr4::internal::call_once(cidlParserOnceFlag, cidlParserInitialize);
}
