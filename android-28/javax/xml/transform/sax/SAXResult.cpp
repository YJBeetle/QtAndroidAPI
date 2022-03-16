#include "../../../../JString.hpp"
#include "./SAXResult.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	JString SAXResult::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXResult",
			"FEATURE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	SAXResult::SAXResult()
		: JObject(
			"javax.xml.transform.sax.SAXResult",
			"()V"
		) {}
	SAXResult::SAXResult(JObject arg0)
		: JObject(
			"javax.xml.transform.sax.SAXResult",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject SAXResult::getHandler() const
	{
		return callObjectMethod(
			"getHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	JObject SAXResult::getLexicalHandler() const
	{
		return callObjectMethod(
			"getLexicalHandler",
			"()Lorg/xml/sax/ext/LexicalHandler;"
		);
	}
	JString SAXResult::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	void SAXResult::setHandler(JObject arg0) const
	{
		callMethod<void>(
			"setHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	void SAXResult::setLexicalHandler(JObject arg0) const
	{
		callMethod<void>(
			"setLexicalHandler",
			"(Lorg/xml/sax/ext/LexicalHandler;)V",
			arg0.object()
		);
	}
	void SAXResult::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace javax::xml::transform::sax

