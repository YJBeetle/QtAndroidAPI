#include "./SAXResult.hpp"

namespace javax::xml::transform::sax
{
	// Fields
	jstring SAXResult::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.sax.SAXResult",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	SAXResult::SAXResult(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SAXResult::SAXResult()
		: __JniBaseClass(
			"javax.xml.transform.sax.SAXResult",
			"()V"
		) {}
	SAXResult::SAXResult(__JniBaseClass arg0)
		: __JniBaseClass(
			"javax.xml.transform.sax.SAXResult",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		) {}
	
	// Methods
	__JniBaseClass SAXResult::getHandler()
	{
		return callObjectMethod(
			"getHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	__JniBaseClass SAXResult::getLexicalHandler()
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
	void SAXResult::setHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	void SAXResult::setLexicalHandler(__JniBaseClass arg0)
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

