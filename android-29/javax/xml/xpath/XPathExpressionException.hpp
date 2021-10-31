#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./XPathException.hpp"


namespace javax::xml::xpath
{
	class XPathExpressionException : public javax::xml::xpath::XPathException
	{
	public:
		// Fields
		
		XPathExpressionException(QAndroidJniObject obj);
		// Constructors
		XPathExpressionException(jstring arg0);
		XPathExpressionException(jthrowable arg0);
		XPathExpressionException() = default;
		
		// Methods
	};
} // namespace javax::xml::xpath

