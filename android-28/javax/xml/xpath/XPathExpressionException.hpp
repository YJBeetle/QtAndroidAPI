#pragma once

#include "./XPathException.hpp"

class JString;
class JThrowable;

namespace javax::xml::xpath
{
	class XPathExpressionException : public javax::xml::xpath::XPathException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit XPathExpressionException(const char *className, const char *sig, Ts...agv) : javax::xml::xpath::XPathException(className, sig, std::forward<Ts>(agv)...) {}
		XPathExpressionException(QJniObject obj);
		
		// Constructors
		XPathExpressionException(JString arg0);
		XPathExpressionException(JThrowable arg0);
		
		// Methods
	};
} // namespace javax::xml::xpath

