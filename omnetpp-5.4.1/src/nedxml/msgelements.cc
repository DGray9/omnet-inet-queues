//==========================================================================
// Part of the OMNeT++/OMNEST Discrete Event Simulation System
//
// Generated from msg2.dtd by dtdclassgen.pl
//
//==========================================================================

/*--------------------------------------------------------------*
  Copyright (C) 2002-2017 Andras Varga

  This file is distributed WITHOUT ANY WARRANTY. See the file
  `license' for details on this and other legal matters.
*--------------------------------------------------------------*/

//
// THIS IS A GENERATED FILE, DO NOT EDIT!
//


#include <cstring>
#include "errorstore.h"
#include "exception.h"
#include "msgelements.h"

namespace omnetpp {
namespace nedxml {

MsgFileElement::MsgFileElement()
{
    applyDefaults();
}

MsgFileElement::MsgFileElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int MsgFileElement::getNumAttributes() const
{
    return 2;
}

const char *MsgFileElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "filename";
        case 1: return "version";
        default: return 0;
    }
}

const char *MsgFileElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return filename.c_str();
        case 1: return version.c_str();
        default: return 0;
    }
}

void MsgFileElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: filename = val; break;
        case 1: version = val; break;
        default: ;
    }
}

const char *MsgFileElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return "";
        case 1: return "2";
        default: return 0;
    }
}

MsgFileElement *MsgFileElement::dup() const
{
    MsgFileElement *element = new MsgFileElement();
    element->filename = this->filename;
    element->version = this->version;
    return element;
}

MsgFileElement *MsgFileElement::getNextMsgFileSibling() const
{
    return static_cast<MsgFileElement *>(getNextSiblingWithTag(MSG_MSG_FILE));
}

CommentElement *MsgFileElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

NamespaceElement *MsgFileElement::getFirstNamespaceChild() const
{
    return static_cast<NamespaceElement *>(getFirstChildWithTag(MSG_NAMESPACE));
}

PropertyElement *MsgFileElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(MSG_PROPERTY));
}

CplusplusElement *MsgFileElement::getFirstCplusplusChild() const
{
    return static_cast<CplusplusElement *>(getFirstChildWithTag(MSG_CPLUSPLUS));
}

ImportElement *MsgFileElement::getFirstImportChild() const
{
    return static_cast<ImportElement *>(getFirstChildWithTag(MSG_IMPORT));
}

StructDeclElement *MsgFileElement::getFirstStructDeclChild() const
{
    return static_cast<StructDeclElement *>(getFirstChildWithTag(MSG_STRUCT_DECL));
}

ClassDeclElement *MsgFileElement::getFirstClassDeclChild() const
{
    return static_cast<ClassDeclElement *>(getFirstChildWithTag(MSG_CLASS_DECL));
}

MessageDeclElement *MsgFileElement::getFirstMessageDeclChild() const
{
    return static_cast<MessageDeclElement *>(getFirstChildWithTag(MSG_MESSAGE_DECL));
}

PacketDeclElement *MsgFileElement::getFirstPacketDeclChild() const
{
    return static_cast<PacketDeclElement *>(getFirstChildWithTag(MSG_PACKET_DECL));
}

EnumDeclElement *MsgFileElement::getFirstEnumDeclChild() const
{
    return static_cast<EnumDeclElement *>(getFirstChildWithTag(MSG_ENUM_DECL));
}

StructElement *MsgFileElement::getFirstStructChild() const
{
    return static_cast<StructElement *>(getFirstChildWithTag(MSG_STRUCT));
}

ClassElement *MsgFileElement::getFirstClassChild() const
{
    return static_cast<ClassElement *>(getFirstChildWithTag(MSG_CLASS));
}

MessageElement *MsgFileElement::getFirstMessageChild() const
{
    return static_cast<MessageElement *>(getFirstChildWithTag(MSG_MESSAGE));
}

PacketElement *MsgFileElement::getFirstPacketChild() const
{
    return static_cast<PacketElement *>(getFirstChildWithTag(MSG_PACKET));
}

EnumElement *MsgFileElement::getFirstEnumChild() const
{
    return static_cast<EnumElement *>(getFirstChildWithTag(MSG_ENUM));
}

NamespaceElement::NamespaceElement()
{
    applyDefaults();
}

NamespaceElement::NamespaceElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int NamespaceElement::getNumAttributes() const
{
    return 1;
}

const char *NamespaceElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        default: return 0;
    }
}

const char *NamespaceElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        default: return 0;
    }
}

void NamespaceElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        default: ;
    }
}

const char *NamespaceElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        default: return 0;
    }
}

NamespaceElement *NamespaceElement::dup() const
{
    NamespaceElement *element = new NamespaceElement();
    element->name = this->name;
    return element;
}

NamespaceElement *NamespaceElement::getNextNamespaceSibling() const
{
    return static_cast<NamespaceElement *>(getNextSiblingWithTag(MSG_NAMESPACE));
}

CommentElement *NamespaceElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

CplusplusElement::CplusplusElement()
{
    applyDefaults();
}

CplusplusElement::CplusplusElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int CplusplusElement::getNumAttributes() const
{
    return 2;
}

const char *CplusplusElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "target";
        case 1: return "body";
        default: return 0;
    }
}

const char *CplusplusElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return target.c_str();
        case 1: return body.c_str();
        default: return 0;
    }
}

void CplusplusElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: target = val; break;
        case 1: body = val; break;
        default: ;
    }
}

const char *CplusplusElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return "";
        case 1: return nullptr;
        default: return 0;
    }
}

CplusplusElement *CplusplusElement::dup() const
{
    CplusplusElement *element = new CplusplusElement();
    element->target = this->target;
    element->body = this->body;
    return element;
}

CplusplusElement *CplusplusElement::getNextCplusplusSibling() const
{
    return static_cast<CplusplusElement *>(getNextSiblingWithTag(MSG_CPLUSPLUS));
}

CommentElement *CplusplusElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

StructDeclElement::StructDeclElement()
{
    applyDefaults();
}

StructDeclElement::StructDeclElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int StructDeclElement::getNumAttributes() const
{
    return 1;
}

const char *StructDeclElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        default: return 0;
    }
}

const char *StructDeclElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        default: return 0;
    }
}

void StructDeclElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        default: ;
    }
}

const char *StructDeclElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        default: return 0;
    }
}

StructDeclElement *StructDeclElement::dup() const
{
    StructDeclElement *element = new StructDeclElement();
    element->name = this->name;
    return element;
}

StructDeclElement *StructDeclElement::getNextStructDeclSibling() const
{
    return static_cast<StructDeclElement *>(getNextSiblingWithTag(MSG_STRUCT_DECL));
}

CommentElement *StructDeclElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

ClassDeclElement::ClassDeclElement()
{
    isCobject = false;
    applyDefaults();
}

ClassDeclElement::ClassDeclElement(ASTNode *parent) : ASTNode(parent)
{
    isCobject = false;
    applyDefaults();
}

int ClassDeclElement::getNumAttributes() const
{
    return 3;
}

const char *ClassDeclElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        case 1: return "is-cobject";
        case 2: return "extends-name";
        default: return 0;
    }
}

const char *ClassDeclElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        case 1: return boolToString(isCobject);
        case 2: return extendsName.c_str();
        default: return 0;
    }
}

void ClassDeclElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        case 1: isCobject = stringToBool(val); break;
        case 2: extendsName = val; break;
        default: ;
    }
}

const char *ClassDeclElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        case 1: return "false";
        case 2: return "";
        default: return 0;
    }
}

ClassDeclElement *ClassDeclElement::dup() const
{
    ClassDeclElement *element = new ClassDeclElement();
    element->name = this->name;
    element->isCobject = this->isCobject;
    element->extendsName = this->extendsName;
    return element;
}

ClassDeclElement *ClassDeclElement::getNextClassDeclSibling() const
{
    return static_cast<ClassDeclElement *>(getNextSiblingWithTag(MSG_CLASS_DECL));
}

CommentElement *ClassDeclElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

MessageDeclElement::MessageDeclElement()
{
    applyDefaults();
}

MessageDeclElement::MessageDeclElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int MessageDeclElement::getNumAttributes() const
{
    return 1;
}

const char *MessageDeclElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        default: return 0;
    }
}

const char *MessageDeclElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        default: return 0;
    }
}

void MessageDeclElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        default: ;
    }
}

const char *MessageDeclElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        default: return 0;
    }
}

MessageDeclElement *MessageDeclElement::dup() const
{
    MessageDeclElement *element = new MessageDeclElement();
    element->name = this->name;
    return element;
}

MessageDeclElement *MessageDeclElement::getNextMessageDeclSibling() const
{
    return static_cast<MessageDeclElement *>(getNextSiblingWithTag(MSG_MESSAGE_DECL));
}

CommentElement *MessageDeclElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

PacketDeclElement::PacketDeclElement()
{
    applyDefaults();
}

PacketDeclElement::PacketDeclElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int PacketDeclElement::getNumAttributes() const
{
    return 1;
}

const char *PacketDeclElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        default: return 0;
    }
}

const char *PacketDeclElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        default: return 0;
    }
}

void PacketDeclElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        default: ;
    }
}

const char *PacketDeclElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        default: return 0;
    }
}

PacketDeclElement *PacketDeclElement::dup() const
{
    PacketDeclElement *element = new PacketDeclElement();
    element->name = this->name;
    return element;
}

PacketDeclElement *PacketDeclElement::getNextPacketDeclSibling() const
{
    return static_cast<PacketDeclElement *>(getNextSiblingWithTag(MSG_PACKET_DECL));
}

CommentElement *PacketDeclElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

EnumDeclElement::EnumDeclElement()
{
    applyDefaults();
}

EnumDeclElement::EnumDeclElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int EnumDeclElement::getNumAttributes() const
{
    return 1;
}

const char *EnumDeclElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        default: return 0;
    }
}

const char *EnumDeclElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        default: return 0;
    }
}

void EnumDeclElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        default: ;
    }
}

const char *EnumDeclElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        default: return 0;
    }
}

EnumDeclElement *EnumDeclElement::dup() const
{
    EnumDeclElement *element = new EnumDeclElement();
    element->name = this->name;
    return element;
}

EnumDeclElement *EnumDeclElement::getNextEnumDeclSibling() const
{
    return static_cast<EnumDeclElement *>(getNextSiblingWithTag(MSG_ENUM_DECL));
}

CommentElement *EnumDeclElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

EnumElement::EnumElement()
{
    applyDefaults();
}

EnumElement::EnumElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int EnumElement::getNumAttributes() const
{
    return 3;
}

const char *EnumElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        case 1: return "extends-name";
        case 2: return "source-code";
        default: return 0;
    }
}

const char *EnumElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        case 1: return extendsName.c_str();
        case 2: return sourceCode.c_str();
        default: return 0;
    }
}

void EnumElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        case 1: extendsName = val; break;
        case 2: sourceCode = val; break;
        default: ;
    }
}

const char *EnumElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        case 1: return "";
        case 2: return "";
        default: return 0;
    }
}

EnumElement *EnumElement::dup() const
{
    EnumElement *element = new EnumElement();
    element->name = this->name;
    element->extendsName = this->extendsName;
    element->sourceCode = this->sourceCode;
    return element;
}

EnumElement *EnumElement::getNextEnumSibling() const
{
    return static_cast<EnumElement *>(getNextSiblingWithTag(MSG_ENUM));
}

CommentElement *EnumElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

EnumFieldElement *EnumElement::getFirstEnumFieldChild() const
{
    return static_cast<EnumFieldElement *>(getFirstChildWithTag(MSG_ENUM_FIELD));
}

EnumFieldElement::EnumFieldElement()
{
    applyDefaults();
}

EnumFieldElement::EnumFieldElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int EnumFieldElement::getNumAttributes() const
{
    return 2;
}

const char *EnumFieldElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        case 1: return "value";
        default: return 0;
    }
}

const char *EnumFieldElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        case 1: return value.c_str();
        default: return 0;
    }
}

void EnumFieldElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        case 1: value = val; break;
        default: ;
    }
}

const char *EnumFieldElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        case 1: return "";
        default: return 0;
    }
}

EnumFieldElement *EnumFieldElement::dup() const
{
    EnumFieldElement *element = new EnumFieldElement();
    element->name = this->name;
    element->value = this->value;
    return element;
}

EnumFieldElement *EnumFieldElement::getNextEnumFieldSibling() const
{
    return static_cast<EnumFieldElement *>(getNextSiblingWithTag(MSG_ENUM_FIELD));
}

CommentElement *EnumFieldElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

MessageElement::MessageElement()
{
    applyDefaults();
}

MessageElement::MessageElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int MessageElement::getNumAttributes() const
{
    return 3;
}

const char *MessageElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        case 1: return "extends-name";
        case 2: return "source-code";
        default: return 0;
    }
}

const char *MessageElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        case 1: return extendsName.c_str();
        case 2: return sourceCode.c_str();
        default: return 0;
    }
}

void MessageElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        case 1: extendsName = val; break;
        case 2: sourceCode = val; break;
        default: ;
    }
}

const char *MessageElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        case 1: return "";
        case 2: return "";
        default: return 0;
    }
}

MessageElement *MessageElement::dup() const
{
    MessageElement *element = new MessageElement();
    element->name = this->name;
    element->extendsName = this->extendsName;
    element->sourceCode = this->sourceCode;
    return element;
}

MessageElement *MessageElement::getNextMessageSibling() const
{
    return static_cast<MessageElement *>(getNextSiblingWithTag(MSG_MESSAGE));
}

CommentElement *MessageElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

PropertyElement *MessageElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(MSG_PROPERTY));
}

FieldElement *MessageElement::getFirstFieldChild() const
{
    return static_cast<FieldElement *>(getFirstChildWithTag(MSG_FIELD));
}

PacketElement::PacketElement()
{
    applyDefaults();
}

PacketElement::PacketElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int PacketElement::getNumAttributes() const
{
    return 3;
}

const char *PacketElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        case 1: return "extends-name";
        case 2: return "source-code";
        default: return 0;
    }
}

const char *PacketElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        case 1: return extendsName.c_str();
        case 2: return sourceCode.c_str();
        default: return 0;
    }
}

void PacketElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        case 1: extendsName = val; break;
        case 2: sourceCode = val; break;
        default: ;
    }
}

const char *PacketElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        case 1: return "";
        case 2: return "";
        default: return 0;
    }
}

PacketElement *PacketElement::dup() const
{
    PacketElement *element = new PacketElement();
    element->name = this->name;
    element->extendsName = this->extendsName;
    element->sourceCode = this->sourceCode;
    return element;
}

PacketElement *PacketElement::getNextPacketSibling() const
{
    return static_cast<PacketElement *>(getNextSiblingWithTag(MSG_PACKET));
}

CommentElement *PacketElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

PropertyElement *PacketElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(MSG_PROPERTY));
}

FieldElement *PacketElement::getFirstFieldChild() const
{
    return static_cast<FieldElement *>(getFirstChildWithTag(MSG_FIELD));
}

ClassElement::ClassElement()
{
    applyDefaults();
}

ClassElement::ClassElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int ClassElement::getNumAttributes() const
{
    return 3;
}

const char *ClassElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        case 1: return "extends-name";
        case 2: return "source-code";
        default: return 0;
    }
}

const char *ClassElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        case 1: return extendsName.c_str();
        case 2: return sourceCode.c_str();
        default: return 0;
    }
}

void ClassElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        case 1: extendsName = val; break;
        case 2: sourceCode = val; break;
        default: ;
    }
}

const char *ClassElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        case 1: return "";
        case 2: return "";
        default: return 0;
    }
}

ClassElement *ClassElement::dup() const
{
    ClassElement *element = new ClassElement();
    element->name = this->name;
    element->extendsName = this->extendsName;
    element->sourceCode = this->sourceCode;
    return element;
}

ClassElement *ClassElement::getNextClassSibling() const
{
    return static_cast<ClassElement *>(getNextSiblingWithTag(MSG_CLASS));
}

CommentElement *ClassElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

PropertyElement *ClassElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(MSG_PROPERTY));
}

FieldElement *ClassElement::getFirstFieldChild() const
{
    return static_cast<FieldElement *>(getFirstChildWithTag(MSG_FIELD));
}

StructElement::StructElement()
{
    applyDefaults();
}

StructElement::StructElement(ASTNode *parent) : ASTNode(parent)
{
    applyDefaults();
}

int StructElement::getNumAttributes() const
{
    return 3;
}

const char *StructElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        case 1: return "extends-name";
        case 2: return "source-code";
        default: return 0;
    }
}

const char *StructElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        case 1: return extendsName.c_str();
        case 2: return sourceCode.c_str();
        default: return 0;
    }
}

void StructElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        case 1: extendsName = val; break;
        case 2: sourceCode = val; break;
        default: ;
    }
}

const char *StructElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        case 1: return "";
        case 2: return "";
        default: return 0;
    }
}

StructElement *StructElement::dup() const
{
    StructElement *element = new StructElement();
    element->name = this->name;
    element->extendsName = this->extendsName;
    element->sourceCode = this->sourceCode;
    return element;
}

StructElement *StructElement::getNextStructSibling() const
{
    return static_cast<StructElement *>(getNextSiblingWithTag(MSG_STRUCT));
}

CommentElement *StructElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

PropertyElement *StructElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(MSG_PROPERTY));
}

FieldElement *StructElement::getFirstFieldChild() const
{
    return static_cast<FieldElement *>(getFirstChildWithTag(MSG_FIELD));
}

FieldElement::FieldElement()
{
    isAbstract = false;
    isConst = false;
    isPointer = false;
    isVector = false;
    applyDefaults();
}

FieldElement::FieldElement(ASTNode *parent) : ASTNode(parent)
{
    isAbstract = false;
    isConst = false;
    isPointer = false;
    isVector = false;
    applyDefaults();
}

int FieldElement::getNumAttributes() const
{
    return 8;
}

const char *FieldElement::getAttributeName(int k) const
{
    switch (k) {
        case 0: return "name";
        case 1: return "data-type";
        case 2: return "is-abstract";
        case 3: return "is-const";
        case 4: return "is-pointer";
        case 5: return "is-vector";
        case 6: return "vector-size";
        case 7: return "default-value";
        default: return 0;
    }
}

const char *FieldElement::getAttribute(int k) const
{
    switch (k) {
        case 0: return name.c_str();
        case 1: return dataType.c_str();
        case 2: return boolToString(isAbstract);
        case 3: return boolToString(isConst);
        case 4: return boolToString(isPointer);
        case 5: return boolToString(isVector);
        case 6: return vectorSize.c_str();
        case 7: return defaultValue.c_str();
        default: return 0;
    }
}

void FieldElement::setAttribute(int k, const char *val)
{
    switch (k) {
        case 0: name = val; break;
        case 1: dataType = val; break;
        case 2: isAbstract = stringToBool(val); break;
        case 3: isConst = stringToBool(val); break;
        case 4: isPointer = stringToBool(val); break;
        case 5: isVector = stringToBool(val); break;
        case 6: vectorSize = val; break;
        case 7: defaultValue = val; break;
        default: ;
    }
}

const char *FieldElement::getAttributeDefault(int k) const
{
    switch (k) {
        case 0: return nullptr;
        case 1: return "";
        case 2: return "false";
        case 3: return "false";
        case 4: return "false";
        case 5: return "false";
        case 6: return "";
        case 7: return "";
        default: return 0;
    }
}

FieldElement *FieldElement::dup() const
{
    FieldElement *element = new FieldElement();
    element->name = this->name;
    element->dataType = this->dataType;
    element->isAbstract = this->isAbstract;
    element->isConst = this->isConst;
    element->isPointer = this->isPointer;
    element->isVector = this->isVector;
    element->vectorSize = this->vectorSize;
    element->defaultValue = this->defaultValue;
    return element;
}

FieldElement *FieldElement::getNextFieldSibling() const
{
    return static_cast<FieldElement *>(getNextSiblingWithTag(MSG_FIELD));
}

CommentElement *FieldElement::getFirstCommentChild() const
{
    return static_cast<CommentElement *>(getFirstChildWithTag(MSG_COMMENT));
}

PropertyElement *FieldElement::getFirstPropertyChild() const
{
    return static_cast<PropertyElement *>(getFirstChildWithTag(MSG_PROPERTY));
}

ASTNode *MsgAstNodeFactory::createElementWithTag(const char *tagname)
{
    if (tagname[0]=='f' && !strcmp(tagname,"files"))  return new FilesElement();
    if (tagname[0]=='m' && !strcmp(tagname,"msg-file"))  return new MsgFileElement();
    if (tagname[0]=='c' && !strcmp(tagname,"comment"))  return new CommentElement();
    if (tagname[0]=='i' && !strcmp(tagname,"import"))  return new ImportElement();
    if (tagname[0]=='p' && !strcmp(tagname,"property"))  return new PropertyElement();
    if (tagname[0]=='p' && !strcmp(tagname,"property-key"))  return new PropertyKeyElement();
    if (tagname[0]=='l' && !strcmp(tagname,"literal"))  return new LiteralElement();
    if (tagname[0]=='n' && !strcmp(tagname,"namespace"))  return new NamespaceElement();
    if (tagname[0]=='c' && !strcmp(tagname,"cplusplus"))  return new CplusplusElement();
    if (tagname[0]=='s' && !strcmp(tagname,"struct-decl"))  return new StructDeclElement();
    if (tagname[0]=='c' && !strcmp(tagname,"class-decl"))  return new ClassDeclElement();
    if (tagname[0]=='m' && !strcmp(tagname,"message-decl"))  return new MessageDeclElement();
    if (tagname[0]=='p' && !strcmp(tagname,"packet-decl"))  return new PacketDeclElement();
    if (tagname[0]=='e' && !strcmp(tagname,"enum-decl"))  return new EnumDeclElement();
    if (tagname[0]=='e' && !strcmp(tagname,"enum"))  return new EnumElement();
    if (tagname[0]=='e' && !strcmp(tagname,"enum-field"))  return new EnumFieldElement();
    if (tagname[0]=='m' && !strcmp(tagname,"message"))  return new MessageElement();
    if (tagname[0]=='p' && !strcmp(tagname,"packet"))  return new PacketElement();
    if (tagname[0]=='c' && !strcmp(tagname,"class"))  return new ClassElement();
    if (tagname[0]=='s' && !strcmp(tagname,"struct"))  return new StructElement();
    if (tagname[0]=='f' && !strcmp(tagname,"field"))  return new FieldElement();
    if (tagname[0]=='u' && !strcmp(tagname,"unknown"))  return new UnknownElement();
    throw NedException("unknown tag '%s', cannot create object to represent it", tagname);
}

ASTNode *MsgAstNodeFactory::createElementWithTag(int tagcode)
{
    switch (tagcode) {
        case MSG_FILES: return new FilesElement();
        case MSG_MSG_FILE: return new MsgFileElement();
        case MSG_COMMENT: return new CommentElement();
        case MSG_IMPORT: return new ImportElement();
        case MSG_PROPERTY: return new PropertyElement();
        case MSG_PROPERTY_KEY: return new PropertyKeyElement();
        case MSG_LITERAL: return new LiteralElement();
        case MSG_NAMESPACE: return new NamespaceElement();
        case MSG_CPLUSPLUS: return new CplusplusElement();
        case MSG_STRUCT_DECL: return new StructDeclElement();
        case MSG_CLASS_DECL: return new ClassDeclElement();
        case MSG_MESSAGE_DECL: return new MessageDeclElement();
        case MSG_PACKET_DECL: return new PacketDeclElement();
        case MSG_ENUM_DECL: return new EnumDeclElement();
        case MSG_ENUM: return new EnumElement();
        case MSG_ENUM_FIELD: return new EnumFieldElement();
        case MSG_MESSAGE: return new MessageElement();
        case MSG_PACKET: return new PacketElement();
        case MSG_CLASS: return new ClassElement();
        case MSG_STRUCT: return new StructElement();
        case MSG_FIELD: return new FieldElement();
        case MSG_UNKNOWN: return new UnknownElement();
    }
    throw NedException("unknown tag code %d, cannot create object to represent it", tagcode);
}

} // namespace nedxml
} // namespace omnetpp

