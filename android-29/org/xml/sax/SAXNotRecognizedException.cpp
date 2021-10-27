#include "./SAXNotRecognizedException.hpp"

namespace org::xml::sax
{
	// Fields
	
	SAXNotRecognizedException::SAXNotRecognizedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SAXNotRecognizedException::SAXNotRecognizedException()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotRecognizedException",
			"()V"
		);
	}
	SAXNotRecognizedException::SAXNotRecognizedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotRecognizedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SAXNotRecognizedException::SAXNotRecognizedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotRecognizedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace org::xml::sax

