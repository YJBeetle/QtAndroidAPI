#pragma once

#include "./XPathException.def.hpp"

class JString;
class JThrowable;

namespace javax::xml::xpath
{
	class XPathExpressionException : public javax::xml::xpath::XPathException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XPathExpressionException(const char *className, const char *sig, Ts...agv) : javax::xml::xpath::XPathException(className, sig, std::forward<Ts>(agv)...) {}
		XPathExpressionException(QAndroidJniObject obj) : javax::xml::xpath::XPathException(obj) {}
		
		// Constructors
		XPathExpressionException(JString arg0);
		XPathExpressionException(JThrowable arg0);
		
		// Methods
	};
} // namespace javax::xml::xpath

