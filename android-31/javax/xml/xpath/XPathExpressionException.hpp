#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./XPathException.hpp"


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
		XPathExpressionException(jstring arg0);
		XPathExpressionException(jthrowable arg0);
		
		// Methods
	};
} // namespace javax::xml::xpath

