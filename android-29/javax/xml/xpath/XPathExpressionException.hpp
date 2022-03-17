#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./XPathExpressionException.def.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// Constructors
	inline XPathExpressionException::XPathExpressionException(JString arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline XPathExpressionException::XPathExpressionException(JThrowable arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::xml::xpath

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./XPathException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::xml::xpath;
#endif
