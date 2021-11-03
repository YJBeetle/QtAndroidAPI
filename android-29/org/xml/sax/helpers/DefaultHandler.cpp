#include "../../../../JCharArray.hpp"
#include "../../../../JString.hpp"
#include "../InputSource.hpp"
#include "../SAXParseException.hpp"
#include "./DefaultHandler.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QJniObject forward
	DefaultHandler::DefaultHandler(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DefaultHandler::DefaultHandler()
		: JObject(
			"org.xml.sax.helpers.DefaultHandler",
			"()V"
		) {}
	
	// Methods
	void DefaultHandler::characters(JCharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void DefaultHandler::endDocument()
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void DefaultHandler::endElement(JString arg0, JString arg1, JString arg2)
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void DefaultHandler::endPrefixMapping(JString arg0)
	{
		callMethod<void>(
			"endPrefixMapping",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DefaultHandler::error(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"error",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	void DefaultHandler::fatalError(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"fatalError",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	void DefaultHandler::ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void DefaultHandler::notationDecl(JString arg0, JString arg1, JString arg2)
	{
		callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void DefaultHandler::processingInstruction(JString arg0, JString arg1)
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	org::xml::sax::InputSource DefaultHandler::resolveEntity(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void DefaultHandler::setDocumentLocator(JObject arg0)
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	void DefaultHandler::skippedEntity(JString arg0)
	{
		callMethod<void>(
			"skippedEntity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DefaultHandler::startDocument()
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void DefaultHandler::startElement(JString arg0, JString arg1, JString arg2, JObject arg3)
	{
		callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	void DefaultHandler::startPrefixMapping(JString arg0, JString arg1)
	{
		callMethod<void>(
			"startPrefixMapping",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void DefaultHandler::unparsedEntityDecl(JString arg0, JString arg1, JString arg2, JString arg3)
	{
		callMethod<void>(
			"unparsedEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	void DefaultHandler::warning(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"warning",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
} // namespace org::xml::sax::helpers

