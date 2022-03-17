#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./XPathFactoryConfigurationException.def.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// Constructors
	inline XPathFactoryConfigurationException::XPathFactoryConfigurationException(JString arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline XPathFactoryConfigurationException::XPathFactoryConfigurationException(JThrowable arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::xml::xpath

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "./XPathException.hpp"

