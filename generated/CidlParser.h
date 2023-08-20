
// Generated from Grammar/Cidl.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  CidlParser : public antlr4::Parser {
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

  enum {
    RuleModule = 0, RuleAttribute = 1, RuleAttribute_list = 2, RuleInterfaceDefinition = 3, 
    RuleStructField = 4, RuleStructDefinition = 5, RuleEnumDefinition = 6, 
    RuleLocal_type = 7, RuleImported_type_module = 8, RuleImported_type_name = 9, 
    RuleImported_type = 10, RuleLocal_or_imported_type = 11, RuleReference_type_name = 12, 
    RuleArray_type = 13, RuleMethod_name = 14, RuleExpression = 15, RuleUnary_expression = 16, 
    RuleArgument = 17, RuleArgument_list = 18, RuleMethod_parameter = 19, 
    RuleMethod_parameter_list = 20, RuleMethod_return_type = 21, RuleMethod = 22, 
    RuleEnumField = 23, RuleInterfaceInheritanceList = 24, RuleNumeric_literal = 25, 
    RuleEnum_field_value = 26, RulePrimitive = 27, RuleInteger_primitive = 28, 
    RuleFloat_literal = 29
  };

  explicit CidlParser(antlr4::TokenStream *input);

  CidlParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CidlParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ModuleContext;
  class AttributeContext;
  class Attribute_listContext;
  class InterfaceDefinitionContext;
  class StructFieldContext;
  class StructDefinitionContext;
  class EnumDefinitionContext;
  class Local_typeContext;
  class Imported_type_moduleContext;
  class Imported_type_nameContext;
  class Imported_typeContext;
  class Local_or_imported_typeContext;
  class Reference_type_nameContext;
  class Array_typeContext;
  class Method_nameContext;
  class ExpressionContext;
  class Unary_expressionContext;
  class ArgumentContext;
  class Argument_listContext;
  class Method_parameterContext;
  class Method_parameter_listContext;
  class Method_return_typeContext;
  class MethodContext;
  class EnumFieldContext;
  class InterfaceInheritanceListContext;
  class Numeric_literalContext;
  class Enum_field_valueContext;
  class PrimitiveContext;
  class Integer_primitiveContext;
  class Float_literalContext; 

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<InterfaceDefinitionContext *> interfaceDefinition();
    InterfaceDefinitionContext* interfaceDefinition(size_t i);
    std::vector<StructDefinitionContext *> structDefinition();
    StructDefinitionContext* structDefinition(size_t i);
    std::vector<EnumDefinitionContext *> enumDefinition();
    EnumDefinitionContext* enumDefinition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleContext* module();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_SQUARE_BRACKET();
    Local_typeContext *local_type();
    antlr4::tree::TerminalNode *RIGHT_SQUARE_BRACKET();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    Argument_listContext *argument_list();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeContext* attribute();

  class  Attribute_listContext : public antlr4::ParserRuleContext {
  public:
    Attribute_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Attribute_listContext* attribute_list();

  class  InterfaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attribute_listContext *attribute_list();
    antlr4::tree::TerminalNode *ID_INTERFACE();
    Local_typeContext *local_type();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    InterfaceInheritanceListContext *interfaceInheritanceList();
    std::vector<MethodContext *> method();
    MethodContext* method(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceDefinitionContext* interfaceDefinition();

  class  StructFieldContext : public antlr4::ParserRuleContext {
  public:
    StructFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_or_imported_typeContext *local_or_imported_type();
    Local_typeContext *local_type();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructFieldContext* structField();

  class  StructDefinitionContext : public antlr4::ParserRuleContext {
  public:
    StructDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID_STRUCT();
    Local_typeContext *local_type();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    std::vector<StructFieldContext *> structField();
    StructFieldContext* structField(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructDefinitionContext* structDefinition();

  class  EnumDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID_ENUM();
    Local_typeContext *local_type();
    antlr4::tree::TerminalNode *LCURLY();
    std::vector<EnumFieldContext *> enumField();
    EnumFieldContext* enumField(size_t i);
    antlr4::tree::TerminalNode *RCURLY();
    antlr4::tree::TerminalNode *COLON();
    Integer_primitiveContext *integer_primitive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDefinitionContext* enumDefinition();

  class  Local_typeContext : public antlr4::ParserRuleContext {
  public:
    Local_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimitiveContext *primitive();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_typeContext* local_type();

  class  Imported_type_moduleContext : public antlr4::ParserRuleContext {
  public:
    Imported_type_moduleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Imported_type_moduleContext* imported_type_module();

  class  Imported_type_nameContext : public antlr4::ParserRuleContext {
  public:
    Imported_type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Imported_type_nameContext* imported_type_name();

  class  Imported_typeContext : public antlr4::ParserRuleContext {
  public:
    Imported_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Imported_type_moduleContext *imported_type_module();
    Imported_type_nameContext *imported_type_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Imported_typeContext* imported_type();

  class  Local_or_imported_typeContext : public antlr4::ParserRuleContext {
  public:
    Local_or_imported_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_typeContext *local_type();
    Imported_typeContext *imported_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Local_or_imported_typeContext* local_or_imported_type();

  class  Reference_type_nameContext : public antlr4::ParserRuleContext {
  public:
    Reference_type_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_or_imported_typeContext *local_or_imported_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Reference_type_nameContext* reference_type_name();

  class  Array_typeContext : public antlr4::ParserRuleContext {
  public:
    Array_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_or_imported_typeContext *local_or_imported_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_typeContext* array_type();

  class  Method_nameContext : public antlr4::ParserRuleContext {
  public:
    Method_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_typeContext *local_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_nameContext* method_name();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    Numeric_literalContext *numeric_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  Unary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Unary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MINUS();
    Unary_expressionContext *unary_expression();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_expressionContext* unary_expression();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Unary_expressionContext *unary_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentContext* argument();

  class  Argument_listContext : public antlr4::ParserRuleContext {
  public:
    Argument_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Argument_listContext* argument_list();

  class  Method_parameterContext : public antlr4::ParserRuleContext {
  public:
    Method_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_or_imported_typeContext *local_or_imported_type();
    Local_typeContext *local_type();
    Attribute_listContext *attribute_list();
    Reference_type_nameContext *reference_type_name();
    Array_typeContext *array_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_parameterContext* method_parameter();

  class  Method_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Method_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Method_parameterContext *> method_parameter();
    Method_parameterContext* method_parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_parameter_listContext* method_parameter_list();

  class  Method_return_typeContext : public antlr4::ParserRuleContext {
  public:
    Method_return_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_typeContext *array_type();
    Local_or_imported_typeContext *local_or_imported_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Method_return_typeContext* method_return_type();

  class  MethodContext : public antlr4::ParserRuleContext {
  public:
    MethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_return_typeContext *method_return_type();
    Method_nameContext *method_name();
    antlr4::tree::TerminalNode *LEFT_BRACKET();
    antlr4::tree::TerminalNode *RIGHT_BRACKET();
    antlr4::tree::TerminalNode *SEMICOLON();
    Method_parameter_listContext *method_parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodContext* method();

  class  EnumFieldContext : public antlr4::ParserRuleContext {
  public:
    EnumFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Local_typeContext *local_type();
    Enum_field_valueContext *enum_field_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumFieldContext* enumField();

  class  InterfaceInheritanceListContext : public antlr4::ParserRuleContext {
  public:
    InterfaceInheritanceListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    Local_or_imported_typeContext *local_or_imported_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceInheritanceListContext* interfaceInheritanceList();

  class  Numeric_literalContext : public antlr4::ParserRuleContext {
  public:
    Numeric_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_LITERAL();
    antlr4::tree::TerminalNode *HEX_LITERAL();
    Float_literalContext *float_literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Numeric_literalContext* numeric_literal();

  class  Enum_field_valueContext : public antlr4::ParserRuleContext {
  public:
    Enum_field_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_LITERAL();
    antlr4::tree::TerminalNode *HEX_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Enum_field_valueContext* enum_field_value();

  class  PrimitiveContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID_INTEGER_PRIMITIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimitiveContext* primitive();

  class  Integer_primitiveContext : public antlr4::ParserRuleContext {
  public:
    Integer_primitiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID_INTEGER_PRIMITIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integer_primitiveContext* integer_primitive();

  class  Float_literalContext : public antlr4::ParserRuleContext {
  public:
    Float_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *FLOAT_SUFFIX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Float_literalContext* float_literal();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

