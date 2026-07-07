#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./XPathFunctionException.def.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// Constructors
	inline XPathFunctionException::XPathFunctionException(JString arg0)
		: javax::xml::xpath::XPathExpressionException(
			"javax.xml.xpath.XPathFunctionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline XPathFunctionException::XPathFunctionException(JThrowable arg0)
		: javax::xml::xpath::XPathExpressionException(
			"javax.xml.xpath.XPathFunctionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::xml::xpath

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./XPathException.hpp"
#include "./XPathExpressionException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::xpath;
#endif
