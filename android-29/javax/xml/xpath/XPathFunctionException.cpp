#include "./XPathFunctionException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	XPathFunctionException::XPathFunctionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	XPathFunctionException::XPathFunctionException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathFunctionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	XPathFunctionException::XPathFunctionException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathFunctionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace javax::xml::xpath

