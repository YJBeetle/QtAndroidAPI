#include "../InputSource.hpp"
#include "./DefaultHandler2.hpp"

namespace org::xml::sax::ext
{
	// Fields
	
	// QJniObject forward
	DefaultHandler2::DefaultHandler2(QJniObject obj) : org::xml::sax::helpers::DefaultHandler(obj) {}
	
	// Constructors
	DefaultHandler2::DefaultHandler2()
		: org::xml::sax::helpers::DefaultHandler(
			"org.xml.sax.ext.DefaultHandler2",
			"()V"
		) {}
	
	// Methods
	void DefaultHandler2::attributeDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		callMethod<void>(
			"attributeDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void DefaultHandler2::comment(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"comment",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DefaultHandler2::elementDecl(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"elementDecl",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DefaultHandler2::endCDATA()
	{
		callMethod<void>(
			"endCDATA",
			"()V"
		);
	}
	void DefaultHandler2::endDTD()
	{
		callMethod<void>(
			"endDTD",
			"()V"
		);
	}
	void DefaultHandler2::endEntity(jstring arg0)
	{
		callMethod<void>(
			"endEntity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DefaultHandler2::externalEntityDecl(jstring arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"externalEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	org::xml::sax::InputSource DefaultHandler2::getExternalSubset(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getExternalSubset",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0,
			arg1
		);
	}
	void DefaultHandler2::internalEntityDecl(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"internalEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	org::xml::sax::InputSource DefaultHandler2::resolveEntity(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0,
			arg1
		);
	}
	org::xml::sax::InputSource DefaultHandler2::resolveEntity(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void DefaultHandler2::startCDATA()
	{
		callMethod<void>(
			"startCDATA",
			"()V"
		);
	}
	void DefaultHandler2::startDTD(jstring arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"startDTD",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DefaultHandler2::startEntity(jstring arg0)
	{
		callMethod<void>(
			"startEntity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace org::xml::sax::ext

