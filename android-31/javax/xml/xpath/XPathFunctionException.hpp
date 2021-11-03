#pragma once

#include "./XPathExpressionException.hpp"

class JString;
class JThrowable;

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
		XPathFunctionException(JString arg0);
		XPathFunctionException(JThrowable arg0);
		
		// Methods
	};
} // namespace javax::xml::xpath

