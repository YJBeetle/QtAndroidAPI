#include "../InputSource.hpp"
#include "../SAXParseException.hpp"
#include "./XMLFilterImpl.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QJniObject forward
	XMLFilterImpl::XMLFilterImpl(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	XMLFilterImpl::XMLFilterImpl()
		: __JniBaseClass(
			"org.xml.sax.helpers.XMLFilterImpl",
			"()V"
		) {}
	XMLFilterImpl::XMLFilterImpl(__JniBaseClass arg0)
		: __JniBaseClass(
			"org.xml.sax.helpers.XMLFilterImpl",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.object()
		) {}
	
	// Methods
	void XMLFilterImpl::characters(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void XMLFilterImpl::endDocument()
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void XMLFilterImpl::endElement(jstring arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void XMLFilterImpl::endPrefixMapping(jstring arg0)
	{
		callMethod<void>(
			"endPrefixMapping",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void XMLFilterImpl::error(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"error",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::fatalError(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"fatalError",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	__JniBaseClass XMLFilterImpl::getContentHandler()
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	__JniBaseClass XMLFilterImpl::getDTDHandler()
	{
		return callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	__JniBaseClass XMLFilterImpl::getEntityResolver()
	{
		return callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	__JniBaseClass XMLFilterImpl::getErrorHandler()
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean XMLFilterImpl::getFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	__JniBaseClass XMLFilterImpl::getParent()
	{
		return callObjectMethod(
			"getParent",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	jobject XMLFilterImpl::getProperty(jstring arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void XMLFilterImpl::ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void XMLFilterImpl::notationDecl(jstring arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void XMLFilterImpl::parse(jstring arg0)
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void XMLFilterImpl::parse(org::xml::sax::InputSource arg0)
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::processingInstruction(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	org::xml::sax::InputSource XMLFilterImpl::resolveEntity(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0,
			arg1
		);
	}
	void XMLFilterImpl::setContentHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setDTDHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setDocumentLocator(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setEntityResolver(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setErrorHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setFeature(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void XMLFilterImpl::setParent(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setParent",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setProperty(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void XMLFilterImpl::skippedEntity(jstring arg0)
	{
		callMethod<void>(
			"skippedEntity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void XMLFilterImpl::startDocument()
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void XMLFilterImpl::startElement(jstring arg0, jstring arg1, jstring arg2, __JniBaseClass arg3)
	{
		callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void XMLFilterImpl::startPrefixMapping(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"startPrefixMapping",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void XMLFilterImpl::unparsedEntityDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
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
	void XMLFilterImpl::warning(org::xml::sax::SAXParseException arg0)
	{
		callMethod<void>(
			"warning",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
} // namespace org::xml::sax::helpers

