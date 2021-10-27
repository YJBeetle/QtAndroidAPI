#include "./XPathExpressionException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	XPathExpressionException::XPathExpressionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	XPathExpressionException::XPathExpressionException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	XPathExpressionException::XPathExpressionException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	XPathExpressionException::XPathExpressionException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::xml::xpath

