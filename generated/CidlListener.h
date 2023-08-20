
// Generated from Grammar/Cidl.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "CidlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CidlParser.
 */
class  CidlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterModule(CidlParser::ModuleContext *ctx) = 0;
  virtual void exitModule(CidlParser::ModuleContext *ctx) = 0;

  virtual void enterAttribute(CidlParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(CidlParser::AttributeContext *ctx) = 0;

  virtual void enterAttribute_list(CidlParser::Attribute_listContext *ctx) = 0;
  virtual void exitAttribute_list(CidlParser::Attribute_listContext *ctx) = 0;

  virtual void enterInterfaceDefinition(CidlParser::InterfaceDefinitionContext *ctx) = 0;
  virtual void exitInterfaceDefinition(CidlParser::InterfaceDefinitionContext *ctx) = 0;

  virtual void enterStructField(CidlParser::StructFieldContext *ctx) = 0;
  virtual void exitStructField(CidlParser::StructFieldContext *ctx) = 0;

  virtual void enterStructDefinition(CidlParser::StructDefinitionContext *ctx) = 0;
  virtual void exitStructDefinition(CidlParser::StructDefinitionContext *ctx) = 0;

  virtual void enterEnumDefinition(CidlParser::EnumDefinitionContext *ctx) = 0;
  virtual void exitEnumDefinition(CidlParser::EnumDefinitionContext *ctx) = 0;

  virtual void enterLocal_type(CidlParser::Local_typeContext *ctx) = 0;
  virtual void exitLocal_type(CidlParser::Local_typeContext *ctx) = 0;

  virtual void enterImported_type_module(CidlParser::Imported_type_moduleContext *ctx) = 0;
  virtual void exitImported_type_module(CidlParser::Imported_type_moduleContext *ctx) = 0;

  virtual void enterImported_type_name(CidlParser::Imported_type_nameContext *ctx) = 0;
  virtual void exitImported_type_name(CidlParser::Imported_type_nameContext *ctx) = 0;

  virtual void enterImported_type(CidlParser::Imported_typeContext *ctx) = 0;
  virtual void exitImported_type(CidlParser::Imported_typeContext *ctx) = 0;

  virtual void enterLocal_or_imported_type(CidlParser::Local_or_imported_typeContext *ctx) = 0;
  virtual void exitLocal_or_imported_type(CidlParser::Local_or_imported_typeContext *ctx) = 0;

  virtual void enterReference_type_name(CidlParser::Reference_type_nameContext *ctx) = 0;
  virtual void exitReference_type_name(CidlParser::Reference_type_nameContext *ctx) = 0;

  virtual void enterArray_type(CidlParser::Array_typeContext *ctx) = 0;
  virtual void exitArray_type(CidlParser::Array_typeContext *ctx) = 0;

  virtual void enterMethod_name(CidlParser::Method_nameContext *ctx) = 0;
  virtual void exitMethod_name(CidlParser::Method_nameContext *ctx) = 0;

  virtual void enterExpression(CidlParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CidlParser::ExpressionContext *ctx) = 0;

  virtual void enterUnary_expression(CidlParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(CidlParser::Unary_expressionContext *ctx) = 0;

  virtual void enterArgument(CidlParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(CidlParser::ArgumentContext *ctx) = 0;

  virtual void enterArgument_list(CidlParser::Argument_listContext *ctx) = 0;
  virtual void exitArgument_list(CidlParser::Argument_listContext *ctx) = 0;

  virtual void enterMethod_parameter(CidlParser::Method_parameterContext *ctx) = 0;
  virtual void exitMethod_parameter(CidlParser::Method_parameterContext *ctx) = 0;

  virtual void enterMethod_parameter_list(CidlParser::Method_parameter_listContext *ctx) = 0;
  virtual void exitMethod_parameter_list(CidlParser::Method_parameter_listContext *ctx) = 0;

  virtual void enterMethod_return_type(CidlParser::Method_return_typeContext *ctx) = 0;
  virtual void exitMethod_return_type(CidlParser::Method_return_typeContext *ctx) = 0;

  virtual void enterMethod(CidlParser::MethodContext *ctx) = 0;
  virtual void exitMethod(CidlParser::MethodContext *ctx) = 0;

  virtual void enterEnumField(CidlParser::EnumFieldContext *ctx) = 0;
  virtual void exitEnumField(CidlParser::EnumFieldContext *ctx) = 0;

  virtual void enterInterfaceInheritanceList(CidlParser::InterfaceInheritanceListContext *ctx) = 0;
  virtual void exitInterfaceInheritanceList(CidlParser::InterfaceInheritanceListContext *ctx) = 0;

  virtual void enterNumeric_literal(CidlParser::Numeric_literalContext *ctx) = 0;
  virtual void exitNumeric_literal(CidlParser::Numeric_literalContext *ctx) = 0;

  virtual void enterEnum_field_value(CidlParser::Enum_field_valueContext *ctx) = 0;
  virtual void exitEnum_field_value(CidlParser::Enum_field_valueContext *ctx) = 0;

  virtual void enterPrimitive(CidlParser::PrimitiveContext *ctx) = 0;
  virtual void exitPrimitive(CidlParser::PrimitiveContext *ctx) = 0;

  virtual void enterInteger_primitive(CidlParser::Integer_primitiveContext *ctx) = 0;
  virtual void exitInteger_primitive(CidlParser::Integer_primitiveContext *ctx) = 0;

  virtual void enterFloat_literal(CidlParser::Float_literalContext *ctx) = 0;
  virtual void exitFloat_literal(CidlParser::Float_literalContext *ctx) = 0;


};

