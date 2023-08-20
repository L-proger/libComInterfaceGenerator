
// Generated from Grammar/Cidl.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "CidlListener.h"


/**
 * This class provides an empty implementation of CidlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CidlBaseListener : public CidlListener {
public:

  virtual void enterModule(CidlParser::ModuleContext * /*ctx*/) override { }
  virtual void exitModule(CidlParser::ModuleContext * /*ctx*/) override { }

  virtual void enterAttribute(CidlParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(CidlParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttribute_list(CidlParser::Attribute_listContext * /*ctx*/) override { }
  virtual void exitAttribute_list(CidlParser::Attribute_listContext * /*ctx*/) override { }

  virtual void enterInterfaceDefinition(CidlParser::InterfaceDefinitionContext * /*ctx*/) override { }
  virtual void exitInterfaceDefinition(CidlParser::InterfaceDefinitionContext * /*ctx*/) override { }

  virtual void enterStructField(CidlParser::StructFieldContext * /*ctx*/) override { }
  virtual void exitStructField(CidlParser::StructFieldContext * /*ctx*/) override { }

  virtual void enterStructDefinition(CidlParser::StructDefinitionContext * /*ctx*/) override { }
  virtual void exitStructDefinition(CidlParser::StructDefinitionContext * /*ctx*/) override { }

  virtual void enterEnumDefinition(CidlParser::EnumDefinitionContext * /*ctx*/) override { }
  virtual void exitEnumDefinition(CidlParser::EnumDefinitionContext * /*ctx*/) override { }

  virtual void enterLocal_type(CidlParser::Local_typeContext * /*ctx*/) override { }
  virtual void exitLocal_type(CidlParser::Local_typeContext * /*ctx*/) override { }

  virtual void enterImported_type_module(CidlParser::Imported_type_moduleContext * /*ctx*/) override { }
  virtual void exitImported_type_module(CidlParser::Imported_type_moduleContext * /*ctx*/) override { }

  virtual void enterImported_type_name(CidlParser::Imported_type_nameContext * /*ctx*/) override { }
  virtual void exitImported_type_name(CidlParser::Imported_type_nameContext * /*ctx*/) override { }

  virtual void enterImported_type(CidlParser::Imported_typeContext * /*ctx*/) override { }
  virtual void exitImported_type(CidlParser::Imported_typeContext * /*ctx*/) override { }

  virtual void enterLocal_or_imported_type(CidlParser::Local_or_imported_typeContext * /*ctx*/) override { }
  virtual void exitLocal_or_imported_type(CidlParser::Local_or_imported_typeContext * /*ctx*/) override { }

  virtual void enterReference_type_name(CidlParser::Reference_type_nameContext * /*ctx*/) override { }
  virtual void exitReference_type_name(CidlParser::Reference_type_nameContext * /*ctx*/) override { }

  virtual void enterArray_type(CidlParser::Array_typeContext * /*ctx*/) override { }
  virtual void exitArray_type(CidlParser::Array_typeContext * /*ctx*/) override { }

  virtual void enterMethod_name(CidlParser::Method_nameContext * /*ctx*/) override { }
  virtual void exitMethod_name(CidlParser::Method_nameContext * /*ctx*/) override { }

  virtual void enterExpression(CidlParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CidlParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterUnary_expression(CidlParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(CidlParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterArgument(CidlParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(CidlParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterArgument_list(CidlParser::Argument_listContext * /*ctx*/) override { }
  virtual void exitArgument_list(CidlParser::Argument_listContext * /*ctx*/) override { }

  virtual void enterMethod_parameter(CidlParser::Method_parameterContext * /*ctx*/) override { }
  virtual void exitMethod_parameter(CidlParser::Method_parameterContext * /*ctx*/) override { }

  virtual void enterMethod_parameter_list(CidlParser::Method_parameter_listContext * /*ctx*/) override { }
  virtual void exitMethod_parameter_list(CidlParser::Method_parameter_listContext * /*ctx*/) override { }

  virtual void enterMethod_return_type(CidlParser::Method_return_typeContext * /*ctx*/) override { }
  virtual void exitMethod_return_type(CidlParser::Method_return_typeContext * /*ctx*/) override { }

  virtual void enterMethod(CidlParser::MethodContext * /*ctx*/) override { }
  virtual void exitMethod(CidlParser::MethodContext * /*ctx*/) override { }

  virtual void enterEnumField(CidlParser::EnumFieldContext * /*ctx*/) override { }
  virtual void exitEnumField(CidlParser::EnumFieldContext * /*ctx*/) override { }

  virtual void enterInterfaceInheritanceList(CidlParser::InterfaceInheritanceListContext * /*ctx*/) override { }
  virtual void exitInterfaceInheritanceList(CidlParser::InterfaceInheritanceListContext * /*ctx*/) override { }

  virtual void enterNumeric_literal(CidlParser::Numeric_literalContext * /*ctx*/) override { }
  virtual void exitNumeric_literal(CidlParser::Numeric_literalContext * /*ctx*/) override { }

  virtual void enterEnum_field_value(CidlParser::Enum_field_valueContext * /*ctx*/) override { }
  virtual void exitEnum_field_value(CidlParser::Enum_field_valueContext * /*ctx*/) override { }

  virtual void enterPrimitive(CidlParser::PrimitiveContext * /*ctx*/) override { }
  virtual void exitPrimitive(CidlParser::PrimitiveContext * /*ctx*/) override { }

  virtual void enterInteger_primitive(CidlParser::Integer_primitiveContext * /*ctx*/) override { }
  virtual void exitInteger_primitive(CidlParser::Integer_primitiveContext * /*ctx*/) override { }

  virtual void enterFloat_literal(CidlParser::Float_literalContext * /*ctx*/) override { }
  virtual void exitFloat_literal(CidlParser::Float_literalContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

