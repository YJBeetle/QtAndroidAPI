#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./XPathException.hpp"
#include "./XPathExpressionException.hpp"


namespace javax::xml::xpath
{
	class XPathFunctionException : public javax::xml::xpath::XPathExpressionException
	{
	public:
		// Fields
		
		XPathFunctionException(QAndroidJniObject obj);
		// Constructors
		XPathFunctionException(jstring &arg0);
		XPathFunctionException(const QString &arg0);
		XPathFunctionException(jthrowable &arg0);
		XPathFunctionException() = default;
		
		// Methods
	};
} // namespace javax::xml::xpath

