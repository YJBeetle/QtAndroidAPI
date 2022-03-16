#include "../../../../JCharArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../InputSource.hpp"
#include "../SAXParseException.hpp"
#include "./XMLFilterImpl.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	XMLFilterImpl::XMLFilterImpl()
		: JObject(
			"org.xml.sax.helpers.XMLFilterImpl",
			"()V"
		) {}
	XMLFilterImpl::XMLFilterImpl(JObject arg0)
		: JObject(
			"org.xml.sax.helpers.XMLFilterImpl",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.object()
		) {}
	
	// Methods
	void XMLFilterImpl::characters(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void XMLFilterImpl::endDocument() const
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void XMLFilterImpl::endElement(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void XMLFilterImpl::endPrefixMapping(JString arg0) const
	{
		callMethod<void>(
			"endPrefixMapping",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void XMLFilterImpl::error(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"error",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::fatalError(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"fatalError",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
	JObject XMLFilterImpl::getContentHandler() const
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	JObject XMLFilterImpl::getDTDHandler() const
	{
		return callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	JObject XMLFilterImpl::getEntityResolver() const
	{
		return callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	JObject XMLFilterImpl::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean XMLFilterImpl::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject XMLFilterImpl::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Lorg/xml/sax/XMLReader;"
		);
	}
	JObject XMLFilterImpl::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	void XMLFilterImpl::ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void XMLFilterImpl::notationDecl(JString arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"notationDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void XMLFilterImpl::parse(JString arg0) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void XMLFilterImpl::parse(org::xml::sax::InputSource arg0) const
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::processingInstruction(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	org::xml::sax::InputSource XMLFilterImpl::resolveEntity(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void XMLFilterImpl::setContentHandler(JObject arg0) const
	{
		callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setDTDHandler(JObject arg0) const
	{
		callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setDocumentLocator(JObject arg0) const
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setEntityResolver(JObject arg0) const
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void XMLFilterImpl::setParent(JObject arg0) const
	{
		callMethod<void>(
			"setParent",
			"(Lorg/xml/sax/XMLReader;)V",
			arg0.object()
		);
	}
	void XMLFilterImpl::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	void XMLFilterImpl::skippedEntity(JString arg0) const
	{
		callMethod<void>(
			"skippedEntity",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void XMLFilterImpl::startDocument() const
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void XMLFilterImpl::startElement(JString arg0, JString arg1, JString arg2, JObject arg3) const
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
	void XMLFilterImpl::startPrefixMapping(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"startPrefixMapping",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void XMLFilterImpl::unparsedEntityDecl(JString arg0, JString arg1, JString arg2, JString arg3) const
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
	void XMLFilterImpl::warning(org::xml::sax::SAXParseException arg0) const
	{
		callMethod<void>(
			"warning",
			"(Lorg/xml/sax/SAXParseException;)V",
			arg0.object()
		);
	}
} // namespace org::xml::sax::helpers

