#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./XPathExpressionException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// QAndroidJniObject forward
	XPathExpressionException::XPathExpressionException(QAndroidJniObject obj) : javax::xml::xpath::XPathException(obj) {}
	
	// Constructors
	XPathExpressionException::XPathExpressionException(JString arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	XPathExpressionException::XPathExpressionException(JThrowable arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::xml::xpath

