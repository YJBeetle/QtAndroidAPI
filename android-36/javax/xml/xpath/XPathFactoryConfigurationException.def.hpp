#pragma once

#include "./XPathException.def.hpp"

class JString;
class JThrowable;

namespace javax::xml::xpath
{
	class XPathFactoryConfigurationException : public javax::xml::xpath::XPathException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit XPathFactoryConfigurationException(const char *className, const char *sig, Ts...agv) : javax::xml::xpath::XPathException(className, sig, std::forward<Ts>(agv)...) {}
		XPathFactoryConfigurationException(QJniObject obj) : javax::xml::xpath::XPathException(obj) {}
		
		// Constructors
		XPathFactoryConfigurationException(JString arg0);
		XPathFactoryConfigurationException(JThrowable arg0);
		
		// Methods
	};
} // namespace javax::xml::xpath

