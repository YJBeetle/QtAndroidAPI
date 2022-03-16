#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./XPathFunctionException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// Constructors
	XPathFunctionException::XPathFunctionException(JString arg0)
		: javax::xml::xpath::XPathExpressionException(
			"javax.xml.xpath.XPathFunctionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	XPathFunctionException::XPathFunctionException(JThrowable arg0)
		: javax::xml::xpath::XPathExpressionException(
			"javax.xml.xpath.XPathFunctionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::xml::xpath

