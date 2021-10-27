#include "./SAXNotSupportedException.hpp"

namespace org::xml::sax
{
	// Fields
	
	SAXNotSupportedException::SAXNotSupportedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SAXNotSupportedException::SAXNotSupportedException()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotSupportedException",
			"()V"
		);
	}
	SAXNotSupportedException::SAXNotSupportedException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SAXNotSupportedException::SAXNotSupportedException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotSupportedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace org::xml::sax

