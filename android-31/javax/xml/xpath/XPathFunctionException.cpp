#include "./XPathFunctionException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// QAndroidJniObject forward
	XPathFunctionException::XPathFunctionException(QAndroidJniObject obj) : javax::xml::xpath::XPathExpressionException(obj) {}
	
	// Constructors
	XPathFunctionException::XPathFunctionException(jstring arg0)
		: javax::xml::xpath::XPathExpressionException(
			"javax.xml.xpath.XPathFunctionException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	XPathFunctionException::XPathFunctionException(jthrowable arg0)
		: javax::xml::xpath::XPathExpressionException(
			"javax.xml.xpath.XPathFunctionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::xml::xpath

