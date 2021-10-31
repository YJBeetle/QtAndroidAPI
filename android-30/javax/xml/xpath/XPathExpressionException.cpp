#include "./XPathExpressionException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// QAndroidJniObject forward
	XPathExpressionException::XPathExpressionException(QAndroidJniObject obj) : javax::xml::xpath::XPathException(obj) {}
	
	// Constructors
	XPathExpressionException::XPathExpressionException(jstring arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	XPathExpressionException::XPathExpressionException(jthrowable arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::xml::xpath

