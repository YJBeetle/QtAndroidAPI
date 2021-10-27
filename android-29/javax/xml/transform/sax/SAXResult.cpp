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
	
	SAXResult::SAXResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SAXResult::SAXResult()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXResult",
			"()V"
		);
	}
	SAXResult::SAXResult(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.sax.SAXResult",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject SAXResult::getHandler()
	{
		return __thiz.callObjectMethod(
			"getHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	QAndroidJniObject SAXResult::getLexicalHandler()
	{
		return __thiz.callObjectMethod(
			"getLexicalHandler",
			"()Lorg/xml/sax/ext/LexicalHandler;"
		);
	}
	jstring SAXResult::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SAXResult::setHandler(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void SAXResult::setLexicalHandler(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setLexicalHandler",
			"(Lorg/xml/sax/ext/LexicalHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void SAXResult::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SAXResult::setSystemId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace javax::xml::transform::sax

