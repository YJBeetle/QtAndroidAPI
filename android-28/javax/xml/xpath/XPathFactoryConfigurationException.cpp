#include "./XPathFactoryConfigurationException.hpp"

namespace javax::xml::xpath
{
	// Fields
	
	// QAndroidJniObject forward
	XPathFactoryConfigurationException::XPathFactoryConfigurationException(QAndroidJniObject obj) : javax::xml::xpath::XPathException(obj) {}
	
	// Constructors
	XPathFactoryConfigurationException::XPathFactoryConfigurationException(jstring arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	XPathFactoryConfigurationException::XPathFactoryConfigurationException(jthrowable arg0)
		: javax::xml::xpath::XPathException(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	
	// Methods
} // namespace javax::xml::xpath

