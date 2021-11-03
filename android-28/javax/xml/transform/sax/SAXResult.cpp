#include "./SAXResult.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	jstring SAXResult::FEATURE()
	{
		return getStaticObjectField(
			"javax.xml.transform.sax.SAXResult",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	SAXResult::SAXResult(QJniObject obj) : JObject(obj) {}
	
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
	JObject SAXResult::getHandler()
	{
		return callObjectMethod(
			"getHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	JObject SAXResult::getLexicalHandler()
	{
		return callObjectMethod(
			"getLexicalHandler",
			"()Lorg/xml/sax/ext/LexicalHandler;"
		);
	}
	jstring SAXResult::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SAXResult::setHandler(JObject arg0)
	{
		callMethod<void>(
			"setHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	void SAXResult::setLexicalHandler(JObject arg0)
	{
		callMethod<void>(
			"setLexicalHandler",
			"(Lorg/xml/sax/ext/LexicalHandler;)V",
			arg0.object()
		);
	}
	void SAXResult::setSystemId(jstring arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace javax::xml::transform::sax

