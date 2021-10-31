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
		
		// QJniObject forward
		template<typename ...Ts> explicit XPathFunctionException(const char *className, const char *sig, Ts...agv) : javax::xml::xpath::XPathExpressionException(className, sig, std::forward<Ts>(agv)...) {}
		XPathFunctionException(QJniObject obj);
		
		// Constructors
		XPathFunctionException(jstring arg0);
		XPathFunctionException(jthrowable arg0);
		
		// Methods
	};
} // namespace javax::xml::xpath

