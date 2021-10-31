#include "./InputSource.hpp"
#include "./SAXParseException.hpp"
#include "./HandlerBase.hpp"

namespace org::xml::sax
{
	// Fields
	
	// QAndroidJniObject forward
	HandlerBase::HandlerBase(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	HandlerBase::HandlerBase()
		: __JniBaseClass(
			"org.xml.sax.HandlerBase",
			"()V"
		) {}
	
	// Methods
	void HandlerBase::characters(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void HandlerBase::endDocument()
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void HandlerBase::endElement(jstring arg0)
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HandlerBase::error(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"error",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	void HandlerBase::fatalError(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"fatalError",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	void HandlerBase::ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void HandlerBase::notationDecl(jstring arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void HandlerBase::processingInstruction(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	org::xml::sax::InputSource HandlerBase::resolveEntity(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0,
			arg1
		);
	}
	void HandlerBase::setDocumentLocator(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	void HandlerBase::startDocument()
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void HandlerBase::startElement(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V",
			arg0,
			arg1.object()
		);
	}
	void HandlerBase::unparsedEntityDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		callMethod<void>(
			"unparsedEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void HandlerBase::warning(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"warning",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
} // namespace org::xml::sax

