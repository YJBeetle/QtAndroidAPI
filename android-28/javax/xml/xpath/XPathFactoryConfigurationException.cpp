#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./XPathFactoryConfigurationException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// Constructors
	XPathFactoryConfigurationException::XPathFactoryConfigurationException(JString arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	XPathFactoryConfigurationException::XPathFactoryConfigurationException(JThrowable arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace javax::xml::xpath

